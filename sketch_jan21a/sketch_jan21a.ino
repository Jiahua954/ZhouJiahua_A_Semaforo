void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);//ROSSO SX
  pinMode(12, OUTPUT);//GIALLO SX
  pinMode(11, OUTPUT);//VERDE SX
  pinMode(10, OUTPUT);//VERDE DX
  pinMode(9, OUTPUT);//GAILLO DX
  pinMode(8, OUTPUT);//ROSSO DX
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);//ROSSO SX
  digitalWrite(10, HIGH);//VERDE DX
  delay(25);
  digitalWrite(13, LOW);//ROSSO SX
  digitalWrite(10, LOW);//VERDE DX
  delay(25);
  
  digitalWrite(12, HIGH);//GAILLO SX
  digitalWrite(9, HIGH);//GIALLO DX
  delay(25);
  digitalWrite(12, LOW);//GIALLO SX
  digitalWrite(9, LOW);//GIALLO DX
  delay(25);
  
  digitalWrite(11, HIGH);//VERDE SX
  digitalWrite(8, HIGH);//ROSSO DX
  delay(25);
  digitalWrite(11, LOW);//VERDE SX
  digitalWrite(8, LOW);//ROSSO DX
  delay(25);

  digitalWrite(12, HIGH);//GAILLO SX
  digitalWrite(9, HIGH);//GIALLO DX
  delay(25);
  digitalWrite(12, LOW);//GIALLO SX
  digitalWrite(9, LOW);//GIALLO DX
  delay(25);
  

}
