int SOL1=2;
int SOL2=3;
int SWITCH1=4;
int SWITCH2=5;
int RLED=6;
int OLED=7;

void setup() {
  // put your setup code here, to run once:
pinMode(SOL1, OUTPUT);
pinMode(SOL2, OUTPUT);
pinMode(SWITCH1, INPUT);
pinMode(SWITCH2, INPUT);
pinMode(RLED, OUTPUT);
pinMode(OLED, OUTPUT);
}

void loop() 
{
  digitalWrite(SWITCH1, LOW);
  digitalWrite(SWITCH2, LOW);
  
  if(digitalRead(SWITCH2) == HIGH && digitalRead(SWITCH1) == HIGH
)
//    BOTH MODE
{
  //EXTEND
  digitalWrite(SOL2,LOW);
  digitalWrite(RLED,LOW);
  digitalWrite(SOL1,HIGH);
  digitalWrite(OLED,HIGH);
  delay(500);
  //RETRACT
  digitalWrite(SOL1,LOW);
  digitalWrite(OLED,LOW);
  digitalWrite(SOL2,HIGH);
  digitalWrite(RLED,HIGH);
  delay(3000); 
    //pause
  digitalWrite(SOL2,LOW);
  digitalWrite(RLED,LOW);
  digitalWrite(SOL1,LOW);
  digitalWrite(OLED,LOW);
  delay(100);
}
//    EMERGENCY MODE
else if(digitalRead(SWITCH2) == HIGH
)
{
  //EXTEND
  digitalWrite(SOL2,LOW);
  digitalWrite(RLED,LOW);
  digitalWrite(SOL1,HIGH);
  digitalWrite(OLED,HIGH);
  delay(500);
  //RETRACT
  digitalWrite(SOL1,LOW);
  digitalWrite(OLED,LOW);
  digitalWrite(SOL2,HIGH);
  digitalWrite(RLED,HIGH);
  delay(3000); 
  //pause
  digitalWrite(SOL2,LOW);
  digitalWrite(RLED,LOW);
  digitalWrite(SOL1,LOW);
  digitalWrite(OLED,LOW);
  delay(100);
}

//    NORMAL MODE
else if(digitalRead(SWITCH1) == HIGH
)
{
  //EXTEND
  digitalWrite(SOL2,LOW);
  digitalWrite(RLED,LOW);
  digitalWrite(SOL1,HIGH);
  digitalWrite(OLED,HIGH);
  delay(75);
  //RETRACT
  digitalWrite(SOL1,LOW);
  digitalWrite(OLED,LOW);
  digitalWrite(SOL2,HIGH);
  digitalWrite(RLED,HIGH);
  delay(3000);
    //pause
  digitalWrite(SOL2,LOW);
  digitalWrite(RLED,LOW);
  digitalWrite(SOL1,LOW);
  digitalWrite(OLED,LOW);
  delay(2000);
}
else
{
digitalWrite(SOL2,LOW);
digitalWrite(RLED,LOW);
digitalWrite(SOL1,LOW);
digitalWrite(OLED,LOW);
}
}
