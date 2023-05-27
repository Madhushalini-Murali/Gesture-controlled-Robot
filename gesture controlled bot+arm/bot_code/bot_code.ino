int lm1=24;
int lm2=25;
int rm1=0;
int rm2=1;

int um1=2;
int um2=3;
int dm1=26;
int dm2=27;

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

void armup()
{
  digitalWrite(um1,1);
  digitalWrite(um2,0);
  
}

void armdown()
{
   digitalWrite(um1,0);
  digitalWrite(um2,1);
  
}

void hold()
{
   digitalWrite(dm1,1);
  digitalWrite(dm2,0);
}

void leave()
{
   digitalWrite(dm1,0);
  digitalWrite(dm2,1);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);

   pinMode(um1,OUTPUT);
  pinMode(um2,OUTPUT);
  pinMode(dm1,OUTPUT);
  pinMode(dm2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(!Serial.available());
  c=Serial.read();
  Serial.println(c);
  if(c=='a')
    {
      Stop();
      armup();
    }

  if(c=='b')
    {
      Stop();
      armdown();
    }

      if(c=='c')
    {
      Stop();
      leave();
    }

    if(c=='d')
    {
      Stop();
      hold();
    }

  if(c=='e')
    {
      Forward();
      armup();
    }

    if(c=='f')
    {
      Forward();
      armdown();
    }

    if(c=='g')
    {
      Forward();
      leave();
    }

    if(c=='h')
    {
      Forward();
      hold();
    }

     if(c=='i')
    {
      reverse();
      armup();
    }

    if(c=='j')
    {
      reverse();
      armdown();
    }

    if(c=='k')
    {
      reverse();
      leave();
    }

    if(c=='l')
    {
      reverse();
      hold();
    }

 
     if(c=='m')
    {
      left();
      armup();
    }

    if(c=='n')
    {
      left();
      armdown();
    }

    if(c=='o')
    {
      left();
      leave();
    }

    if(c=='p')
    {
      left();
      hold();
    }

    
     if(c=='q')
    {
     right();
      armup();
    }

    if(c=='r')
    {
      right();
      armdown();
    }

    if(c=='s')
    {
      right();
      leave();
    }

    if(c=='t')
    {
      right();
      hold();
    }

    
     if(c=='u')
    {
      Stop();
    }

    if(c=='v')
    {
      Forward();
    }

    if(c=='w')
    {
      reverse();
    }

    if(c=='x')
    {
      left();
    }

 if(c=='y')
    {
      right();
    }
    
 
    
             
}
