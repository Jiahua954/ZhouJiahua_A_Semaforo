int red1 = 13;
int yellow1 = 12;
int green1 = 11;
int red2 = 10;
int yellow2 = 9;
int green2 = 8;

void setup() {
  // put your setup code here, to run once:
pinMode(red1, OUTPUT);
pinMode(yellow1, OUTPUT);
pinMode(green1, OUTPUT);
pinMode(red2, OUTPUT);
pinMode(yellow2, OUTPUT);
pinMode(green2, OUTPUT);
}
void lampeggia1() 
{
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  delay(500);
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  delay(500);
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  delay(500);
  digitalWrite(green1, HIGH);
  delay(500);
  digitalWrite(green1, LOW);
  delay(500);
}
void lampeggia2()
{
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
  digitalWrite(green2, HIGH);
  delay(500);
  digitalWrite(green2, LOW);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red1, HIGH);
digitalWrite(green2, HIGH);
delay(5000);
digitalWrite(yellow1, HIGH);
lampeggia2();
digitalWrite(yellow1, HIGH);
digitalWrite(yellow2, HIGH);
digitalWrite(red1, LOW);
delay(1000);
digitalWrite(green1, HIGH);
digitalWrite(yellow1, LOW);
digitalWrite(red2, HIGH);
digitalWrite(yellow2, LOW);
delay(5000);
digitalWrite(yellow2, HIGH);
lampeggia1();
digitalWrite(red2, LOW);
digitalWrite(yellow2, HIGH);
digitalWrite(yellow1, HIGH);
delay(1000);
digitalWrite(green2, HIGH);
digitalWrite(red1, HIGH);
digitalWrite(yellow1, LOW);
digitalWrite(yellow2, LOW);
delay(5000);


}
