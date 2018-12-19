void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  int looptime=10;
  int i=0;
  while (i<looptime){
  lightUniDirection(100);
    i++;
  }
  
  i=0;
  offAll();
  delay(2000);
  while(i<looptime){
    lightBackandForth(100);
    i++;
  }
  
 i=0;
  offAll();
   delay(2000);
  while(i<looptime){
    wave(200);
  }
  offAll();
  delay(2000);

}

void lightBackandForth(int time){
  forwardLight(time);
  reverseLight(time);
}
void lightUniDirection(int time){
  forwardLight(time);
  offAll();
  delay(500);
}

//-----------------------------
void wave(int time){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(time);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(time);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  delay(time);
  
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);
  delay(time+200);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  delay(time);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  
  delay(500);
  
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  delay(time);
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);
  delay(time);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  delay(time+200);
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);
  delay(time);
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  delay(500);
}
void forwardLight(int time){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(time);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  delay(time);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  delay(time);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  delay(time);
}
void reverseLight(int time){
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  delay(time);
  digitalWrite(5,LOW);
  digitalWrite(3,HIGH);
  delay(time);
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  delay(time);
}

void offAll(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}
