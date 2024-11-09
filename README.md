# IoT Weather Station

This project is an IoT-based weather monitoring system that utilizes an ESP8266 microcontroller and DHT11 sensor to measure real-time temperature and humidity. The data is then sent to the Blynk platform, where users can access it remotely. The code is written in Arduino IDE, making it easy to modify and adapt to similar IoT applications.

## Features

- **Real-Time Monitoring**: Continuously tracks and displays temperature and humidity data.
- **Remote Access**: Users can view live data on the Blynk app dashboard from any internet-connected device.
- **WiFi Connectivity**: Uses the ESP8266’s WiFi capabilities to connect seamlessly to the Blynk platform.
- **Efficient Data Updates**: Sends sensor data updates every two seconds, ensuring real-time accuracy.

## Hardware Requirements

- **ESP8266 Module**: Provides WiFi connectivity and microcontroller functionality.
- **DHT11 Temperature and Humidity Sensor**: Collects environmental data.

## Software Requirements

- **Arduino IDE**: For writing and uploading code to the ESP8266.
- **Blynk App**: Available for both Android and iOS, used to create a custom dashboard to view sensor data.
- **Blynk Library**: Required for ESP8266-Blynk integration, installable via the Arduino IDE Library Manager.

## Setup and Configuration

1. **Install the Blynk Library**:
   - Open Arduino IDE.
   - Go to `Sketch > Include Library > Manage Libraries`.
   - Search for "Blynk" and install it.

2. **Wiring**:
   - Connect the DHT11 sensor’s data pin to GPIO4 (D2) on the ESP8266.
   - Ensure power and ground connections for both the ESP8266 and DHT11 sensor.

3. **Code Setup**:
   - Update the WiFi credentials and Blynk authentication token in the code.
   - Upload the code to the ESP8266 module using the Arduino IDE.

4. **Blynk Dashboard Setup**:
   - Open the Blynk app, create a new project, and select ESP8266 as the device.
   - Add two Value Display widgets and set them to Virtual Pins V0 (temperature) and V1 (humidity) respectively.

## Usage

Once uploaded and configured, the ESP8266 will connect to the WiFi network and send data to the Blynk platform every two seconds. Users can view temperature and humidity readings on the Blynk app dashboard.

## Code Overview

- **`setup()`**: Initializes WiFi and connects to Blynk, as well as the DHT11 sensor.
- **`sendSensor()`**: Reads data from the DHT11 sensor and sends it to the Blynk app.
- **`loop()`**: Continuously runs Blynk and timer functions to ensure real-time updates.


