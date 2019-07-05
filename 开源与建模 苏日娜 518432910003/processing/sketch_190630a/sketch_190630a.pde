PImage bus;
int x=0,y=150;
import processing.serial.*;
Serial myPort;
int distance = 0;

void setup()
{
  size(640,480);
  bus = loadImage("bus.png");
  myPort = new Serial(this,"/dev/cu.usbmodem14121",9600);
  
}

void draw()
{
  if(myPort.available()>0)
  {
  distance=myPort.read();
     println(distance);
}
fill(30,40,40);
  background(255);
 rect(600,80,30,200);
x=640-30-bus.width-distance ;
image(bus,x,y);
text("Distance is "+distance+"CM",400,40);

}
