#include <Servo.h>

Servo esc_signal;
// connect motor controller pins to Arduino digital pins
// motor one
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;

void setup() {
  esc_signal.attach(11);
  esc_signal.write(30);
  delay(3000);
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void SwitchUp()
{
  // this function will run the motors in both directions at a fixed speed
  // turn on motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 200);
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 200);
  delay(10000);
  
  
  // now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW); 
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void Switchdown()
{
  // now change motor directions
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH); 
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 200);
   analogWrite(enB, 200);
  delay(10000);
  // now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW); 
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void Switchright()
{
  // turn on motors
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  // accelerate from zero to maximum speed
 
 for (int i = 0; i < 200; i++) {
analogWrite(enA, i);
analogWrite(enB, 200);
delay(20);
}
delay(5000);
// decelerate from maximum speed to zero
for (int i = 199; i > 0; --i)
  {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
 
  
  // now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW); 
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW); 
}

void Switchleft()
{
  // turn on motors
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  // accelerate from zero to maximum speed
 
 for (int i = 0; i < 200; i++) {
analogWrite(enA, 200);
analogWrite(enB, i);
delay(20);
}

delay(5000);
// decelerate from maximum speed to zero
for (int i = 199; i > 0; --i)
  {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
 
  
  // now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW); 
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW); 
}

void loop() {
  for(int i=0;i<500;i++)
  {
   esc_signal.write(110);
   delay(10);
  }
  delay(40000);

  {
   SwitchUp();
  delay(1000);
  Switchdown();
  delay(1000);
  }
}  
