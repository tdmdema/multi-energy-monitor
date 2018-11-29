#include <EmonLib.h>

EnergyMonitor emon1;                   // Create an instance
EnergyMonitor emon2;
EnergyMonitor emon3;

void setup()
{  
  Serial.begin(9600);
  emon1.current(0, 30);             // Current: input pin, calibration.
  emon2.current(1, 30);
  emon3.current(2, 30);
}
 
void loop()
{
  double Irms1 = emon1.calcIrms(1480);  // Calculate Irms only
  double Irms2 = emon2.calcIrms(1480);
  double Irms3 = emon3.calcIrms(1480);
  
  Serial.print(Irms1*230.0);         // Apparent power
  Serial.print(" ");
  Serial.println(Irms1);          // Irms

  Serial.print(Irms2*230.0);         // Apparent power
  Serial.print(" ");
  Serial.println(Irms2);          // Irms
  
  Serial.print(Irms3*230.0);         // Apparent power
  Serial.print(" ");
  Serial.println(Irms3);          // Irms

  Serial.println("----------");


  
}