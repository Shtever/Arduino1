


// DO NOT USE VS CODE TO MAKE CHANGES TO THIS CODE//
// CODE SHOULD BE PASTED INTO ARDUINO SKETCHPAD, THEN UPLOADED TO ARDUINO BOARD//


int LED1 = 10;                        // HERO board pin 10
int LED2 = 11;                        // HERO board pin 11
int LED3 = 12;                        // HERO board pin 12
int Switch1 = 2;                      // Hero board pin 2
int Switch2 = 3;                      // Hero board pin 3
int Switch3 = 4;                      // Hero board pin 4

void setup() {
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(Switch1, INPUT);
pinMode(Switch2, INPUT);
pinMode(Switch3, INPUT);
}

// put your main code here, to run repeatedly:
void loop() {
  
//********ALL SWITCHES - SEQUENCE ***********//
if (digitalRead(Switch1) == HIGH && digitalRead(Switch2) == HIGH && digitalRead(Switch3) == HIGH){
digitalWrite(LED1,HIGH);
delay(200);
digitalWrite(LED2,HIGH);
delay(200);
digitalWrite(LED3,HIGH);
delay(200);
digitalWrite(LED1,LOW);
delay(200);
digitalWrite(LED2,LOW);
delay(200);
digitalWrite(LED3,LOW);
delay(200);
}
else {
//********SWITCH 1***********//
if (digitalRead(Switch1) == HIGH){
digitalWrite(LED1,HIGH);
}
else {
  digitalWrite(LED1, LOW);
}

//********SWITCH 2***********//
if (digitalRead(Switch2) == HIGH){
digitalWrite(LED2,HIGH);
}
else {
  digitalWrite(LED2, LOW);
}

//********SWITCH 3***********//
if (digitalRead(Switch3) == HIGH){
digitalWrite(LED3,HIGH);
}
else {
  digitalWrite(LED3, LOW);
}
}}
