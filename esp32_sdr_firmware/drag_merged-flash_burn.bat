REM uses flash mode DIO, ESP32C3
REM 2022-10-09, ESP32_Frequency_generation_2MHz_10MHz.ino firmware
REM burn test ok

:: To erase esp32 completely, do not rely on Arduino IDE and code upload, it has cluster and odd thing when uses FATFS, 
:: unless format SPIFFS or FATFS everytime on the fly
:: xiaolaba, 2020-MAR-02
:: Arduino 1.8.16, esptool and path,

REM %userprofile%



prompt xiao$$  
cls

@echo off
:: change your com#
set comport=COM6
REM set comport=COM8
set esptoolpath="esptool_4.2.1.exe"
set MCU=esp32
set BAUDRATE=921600
REM set BAUDRATE=512000
set project=%1%

goto burn_direct

@echo off
:: erase whole flash of esp32
%esptoolpath% --chip %MCU% ^
--port %comport% ^
--baud %BAUDRATE% ^
erase_flash


:burn_direct

:: flash MCU
%esptoolpath% --chip %MCU% ^
--port %comport% ^
--baud %BAUDRATE% ^
--before default_reset ^
--after hard_reset write_flash -z -e ^
--flash_mode dio ^
--flash_freq 80m ^
--flash_size detect ^
0x0 %project%
pause

