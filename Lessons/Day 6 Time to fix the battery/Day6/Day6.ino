int sensorPin = A0;   // select the *analog zero* input pin for probing the photoresistor
int onboardLED = 13;  // select the pin for the HERO's built-in LED
int sensorValue = 0;  // variable that we'll use to store the value reading from the sensor

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(onboardLED, OUTPUT);

}

void loop() {
//read the analog sensor value and send it to serial
sensorValue = analogRead(sensorPin);
Serial.println(sensorValue); // print analog sensor value to serial monitor
delay(sensorValue); // delay value of analog sensor

  digitalWrite(onboardLED,HIGH);
  delay(sensorValue);
  digitalWrite(onboardLED,LOW);
  delay(sensorValue);

}
