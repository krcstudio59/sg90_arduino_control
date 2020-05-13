#include <Servo.h>

Servo sg90;
int a = 0;

void setup() {

  sg90.attach(6);
}

void loop(){

  sg90.write(a);

}
