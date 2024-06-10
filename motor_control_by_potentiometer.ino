// C++ code
//
int potPin=A0;
int motPin=9;
int potValue=5;
int motSpeed=5;
void setup()
{
  pinMode(motPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potValue=analogRead(potPin);
  motSpeed=map(potValue,0,1023,0,255);
  analogWrite(motPin,motSpeed);
  Serial.print("Pot Value:");
  Serial.print(potValue);
  Serial.print("Motor Speed:");
  Serial.println(motSpeed);
  delay(10);
}