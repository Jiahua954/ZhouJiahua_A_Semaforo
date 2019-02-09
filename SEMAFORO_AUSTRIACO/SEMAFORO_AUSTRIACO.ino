int RossoSX = 13;
int GialloSX = 12;
int VerdeSX= 11;
int RossoDX = 10;
int GialloDX = 9;
int VerdeDX = 8;
int Lamp1 = 500;
int Lamp2 = 1000;
int Lamp3 = 5000;


void setup() {
  // put your setup code here, to run once:
pinMode(RossoSX, OUTPUT);
pinMode(GialloSX, OUTPUT);
pinMode(VerdeSX, OUTPUT);
pinMode(RossoDX, OUTPUT);
pinMode(GialloDX, OUTPUT);
pinMode(VerdeDX, OUTPUT);
}
void lampeggia1() 
{
  digitalWrite(VerdeSX, HIGH);
  delay(Lamp1);
  digitalWrite(VerdeSX, LOW);
  delay(Lamp1);
  digitalWrite(VerdeSX, HIGH);
  delay(Lamp1);
  digitalWrite(VerdeSX, LOW);
  delay(Lamp1);
  digitalWrite(VerdeSX, HIGH);
  delay(Lamp1);
  digitalWrite(VerdeSX, LOW);
  delay(Lamp1);
  digitalWrite(VerdeSX, HIGH);
  delay(Lamp1);
  digitalWrite(VerdeSX, LOW);
  delay(Lamp1);
}
void lampeggia2()
{
  digitalWrite(VerdeDX, HIGH);
  delay(Lamp1);
  digitalWrite(VerdeDX, LOW);
  delay(Lamp1);
  digitalWrite(VerdeDX, HIGH);
  delay(Lamp1);
  digitalWrite(VerdeDX, LOW);
  delay(Lamp1);
  digitalWrite(VerdeDX, HIGH);
  delay(Lamp1);
  digitalWrite(VerdeDX, LOW);
  delay(Lamp1);
  digitalWrite(VerdeDX, HIGH);
  delay(Lamp1);
  digitalWrite(VerdeDX, LOW);
  delay(Lamp1);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RossoSX, HIGH);
digitalWrite(VerdeDX, HIGH);
delay(Lamp3);
digitalWrite(GialloSX, HIGH);
lampeggia2();
digitalWrite(GialloSX, HIGH);
digitalWrite(GialloDX, HIGH);
digitalWrite(RossoSX, LOW);
delay(Lamp2);
digitalWrite(VerdeSX, HIGH);
digitalWrite(GialloSX, LOW);
digitalWrite(RossoDX, HIGH);
digitalWrite(GialloDX, LOW);
delay(Lamp3);
digitalWrite(GialloDX, HIGH);
lampeggia1();
digitalWrite(RossoDX, LOW);
digitalWrite(GialloDX, HIGH);
digitalWrite(GialloSX, HIGH);
delay(Lamp2);
digitalWrite(VerdeDX, HIGH);
digitalWrite(RossoSX, HIGH);
digitalWrite(GialloSX, LOW);
digitalWrite(GialloDX, LOW);
delay(Lamp3);


}
