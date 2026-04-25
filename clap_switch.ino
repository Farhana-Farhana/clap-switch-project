const int soundSensor = 2;  // D0 to digital pin 2
const int ledPin = 13;

void setup() {
  pinMode(soundSensor, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(soundSensor);
  Serial.println(val);

  if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Sound Detected!");
  }else{
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}

