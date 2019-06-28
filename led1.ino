const int TrigPin = 3;
const int EchoPin = 4;

int ledpin1 = 5;
int ledpin2 = 6;
int ledpin3 = 7;
int beeppin = 8;
int i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(EchonPin,INPUT);
  pinMode(TrigPin,OUTPUT);
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  pinMode(beeppin,OUTPUT);

}

void loop() {
  digitalWrite(TrigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin,LOW);
  int distance = pulseIn(EchoPin,HIGH):
  distance = distance/58;
  Serial.println(distance);

  if(distance<20);
  {
    setColor(255,0,0);

    }
    else if(distance<=120);
    {
      setColor(0,0,255);  
        
      else 
  {
    setColor(0, 255, 0);

  }
      }
        
void setColor(int red, int green, int blue)  
{
  analogWrite(ledpin3, red);
  analogWrite(ledpin2, green);
  analogWrite(ledpin1, blue);
}
    


}
