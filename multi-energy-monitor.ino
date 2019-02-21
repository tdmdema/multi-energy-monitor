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

  emon1.voltage(3, 234.26, 1.7);
  emon2.voltage(3, 234.26, 1.7);
  emon3.voltage(3, 234.26, 1.7);
}
 
void loop()
{
  emon1.calcVI(20,2000);         // Calculate all. No.of half wavelengths (crossings), time-out
  emon1.serialprint();           // Print out all variables (realpower, apparent power, Vrms, Irms, power factor)
  
  float realPower1       = emon1.realPower;        //extract Real Power into variable
  float apparentPower1   = emon1.apparentPower;    //extract Apparent Power into variable
  float powerFActor1     = emon1.powerFactor;      //extract Power Factor into Variable
  float supplyVoltage1   = emon1.Vrms;             //extract Vrms into Variable
  float Irms1            = emon1.Irms;             //extract Irms into Variable


  emon2.calcVI(20,2000);         // Calculate all. No.of half wavelengths (crossings), time-out
  emon2.serialprint();           // Print out all variables (realpower, apparent power, Vrms, Irms, power factor)
  
  float realPower2       = emon2.realPower;        //extract Real Power into variable
  float apparentPower2   = emon2.apparentPower;    //extract Apparent Power into variable
  float powerFActor2     = emon2.powerFactor;      //extract Power Factor into Variable
  float supplyVoltage2   = emon2.Vrms;             //extract Vrms into Variable
  float Irms2            = emon2.Irms;             //extract Irms into Variable


  emon3.calcVI(20,2000);         // Calculate all. No.of half wavelengths (crossings), time-out
  emon3.serialprint();           // Print out all variables (realpower, apparent power, Vrms, Irms, power factor)
  
  float realPower3       = emon3.realPower;        //extract Real Power into variable
  float apparentPower3   = emon3.apparentPower;    //extract Apparent Power into variable
  float powerFActor3     = emon3.powerFactor;      //extract Power Factor into Variable
  float supplyVoltage3   = emon3.Vrms;             //extract Vrms into Variable
  float Irms3            = emon3.Irms;             //extract Irms into Variable


  
}
