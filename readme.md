# This repository will include all example of TDM-SIM7600CE, TDM-A7600C-L1, A7670C/A7670C-LASS Module base on ESP32 in arduino
---
#### Order easy online at:
- __[TDM-SIM7600CE-M1S](https://linhkienthuduc.com/module-4g-3g-2g-gps-simcom-sim7600ce-m1s-lte-cat-4-ra-chan)__ - 2G/3G/4G LTE CAT 4 GPS BREAKOUT MODULE
- __[TDM-A7600C-L1](https://linhkienthuduc.com/module-4g-3g-2g-simcom-a7600c-l1-lte-cat-1-ra-chan)__ - 2G/3G/4G LTE CAT 1 BREAKOUT MODULE.
- __[A7670C-LASS](https://linhkienthuduc.com/module-4g-simcom-a7670c-lass-da-ra-chan-thay-the-module-sim800l)__ - 2G/3G/4G LTE CAT 1 BREAKOUT MODULE.

----
This repo will provide you all data for these module!
These module can replaces SIM800L module with complete pinout board & power converter, IO level shifter for your design

---

---
## AT Command Test GUI:

[User Guide ( Vietnamese)](https://linhkienthuduc.com/at-command-test-cho-cac-dong-module-sim)

[DOWNLOAD HERE](https://github.com/TDLOGY/ATCommand_Test)

See more our product at  [www.tdmaker.space](https://tdlogy.com/en/makerspace/)

---

## Arduino ESP32 Setup
[Setup ESP32 on Arduino ( Vietnamese)](https://linhkienthuduc.com/news/news?news_id=52)


## Connection
| Module SIM      |   ESP32 (Power) |
| ------    | ----------- |
| Vin|      |5-16V|
|GND| GND|
|TX| GPIO 16 (MCU UART2 RX)|
|RX| GPIO 17 (MCU UART2 TX)|
|EN| Floating (Depend on hardware|

## Note
Please define your phone number at 
```
// Please update number before test
#define PHONE_NUMBER                "+84989....."
```

## Other tutorial
- [ESP32 PPPOS (Point to Point over serial)](https://github.com/TDLOGY/esp32_pppos)
- [ESP32 PPPOS Arrduino (Point to Point over serial)](https://github.com/TDLOGY/esp32_pppos_arrduino)
- [ESP32 C3 ESP-IDF Setup](https://linhkienthuduc.com/bat-dau-lap-trinh-voi-esp-idf-thiet-lap-moi-truong-phat-trien-va-lap-trinh)
