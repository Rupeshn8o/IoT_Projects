#include "DHT.h"
#define DHTTYPE DHT11
#define dht_dpin 0
const int lev = 4; 
const int flo = 2;
const int ledPin =  LED_BUILTIN ;
int levState = 0; 
int floState = 0; 
DHT dht(dht_dpin, DHTTYPE); 
void setup(void)
{ 
  pinMode(lev,INPUT);
  pinMode(flo,INPUT);
  pinMode(ledPin,OUTPUT);
  dht.begin();
  Serial.begin(9600);
  Serial.println("Humidity and temperature\n\n");
  delay(700);

}
void loop() 
{
    levState = digitalRead(lev);
    floState = digitalRead(flo);
    if (levState == HIGH&&floState == LOW) 
    {
      digitalWrite(ledPin, HIGH);
    }
    else 
   {
     digitalWrite(ledPin, LOW);
   }
    float h = dht.readHumidity();
    float t = dht.readTemperature();         
    Serial.print("Current humidity = ");
    Serial.print(h);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(t); 
    Serial.println("C  ");
  delay(800);
}
