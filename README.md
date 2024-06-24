# ESP32 Load Cell with HX711 Project

## Project Overview
The ESP32 Load Cell with HX711 project demonstrates how to interface a load cell with an ESP32 microcontroller using the HX711 ADC (Analog-to-Digital Converter) module. Load cells are sensors that measure force or weight, and the HX711 is specifically designed to amplify and digitize the small signals from load cells, making it ideal for applications requiring precise weight measurements.

## Components Needed
- ESP32 Microcontroller
- Load Cell (with appropriate capacity)
- HX711 ADC Module
- Jumper Wires
- Breadboard
- Calibration weights (optional, for calibration)

## Block Diagram
*(If available, provide a visual representation of your circuit setup)*

## Circuit Setup
1. **Connecting Load Cell to ESP32 via HX711:**
   - **DOUT (Data Output):** Connect to GPIO pin 21 on the ESP32.
   - **SCK (Serial Clock):** Connect to GPIO pin 22 on the ESP32.
   - **VCC and GND:** Connect to the appropriate power (5V) and ground pins.

## Instructions
1. **Setup:**
   - Initialize serial communication in the `setup()` function with `Serial.begin(9600)`.
   - Initialize the HX711 module using `loadCell.begin()`.
   - Optionally, calibrate the load cell using calibration weights and set the calibration factor in the `setup()` function (commented out in your code).

2. **Operation:**
   - In the `loop()` function:
     - Read the raw ADC value from the load cell using `loadCell.read()`.
     - Convert the raw ADC value to weight in grams using `loadCell.getData()`.
     - Print both the raw ADC value and the weight to the Serial Monitor.

3. **Considerations:**
   - **Calibration:** If using calibration weights, follow the commented instructions in the `setup()` function to set the calibration factor.
   - **Power Supply:** Ensure stable power supply to both the ESP32 and the HX711 module for accurate readings.
   - **Sensor Placement:** Position the load cell securely and ensure it can measure weight without external interference.

## Applications
- **Weight Measurement:** Measure and monitor weights accurately in applications such as scales, IoT devices, and industrial automation.
- **Force Sensing:** Use load cells to measure force and pressure in various mechanical systems.
- **Data Logging:** Log weight data over time for analysis and monitoring purposes.

## Notes
- **HX711 Library:** The `HX711_ADC` library simplifies interfacing with the HX711 module, providing functions to read data and set calibration factors.
- **Serial Output:** Use the Serial Monitor for real-time monitoring and debugging of weight measurements.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Load Cell with HX711](https://projectslearner.com/learn/esp32-load-cell-hx711)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner