void setup() {  
 
   pinMode(13,OUTPUT);     //激活13号引脚，我们需要用它供电             
 
  for(int n=2;n<=9;n++)
   {
   pinMode(n,OUTPUT);
   }
}
 
 
void loop() 
{
 
digitalWrite(13,1); //这个就是HIGH  和LOW 的另一种写法  0代表LOW   1代表HIGH
 
 
  /*==========显示0=============*/  
int n0[8]={0,0,0,0,0,0,1,1};       //定义数组 通过0，1定义各数码管的明灭，
  int z=0;
  for(int x=2;x<=9;x++)          //采用循环方式依次点亮指定的数码管led（数组中0为点亮），单位时间只点亮1个led
  {
  digitalWrite(x,n0[z]);         //点亮led语句  X为引脚数  n0[z]为数组z为0-8的变量，来依次读取数组中的值
  z++;
  if (z>=9)                    //防止变量z累加超过了8
  z=0;
  }
  delay(1000);
/*==========显示1=============*/  
int n1[8]={1,0,0,1,1,1,1,1};
  z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n1[z]);
  z++;
  if (z>=9)
  z=0;
  }
  delay(1000);
/*==========显示2=============*/  
 int n2[8]={0,0,1,0,0,1,0,1};
  z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n2[z]);
  z++;
  if (z>=9)
  z=0;
  } 
delay(1000);  
/*==========显示3=============*/  
 int n3[8]={0,0,0,0,1,1,0,1};
  z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n3[z]);
  z++;
  if (z>=9)
  z=0;
  } 
delay(1000);  
/*==========显示4=============*/  
 int n4[8]={1,0,0,1,1,0,0,1};
 z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n4[z]);
  z++;
  if (z>=9)
  z=0;
  } 
delay(1000); 
/*==========显示5=============*/ 
int n5[8]={0,1,0,0,1,0,0,1};
z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n5[z]);
  z++;
  if (z>=9)
  z=0;
  } 
delay(1000);

/*==========显示6=============*/ 
int n6[8]={0,1,0,0,0,0,0,1};
z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n6[z]);
  z++;
  if (z>=9)
  z=0;
  } 
delay(1000);

/*==========显示7=============*/ 
int n7[8]={0,0,0,1,1,1,1,1};
z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n7[z]);
  z++;
  if (z>=9)
  z=0;
  } 
delay(1000);

/*==========显示8=============*/ 
int n8[8]={0,0,0,0,0,0,0,1};
z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n8[z]);
  z++;
  if (z>=9)
  z=0;
  } 
delay(1000);

/*==========显示0=============*/ 
int n9[8]={0,0,0,0,1,0,0,1};
z=0;
  for(int x=2;x<=9;x++)
  {
  digitalWrite(x,n9[z]);
  z++;
  if (z>=9)
  z=0;
  } 
delay(1000);
}
