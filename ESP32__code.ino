void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String received = Serial.readString();
    Serial.println("Received from Arduino: " + received);
  }
  Serial.println("Hello Arduino");
  delay(1000);
}
