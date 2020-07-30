#include <Servo.h>

Servo esc_signal;

void setup() {
  esc_signal.attach(9);
  esc_signal.write(30);
  delay(3000);
}

void loop() {
  for(int i=0;i<500;i++)
  {
   esc_signal.write(110);
   delay(10);
  }
  delay(10000);
}
