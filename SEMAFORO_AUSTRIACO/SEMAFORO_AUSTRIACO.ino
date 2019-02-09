int RossoSX = 13;
int GialloSX = 12;
int VerdeSX= 11;
int RossoDX = 10;
int GialloDX = 9;
int VerdeDX = 8;

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
  delay(500);
  digitalWrite(VerdeSX, LOW);
  delay(500);
  digitalWrite(VerdeSX, HIGH);
  delay(500);
  digitalWrite(VerdeSX, LOW);
  delay(500);
  digitalWrite(VerdeSX, HIGH);
  delay(500);
  digitalWrite(VerdeSX, LOW);
  delay(500);
  digitalWrite(VerdeSX, HIGH);
  delay(500);
  digitalWrite(VerdeSX, LOW);
  delay(500);
}
void lampeggia2()
{
  digitalWrite(VerdeDX, HIGH);
  delay(500);
  digitalWrite(VerdeDX, LOW);
  delay(500);
  digitalWrite(VerdeDX, HIGH);
  delay(500);
  digitalWrite(VerdeDX, LOW);
  delay(500);
  digitalWrite(VerdeDX, HIGH);
  delay(500);
  digitalWrite(VerdeDX, LOW);
  delay(500);
  digitalWrite(VerdeDX, HIGH);
  delay(500);
  digitalWrite(VerdeDX, LOW);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(RossoSX, HIGH);
digitalWrite(VerdeDX, HIGH);
delay(5000);
digitalWrite(GialloSX, HIGH);
lampeggia2();
digitalWrite(GialloSX, HIGH);
digitalWrite(GialloDX, HIGH);
digitalWrite(RossoSX, LOW);
delay(1000);
digitalWrite(VerdeSX, HIGH);
digitalWrite(GialloSX, LOW);
digitalWrite(RossoDX, HIGH);
digitalWrite(GialloDX, LOW);
delay(5000);
digitalWrite(GialloDX, HIGH);
lampeggia1();
digitalWrite(RossoDX, LOW);
digitalWrite(GialloDX, HIGH);
digitalWrite(GialloSX, HIGH);
delay(1000);
digitalWrite(VerdeDX, HIGH);
digitalWrite(RossoSX, HIGH);
digitalWrite(GialloSX, LOW);
digitalWrite(GialloDX, LOW);
delay(5000);


}
