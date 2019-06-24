void setup(){
  for(int i=3;i<=6;i++)
  {
  pinMode(i,OUTPUT);
  }
}

void loop(){

for(int x=3;x<=6;x++)
  {
   digitalWrite(x,HIGH);
   delay(500);

}
delay(1000);
for(int x=3;x<=6;x++)
  {
   digitalWrite(x,LOW);
   delay(500);
 
  }
 delay(1000);
 for(int x=3;x<=6;x++)
  {
   digitalWrite(x,HIGH);
  }
 delay(1000);
 for(int x=3;x<=6;x++)
  {
   digitalWrite(x,LOW);
  }
 delay(1000);
   



  
}
 
  
