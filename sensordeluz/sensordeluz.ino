// Projeto 10 - Sensor de luz ambiente
 
int pinoLed =  LED_BUILTIN; 
int pinoSensorLuz = A0;               
int valorLuz = 0;                      
 
void setup()
{
  Serial.begin(9600);
  Serial.print("Ok...\n");
}
 
void loop()
{
  valorLuz = analogRead(pinoSensorLuz);        
  Serial.print(valorLuz);
  Serial.print("\n");
  delay(1000);                   
}
