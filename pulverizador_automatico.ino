//marron GND
//rojo VCC
//naranja SEÑAL

#include <Servo.h>
 
Servo myservo; 
int pos = 0;
const int sensorPin = 10;
 
void setup() {
     Serial.begin(9600);
     pinMode(sensorPin , INPUT);
     myservo.attach(9); 
     Serial.println("iniciado");
     }
 
void loop() {
     int value = 0;
     value = digitalRead(sensorPin );
 
     if (value == LOW) {
         pulveriza();
         Serial.println("pulveriza");
         delay(2000);
    }

 }

void pulveriza() {

     for (pos = 0; pos <= 180; pos += 1) 
   {
      myservo.write(pos);              
      delay(2);                       
   }
 
   for (pos = 180; pos >= 0; pos -= 1) 
   {
      myservo.write(pos);                 
   }
  delay (1000);
  }
