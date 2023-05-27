int a,x,y;
int b;
const int xpin=A0;
const int ypin=A1;

void setup() {
Serial.begin(9600);
a=analogRead(xpin);
b=analogRead(ypin);
}

void loop() {
x=analogRead(xpin);
y=analogRead(ypin);

if(((x>=(a-50))&&(x<=(a+50))) && ((y>=(b-50))&&(y<=(b+50)))) //stop
{ 
  Serial.println('s');
  //delay(100);
}
if((y<=(b-50))) //forward
{
  Serial.println('f');
  //delay(100);
}
if((y>=(b+50))) //reverse
{
  Serial.println('b');
  //delay(100);
}
if((x<=(a-50))) //left
{
  Serial.println('l');
  //delay(100);
}
if((x>=(a+50)))  //right
{
  Serial.println('r');
  //delay(100);
}



}
