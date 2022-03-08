LED::LED(): redLEDPin(0), greenLEDPin(0), blueLEDPin(0) {}

LED::LED(const int red, const int green, const int blue): redLEDPin(red), greenLEDPin(green), blueLEDPin(blue) {}

int LED::value(const Phototransistor &tr)
{
  return (tr.sensorValue() / 4);
}

int LED::getRedLEDPin()
{
  return redLEDPin;
}

int LED::getGreenLEDPin()
{
  return greenLEDPin;
}

int LED::getBlueLEDPin()
{
  return blueLEDPin;
}
