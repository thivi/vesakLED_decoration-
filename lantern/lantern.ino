
void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
}

void loop() {
  //LOW means off
  // put your main code here, to run repeatedly:
digitalWrite(1,HIGH);
delay(500);
digitalWrite(2,HIGH);
delay(500);
digitalWrite(3,HIGH);
delay(500);
digitalWrite(3,LOW);
delay(500);
digitalWrite(2,LOW);
delay(500);
digitalWrite(1,LOW);
delay(500);
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
delay(5000);
digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
}


