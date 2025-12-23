#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);

  // Set all to 90 degrees initially
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  delay(200);
}

void loop() {
  
  for (float pos = 90; pos >= 45; pos -= 1) {
    servo6.write(pos);
    delay(5);
  }
  for (float pos = 90; pos >= 70; pos -= 1){
    servo5.write(pos);
    delay(5);
  }
  for (float pos = 90; pos <= 135; pos += 1) {
    servo4.write(pos);
    delay(5);
  }
  for (float pos = 90; pos <= 110; pos++) {
    servo3.write(pos);
    delay(5);
  }
  for (float pos = 90; pos >= 45; pos -= 1) {
    servo2.write(pos);
    delay(5);
  }
  for (float pos = 90; pos <= 110; pos++) {
    servo1.write(pos);
    delay(5);
  }
    delay(15);
  

  
  for (float pos = 45; pos <= 90; pos += 1) {
    servo6.write(pos);
    delay(5);
  }
  for (float pos = 70; pos <= 90; pos++) {
    servo5.write(pos);
    delay(5);
  }
  for (float pos = 135; pos >= 90; pos -= 1) {
    servo4.write(pos);
    delay(5);
  }
  for (float pos = 110; pos >= 90; pos--) {
    servo3.write(pos);
    delay(5);
  }
  for (float pos = 45; pos <= 90; pos += 1) {
    servo2.write(pos);
    delay(5);
  }
  for (float pos = 110; pos >= 90; pos--) {
    servo1.write(pos);
    delay(5);
  }
    delay(15);

  
  for (float pos = 90; pos <= 135; pos += 1) {
    servo6.write(pos);
    delay(5);
  }
  for (float pos = 90; pos <= 110; pos++) {
    servo5.write(pos);
    delay(5);
  }
  for (float pos = 90; pos >= 45; pos -= 1)  {
    servo4.write(pos);
    delay(5);
  }
  for (float pos = 90; pos >= 70; pos -= 1) {
    servo3.write(pos);
    delay(5);
  }
  for (float pos = 90; pos <= 135; pos += 1) {
    servo2.write(pos);
    delay(5);
  }
  for (float pos = 90; pos >= 70; pos--) {
    servo1.write(pos);
    delay(5);
  }
    delay(15);
  
   

  for (float pos = 135; pos >= 90; pos -= 1) {
    servo6.write(pos);
    delay(5);
  }
  for (float pos = 110; pos >= 90; pos--) {
    servo5.write(pos);
    delay(5);
  }
  for (float pos = 45; pos <= 90; pos += 1) {
    servo4.write(pos);
    delay(5);
  }
  for (float pos = 70; pos <= 90; pos++) {
    servo3.write(pos);
    delay(5);
  }
  for (float pos = 135; pos >= 90; pos -= 1) {
    servo2.write(pos);
    delay(5);
  }
  for (float pos = 70; pos <= 90; pos++) {
    servo1.write(pos);
    delay(5);
  }
  delay(15);
}