void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  
}
void onLarge(){
    digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
}
void offLarge(){
    digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
}
void onMid(){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
}
void offMid(){
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
}
void onSmall(){
    digitalWrite(A0,HIGH);
    digitalWrite(A1,HIGH);
    digitalWrite(A2,HIGH);
    digitalWrite(A3,HIGH);
    digitalWrite(A4,HIGH);
    digitalWrite(A5,HIGH);

}
void offSmall(){
    digitalWrite(A0,LOW);
    digitalWrite(A1,LOW);
    digitalWrite(A2,LOW);
    digitalWrite(A3,LOW);
    digitalWrite(A4,LOW);
    digitalWrite(A5,LOW);
}
//------------------------------------------
void seqOnLarge(int time){
    digitalWrite(0,HIGH);
    delay(time);
    digitalWrite(1,HIGH);
    delay(time);
    digitalWrite(2,HIGH);
    delay(time);
    digitalWrite(3,HIGH);
    delay(time);
    digitalWrite(4,HIGH);
    delay(time);
    digitalWrite(5,HIGH);
    delay(time);
    digitalWrite(6,HIGH);
}
void seqOffLarge(int time){
    digitalWrite(0,LOW);
    delay(time);
    digitalWrite(1,LOW);
    delay(time);
    digitalWrite(2,LOW);
    delay(time);
    digitalWrite(3,LOW);
    delay(time);
    digitalWrite(4,LOW);
    delay(time);
    digitalWrite(5,LOW);
    delay(time);
    digitalWrite(6,LOW);
}
void seqOnMid(int time){
    digitalWrite(7,HIGH);
    delay(time);
    digitalWrite(8,HIGH);
    delay(time);
    digitalWrite(9,HIGH);
    delay(time);
    digitalWrite(10,HIGH);
    delay(time);
    digitalWrite(11,HIGH);
    delay(time);
    digitalWrite(12,HIGH);
    delay(time);
    digitalWrite(13,HIGH);
}
void seqOffMid(int time){
    digitalWrite(7,LOW);
    delay(time);
    digitalWrite(8,LOW);
    delay(time);
    digitalWrite(9,LOW);
    delay(time);
    digitalWrite(10,LOW);
    delay(time);
    digitalWrite(11,LOW);
    delay(time);
    digitalWrite(12,LOW);
    delay(time);
    digitalWrite(13,LOW);
}
void seqOnSmall(int time){
    digitalWrite(A0,HIGH);
    delay(time);
    digitalWrite(A1,HIGH);
    delay(time);
    digitalWrite(A2,HIGH);
    delay(time);
    digitalWrite(A3,HIGH);
    delay(time);
    digitalWrite(A4,HIGH);
    delay(time);
    digitalWrite(A5,HIGH);

}
void seqOffSmall(int time){
    digitalWrite(A0,LOW);
    delay(time);
    digitalWrite(A1,LOW);
    delay(time);
    digitalWrite(A2,LOW);
    delay(time);
    digitalWrite(A3,LOW);
    delay(time);
    digitalWrite(A4,LOW);
    delay(time);
    digitalWrite(A5,LOW);
}
//------------------
void revSeqOnLarge(int time){
    digitalWrite(6,HIGH);
    delay(time);
    digitalWrite(5,HIGH);
    delay(time);
    digitalWrite(4,HIGH);
    delay(time);
    digitalWrite(3,HIGH);
    delay(time);
    digitalWrite(2,HIGH);
    delay(time);
    digitalWrite(1,HIGH);
    delay(time);
    digitalWrite(0,HIGH);
}
void revSeqOffLarge(int time){
    digitalWrite(6,LOW);
    delay(time);
    digitalWrite(5,LOW);
    delay(time);
    digitalWrite(4,LOW);
    delay(time);
    digitalWrite(3,LOW);
    delay(time);
    digitalWrite(2,LOW);
    delay(time);
    digitalWrite(1,LOW);
    delay(time);
    digitalWrite(0,LOW);
}
void revSeqOnMid(int time){
    digitalWrite(13,HIGH);
    delay(time);
    digitalWrite(12,HIGH);
    delay(time);
    digitalWrite(11,HIGH);
    delay(time);
    digitalWrite(10,HIGH);
    delay(time);
    digitalWrite(9,HIGH);
    delay(time);
    digitalWrite(8,HIGH);
    delay(time);
    digitalWrite(7,HIGH);
}
void revSeqOffMid(int time){
    digitalWrite(13,LOW);
    delay(time);
    digitalWrite(12,LOW);
    delay(time);
    digitalWrite(11,LOW);
    delay(time);
    digitalWrite(10,LOW);
    delay(time);
    digitalWrite(9,LOW);
    delay(time);
    digitalWrite(8,LOW);
    delay(time);
    digitalWrite(7,LOW);
}
void revSeqOnSmall(int time){
    digitalWrite(A5,HIGH);
    delay(time);
    digitalWrite(A4,HIGH);
    delay(time);
    digitalWrite(A3,HIGH);
    delay(time);
    digitalWrite(A2,HIGH);
    delay(time);
    digitalWrite(A1,HIGH);
    delay(time);
    digitalWrite(A0,HIGH);

}
void revSeqOffSmall(int time){
    digitalWrite(A5,LOW);
    delay(time);
    digitalWrite(A4,LOW);
    delay(time);
    digitalWrite(A3,LOW);
    delay(time);
    digitalWrite(A2,LOW);
    delay(time);
    digitalWrite(A1,LOW);
    delay(time);
    digitalWrite(A0,LOW);
}

void serialSwitchOn(int time){
    onLarge();
    delay(time);
    onMid();
    delay(time);
    onSmall();

    delay(time+1000);

    offSmall();
    delay(time);
    offMid();
    delay(time);
    offLarge();
}
void seqOn(int time){
    seqOnLarge(time);
    delay(time);
    seqOnMid(time);
    delay(time);
    seqOnSmall(time);

    delay(time+1000);

    revSeqOffSmall(time);
    delay(time);
    revSeqOffMid(time);
    delay(time);
    revSeqOffLarge(time);
}
void revSeqOn(int time){
    revSeqOnSmall(time);
    delay(time);
    revSeqOnMid(time);
    delay(time);
    revSeqOnLarge(time);

    delay(time+1000);

    seqOffLarge(time);
    delay(time);
    seqOffMid(time);
    delay(time);
    seqOffSmall(time);
}
void loop()
{
    serialSwitchOn(300);
    delay(1000);
    seqOn(50);
    delay(1000);
    revSeqOn(50);
    delay(1000);
}
