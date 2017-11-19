# Legubot

This project contains 2 branches : the master branch with the final version of our code and the development branch where we implement new features

The goal of this project is to perfom a garden controller low cost with arduino and raspberry pi.

Our material :

- Raspberry Pi 3 (https://www.raspberrypi.org/products/raspberry-pi-3-model-b/)
- Arduino uno (https://store.arduino.cc/arduino-uno-rev3)

- Air Humidity and temperature sensor : DHT22 (https://www.adafruit.com/product/385)
- Soil sensor (https://www.ebay.com.au/itm/Soil-Humidity-Hygrometer-Moisture-Detection-Sensor-Module-with-Wire-for-Arduino-/372139100369)

- Solar kit (http://www.befr.ebay.be/itm/Kit-solaire-pro-10W-Panneau-Solaire-Regulateur-de-Charge-5A-PWM-Batterie/132380610394?hash=item1ed27fcf5a:g:lzMAAOSweM1Z9tyP)
- 12V to 5V regulator (https://www.amazon.fr/dp/B003A5YPSK/ref=pe_3044141_185740131_TE_item)
- Solenoid valve 12V DC (http://www.aliexpress.com)

# First part

- Hardware building part (the tray, the solar kit,...)
- Sensor set up and tests (air humidity and temperature + soil sensor) with arduino
- Communication with a raspberry to save in SD card, send via WiFi and trace graph. 
- Control the water and irrigate with pipe

# Second part 

- Build a framework with motors above the tray in order to water and sense the soil 
- Soft to find and kill weed 
- Mapping of farming