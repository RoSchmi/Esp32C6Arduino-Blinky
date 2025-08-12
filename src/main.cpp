#include <Arduino.h>
#include "Adafruit_Neopixel.h"

// Set LED_BUILTIN if it is not defined by Arduino framework
#define RGBLED 8
Adafruit_NeoPixel RGB(1, RGBLED, NEO_GRB + NEO_KHZ800);
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(115200);
  Serial.println("Hallo Roland");
  RGB.setBrightness(200);
  RGB.begin();
  
   // initialize LED digital pin as an output.
  //pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // turn the LED on (HIGH is the voltage level)
  // digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hallo, this is Red");
  RGB.fill(RGB.Color(255, 0, 0)); // Rot
  RGB.show();
  delay(1000);
  Serial.println("Hallo, this is Green");
  RGB.fill(RGB.Color(0, 255, 0)); // Grün
  RGB.show();
  delay(1000);
  Serial.println("Hallo, this is Blue");
  RGB.fill(RGB.Color(0, 0, 255)); // Blau
  RGB.show();

  // turn the LED off by making the voltage LOW
  //digitalWrite(LED_BUILTIN, LOW);
  // wait for a second
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}