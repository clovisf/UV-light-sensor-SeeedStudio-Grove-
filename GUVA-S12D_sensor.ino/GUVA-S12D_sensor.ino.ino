#include <Wire.h>
#include <Digital_Light_TSL2561.h> // library for the digital light sensor]
 float UV = 0.00;
 float illumination = 0.00;
 float voltageUV = 0.00;
 int sensorValue;
 
 
void setup(){

Serial.begin(9600);
Wire.begin();
TSL2561.init();
}
 
void loop()
{  
 
 sensorValue=analogRead(A4);
 voltageUV = sensorValue*0.0049169;
   
 
 Serial.print("The voltage value:");
 Serial.print(voltageUV,4);
 Serial.println(" mV");

 Serial.print("The illumination value:");
 illumination = voltageUV*307.0;
 Serial.print(illumination,2);
 Serial.println(" mW/m2");

  Serial.print("The UV Index value:");
 UV = illumination/200.0;
 Serial.print(UV,3);
 Serial.println(" units");
 
  Serial.print("Visibile Digital Light: ");
  Serial.println(TSL2561.readVisibleLux()); // digital light value
 
 delay(2000);
 Serial.print("\n");
 
}
