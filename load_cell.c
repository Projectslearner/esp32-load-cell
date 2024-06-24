/*
    Project name: ESP32 Load Cell with HX711
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-load-cell-hx711
*/

#include <HX711_ADC.h>

// Define the GPIO pins connected to the HX711 module
const int LOADCELL_DOUT_PIN = 21; // GPIO pin for data output
const int LOADCELL_SCK_PIN = 22;  // GPIO pin for clock input

// Initialize HX711
HX711_ADC loadCell(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);

void setup() {
  Serial.begin(9600); // Initialize serial communication
  
  // Initialize HX711 module
  loadCell.begin();
  
  // Calibrate the load cell (if needed)
  // You can use the following function to calibrate:
  // loadCell.start(2000); // Set the calibration weight (2000 grams)
  // float calibration_factor = -7050.0; // Enter the calibration factor here
  // loadCell.set_scale(calibration_factor);
}

void loop() {
  // Read the raw ADC value from the load cell
  long adcValue = loadCell.read();

  // Get the weight in grams
  float weight = loadCell.getData();

  // Print the raw ADC value and weight to Serial Monitor
  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print(", Weight: ");
  Serial.print(weight);
  Serial.println(" g");

  delay(1000); // Add a delay before the next reading
}
