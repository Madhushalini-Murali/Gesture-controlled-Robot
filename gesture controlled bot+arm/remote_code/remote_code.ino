int a,x,y;
int b,c,d,e,f;
const int xpin=A0;
const int ypin=A1;
const int up1pin=15;
const int up2pin=16;
const int dn1pin=17;
const int dn2pin=18;

void setup() {
Serial.begin(9600);
a=analogRead(xpin);
b=analogRead(ypin);

c=digitalRead(up1pin); 
d=digitalRead(up2pin);
e=digitalRead(dn1pin);
f=digitalRead(dn2pin);

}

void loop() {
x=analogRead(xpin);
y=analogRead(ypin);

if(((x>=(a-50))&&(x<=(a+50))) && ((y>=(b-50))&&(y<=(b+50)))) //stop
{ 
  Serial.println('u');
  //delay(100);
}
if((y<=(b-50))) //forward
{
  Serial.println('v');
  //delay(100);
}
if((y>=(b+50))) //reverse
{
  Serial.println('w');
  //delay(100);
}
if((x<=(a-50))) //left
{
  Serial.println('x');
  //delay(100);
}
if((x>=(a+50)))  //right
{
  Serial.println('y');
  //delay(100);
}


if(((x>=(a-50))&&(x<=(a+50))) && ((y>=(b-50))&&(y<=(b+50)) && up1pin==1 && up2pin==0 )) //stop and move arm up
{ 
  Serial.println('a');
  //delay(100);
}

if(((x>=(a-50))&&(x<=(a+50))) && ((y>=(b-50))&&(y<=(b+50))&& up1pin==0 && up2pin==1 )) //stop and move arm down
{ 
  Serial.println('b');
  //delay(100);
}

if(((x>=(a-50))&&(x<=(a+50))) && ((y>=(b-50))&&(y<=(b+50)) && dn1pin==1 && dn2pin==0 )) //stop and open
{ 
  Serial.println('c');
  //delay(100);
}

if(((x>=(a-50))&&(x<=(a+50))) && ((y>=(b-50))&&(y<=(b+50)) && dn1pin==0 && dn2pin==1 )) //stop and close
{ 
  Serial.println('d');
  //delay(100);
}


if((y<=(b-50)) && up1pin==1 && up2pin==0) //forward and move arm up
{
  Serial.println('e');
  //delay(100);
}


if((y<=(b-50)) && up1pin==0 && up2pin==1) //forward and move arm down
{
  Serial.println('f');
  //delay(100);
}


if((y<=(b-50)) && dn1pin==1 && dn2pin==0) //forward and open
{
  Serial.println('g');
  //delay(100);
}


if((y<=(b-50)) && dn1pin==0 && dn2pin==1) //forward and close
{
  Serial.println('h');
  //delay(100);
}

if((y>=(b+50)) && up1pin==1 && up2pin==0) //reverse and move arm up
{
  Serial.println('i');
  //delay(100);
}

if((y>=(b+50)) && up1pin==0 && up2pin==1) //reverse and move arm down
{
  Serial.println('j');
  //delay(100);
}

if((y>=(b+50))&& dn1pin==1 && dn2pin==0) //reverse and open
{
  Serial.println('k');
  //delay(100);
}

if((y>=(b+50)) && dn1pin==0 && dn2pin==1) //reverse and close
{
  Serial.println('l');
  //delay(100);
}

if((x<=(a-50)) && up1pin==1 && up2pin==0) //left and move arm up
{
  Serial.println('m');
  //delay(100);
}

if((x<=(a-50)) && up1pin==0 && up2pin==1) // left and move arm down
{
  Serial.println('n');
  //delay(100);
}

if((x<=(a-50)) && dn1pin==1 && dn2pin==0) //left and open
{
  Serial.println('o');
  //delay(100);
}

if((x<=(a-50)) && dn1pin==0 && dn2pin==1) //left and close
{
  Serial.println('p');
  //delay(100);
}

if((x>=(a+50)) && up1pin==1 && up2pin==0)  //right and move arm up
{
  Serial.println('q');
  //delay(100);
}

if((x>=(a+50)) && up1pin==0 && up2pin==1)  //right and move arm down
{
  Serial.println('r');
  //delay(100);
}

if((x>=(a+50)) && dn1pin==1 && dn2pin==0)  //right and open
{
  Serial.println('s');
  //delay(100);
}

if((x>=(a+50)) && dn1pin==0 && dn2pin==1)  //right and close
{
  Serial.println('t');
  //delay(100);
}

/*if(up1pin==1 && up2pin==0) //move arm up
{ 
  Serial.println('g');
  //delay(100);
}


if(up1pin==0 && up2pin==1) //move arm down
{ 
  Serial.println('h');
  //delay(100);
}


if(dn1pin==1 && dn2pin==0) //move finger open
{ 
  Serial.println('o');
  //delay(100);
}


if(dn1pin==0 && dn2pin==1) //move finger close
{ 
  Serial.println('c');
  //delay(100);
}*/

}
