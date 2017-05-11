#include <EYW.h>


EYW:: Altimeter myaltimeter;

float current_height=0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myaltimeter.begin();
myaltimeter.calibrate(100);
myaltimeter.alarm();
}

void loop() 
{
current_height = myaltimeter. getHeightAvg (20);
Serial.print("Current Height: ");
Serial.println(current_height);

if(current_height>.5)
{
  myaltimeter.alarm(6,2000,500);
}



}
