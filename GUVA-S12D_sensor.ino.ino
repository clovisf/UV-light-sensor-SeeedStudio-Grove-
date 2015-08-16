 float UV = 0.00;
 float illumination = 0.00;
 float voltage = 0.00;
 int sensorValue;
 float sum = 0.00;
 
void setup(){


  Serial.begin(9600);
}
 
void loop()
{  
 
      sensorValue=analogRead(A0);
      sum=sensorValue;
   
 
 Serial.print("The voltage value:");
 voltage = sum*0.00488;
 Serial.print(voltage);
 Serial.println(" mV");

 Serial.print("The illumination value:");
 illumination = voltage*307.0;
 Serial.print(illumination);
 Serial.println(" mW/m2");

  Serial.print("The UV Index value:");
 UV = illumination/200.0;
 Serial.print(UV);
 Serial.println(" units");
 
 delay(2000);
 Serial.print("\n");
 
}
