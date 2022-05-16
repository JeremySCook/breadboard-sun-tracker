//Sun tracker code
//Public domain

int rtLDR = A2;    // select the input pin for the potentiometer
int ltLDR = A3;      // select the pin for the LED
int rtLDRValue = 0;  // variable to store right LDR value
int ltLDRValue = 0;  // variable to store left LDR value
int rtMotorPin = 0;  // pin assignment motor turns rt when on
int ltMotorPin = 1;  // pin assignment motor turns lt when on
//unsigned long timeDelay;  //time delay for millis

void setup() {
  pinMode(rtMotorPin, OUTPUT);
  pinMode(ltMotorPin, OUTPUT);
  digitalWrite(rtMotorPin, LOW);
  digitalWrite(ltMotorPin, LOW);
}

void loop() {

  //timeDelay = millis();
  rtLDRValue = analogRead(rtLDR);
  ltLDRValue = analogRead(ltLDR);

int LDRDifference = (rtLDRValue - ltLDRValue);

if (LDRDifference > 60){
  digitalWrite(rtMotorPin, LOW);
  digitalWrite(ltMotorPin, HIGH);
  delay(50);
  digitalWrite(rtMotorPin, LOW);
  digitalWrite(ltMotorPin, LOW);
  delay(500);
}
if (LDRDifference < -60){
  digitalWrite(rtMotorPin, HIGH);
  digitalWrite(ltMotorPin, LOW);
  delay(50);
  digitalWrite(rtMotorPin, LOW);
  digitalWrite(ltMotorPin, LOW);
  delay(500);
}  

}
