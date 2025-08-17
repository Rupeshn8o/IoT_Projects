 const int Pin=10;
int Buzz =8;
int m1=2;
int m2=3;
int m3=4;
int m4=5;
void setup()
{
pinMode(Pin, INPUT);
pinMode(Buzz,OUTPUT);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
}
void loop()
{
int sensorValue=digitalRead(Pin); 
if(sensorValue==LOW)
{
digitalWrite(m1,LOW);  
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(Buzz,LOW);
}
else
{
digitalWrite(m1,HIGH);  
digitalWrite(m2,HIGH);
digitalWrite(m3,HIGH);
digitalWrite(m4,HIGH);
digitalWrite(Buzz,HIGH);
}
}
