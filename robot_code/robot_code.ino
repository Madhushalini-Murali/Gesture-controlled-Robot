int lm1=24;
int lm2=25;
int rm1=0;
int rm2=1;
char c;
void Forward()
{
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
}


void Stop()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0);
}



void reverse()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,1);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
}



void left()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,1);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
}



void right()
{
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
}




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(!Serial.available());
  c=Serial.read();
  Serial.println(c);
  if(c=='f')
    Forward();
  if(c=='s')
    Stop();
  if(c=='b')
    reverse();
  if(c=='l')
    left();
  if(c=='r')
    right();        
}
