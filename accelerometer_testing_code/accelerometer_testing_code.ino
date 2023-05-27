int x;
int y;
int xpin=A0;
int ypin=A1;

void setup() {
Serial.begin(9600);

}

void loop() {
x=analogRead(xpin);
y=analogRead(ypin);
Serial.print(x);
Serial.print("\t");
Serial.println(y);
delay(100);


}
