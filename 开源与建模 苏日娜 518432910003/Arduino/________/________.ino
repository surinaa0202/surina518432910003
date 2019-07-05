
const int TrigPin = 3;
const int EchoPin = 4;  

int ledpin1 = 5;  
int ledpin2 = 6;  
int ledpin3 = 7;  
int beeppin = 8;  
int i = 0;
 
 
void setup ()
{
  Serial.begin(9600);    
  pinMode(EchoPin, INPUT);      
  pinMode(TrigPin, OUTPUT);     
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  pinMode(beeppin,OUTPUT);      
}
 
 
void loop()
{
  digitalWrite(TrigPin, LOW);     
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);    
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);     
  int distance = pulseIn(EchoPin, HIGH);   
  distance= distance/58;         
  Serial.write(distance);       
  delay(50);
  
  if(distance<20)            
  {
    setColor(0, 255, 2);
    buzzer1();
  }
  else if (distance<=30)    
  {
    setColor(0, 0, 255);
    buzzer2();
  }
  else 
  {
    setColor(255, 0, 0);
    buzzer3();
  }
}
 

void buzzer1()
{
  tone(beeppin,900);
  delay(300); 
  noTone(beeppin);
}
 
void buzzer2()
{
  tone(beeppin,600);
  delay(500);  
  noTone(beeppin);
}
 
void buzzer3()  
{

    noTone(beeppin);
  i++;
}
 
void setColor(int red, int green, int blue)  
{
  analogWrite(ledpin3, red);
  analogWrite(ledpin2, green);
  analogWrite(ledpin1, blue);
}
