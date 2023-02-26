
#include <HardwareSerial.h>

#define simSerial               Serial2
#define MCU_SIM_BAUDRATE        115200
#define MCU_SIM_TX_PIN              17
#define MCU_SIM_RX_PIN              16

// Please update number before test
#define PHONE_NUMBER                "+84989....."

void sim_at_wait()
{
    delay(100);
    while (simSerial.available()) {
        Serial.write(simSerial.read());
    }
}

bool sim_at_cmd(String cmd){
    simSerial.println(cmd);
    sim_at_wait();
}

bool sim_at_send(char c){
    simSerial.write(c);
}

void sent_sms()
{
    sim_at_cmd("AT+CMGF=1");
    String temp = "AT+CMGS=\"";
    temp += (String)PHONE_NUMBER;
    temp += "\"";
    sim_at_cmd(temp);
    sim_at_cmd("ESP32-SIM7600X From linhkienthuduc.com");

    // End charactor for SMS
    sim_at_send(0x1A);
}

void call()
{
    String temp = "ATD";
    temp += PHONE_NUMBER;
    temp += ";";
    sim_at_cmd(temp); 

    delay(20000);

    // Hang up
    sim_at_cmd("ATH"); 
}

void setup() 
{
    delay(2000);
    Serial.begin(115200);
    Serial.println("\n\n\n\n-----------------------\nSystem started!!!!");
    simSerial.begin(MCU_SIM_BAUDRATE, SERIAL_8N1, MCU_SIM_RX_PIN, MCU_SIM_TX_PIN);

    // Delay 5s for power on
    delay(5000);

    // Check AT Command
    sim_at_cmd("AT");

    // Product infor
    sim_at_cmd("ATI");

    // Check SIM Slot
    sim_at_cmd("AT+CPIN?");

    // Check Signal Quality
    sim_at_cmd("AT+CSQ");

    sim_at_cmd("AT+CIMI");

    pinMode(2,OUTPUT); 
    digitalWrite(2,HIGH);

    sent_sms();

    // Delay 5s
    delay(5000);   

    call();
}

void loop() 
{     
    if (Serial.available()){
        char c = Serial.read();
        simSerial.write(c);
    }
    sim_at_wait();
}
