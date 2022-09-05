int LED = 12; // HERO board pin 12
int Switch1 = 2; //Hero board pin 2

void setup() {
//initialize a digital pin as an output, then set its value to high (5v)

pinMode(LED, OUTPUT);
pinMode(Switch1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(Switch1) == HIGH){
digitalWrite(LED,HIGH);
}
else {
  digitalWrite(LED, LOW);         // Turn LED OFF
}
}
