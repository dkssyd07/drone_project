#include <Arduino.h>

#define LED_BUILTIN 2  // ESP32 대부분 보드에서 GPIO2에 내장 LED 연결됨

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // LED 핀을 출력으로 설정
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // LED ON
  delay(500);                       // 0.5초 대기
  digitalWrite(LED_BUILTIN, LOW);   // LED OFF
  delay(500);                       // 0.5초 대기
}
