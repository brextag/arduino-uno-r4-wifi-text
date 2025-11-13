#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup() {
  matrix.begin();
  Serial.begin(9600);
}

void loop() {
  
  matrix.beginDraw();

  matrix.stroke(0xFFFFFFFF);           // White color
  matrix.textScrollSpeed(100);        // Scroll speed in msn
  matrix.textFont(Font_4x6);          // Compact font for better fit

  const char text[] = "   hello world  ";    // Add spaces for padding
  matrix.beginText(0, 1, 0xFFFFFF);   // Start at x=0, y=1
  matrix.println(text);
  matrix.endText(SCROLL_LEFT);

delay(1000);
Serial.println("HABIBI GIVE ME MONEY TO COME TO DUBAI");

  matrix.endDraw();

  delay(100); // Small delay before restarting scroll
}
