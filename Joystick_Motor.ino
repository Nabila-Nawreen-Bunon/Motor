// C++ code
//
int motPin1=8;
int motPin2=9;
int enaPin=3;

int joyXPin=A0;
int joyYPin=A1;
void setup()
{
  pinMode(motPin1,OUTPUT);
  pinMode(motPin2,OUTPUT);
  pinMode(enaPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int joyX=analogRead(joyXPin);
  int joyY=analogRead(joyYPin);
  Serial.print("X:");
  Serial.print(joyX);
  Serial.print("Y:");
  Serial.println(joyY);
  int motorSpeed=map(joyY,0,1023,0,255);
  if(joyX<512){
    digitalWrite(motPin1,HIGH);
    digitalWrite(motPin2,LOW);
  }
  else{
    digitalWrite(motPin1,LOW);
    digitalWrite(motPin2,HIGH);
  }
  analogWrite(enaPin,motorSpeed);
  delay(100);
  
}