
#include <LiquidCrystal.h>

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 1);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  //print the sensor value
  lcd.print(sensorValue)
}
