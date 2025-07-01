#include <Arduino.h>

#define TRIG_PIN 5      
#define ECHO_PIN 18      
#define LED_PIN 2        


float getDistanceCM() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000);  
  float distance = duration * 0.034 / 2;
  return distance;
}

void setup() {
  Serial.begin(115200);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  float distance = getDistanceCM();
  Serial.print("Measured Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance < 30) {
   
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    delay(200);
  } else {
    
    digitalWrite(LED_PIN, LOW);
    delay(400);
  }
}
