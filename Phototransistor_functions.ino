Phototransistor::Phototransistor(): sensorPin(0) {}

Phototransistor::Phototransistor(const int sensor): sensorPin(sensor) {}

int Phototransistor::sensorValue()
{
  delay(5);
  int x = analogRead(sensorPin);
  return x;
}
