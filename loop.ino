void loop() {
  Serial.print("Raw sensor values \t red: ");
  Serial.print(redPhototransistor.sensorValue());
  Serial.print("\t green: ");
  Serial.print(greenPhototransistor.sensorValue());
  Serial.print("\t blue: ");
  Serial.println(bluePhototransistor.sensorValue());
  Serial.print("Mapped Sensor Values \t red: ");
  Serial.print(rgb.value(redPhototransistor));
  Serial.print("\t green: ");
  Serial.print(rgb.value(greenPhototransistor));
  Serial.print("\t blue: ");
  Serial.print(rgb.value(bluePhototransistor));
  analogWrite(rgb.getRedLEDPin(), rgb.value(redPhototransistor));
  analogWrite(rgb.getGreenLEDPin(), rgb.value(greenPhototransistor));
  analogWrite(rgb.getBlueLEDPin(), rgb.value(bluePhototransistor));
}
