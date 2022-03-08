void setup() {
  Serial.begin(9600);
  pinMode(rgb.getRedLEDPin(), OUTPUT);
  pinMode(rgb.getGreenLEDPin(), OUTPUT);
  pinMode(rgb.getBlueLEDPin(), OUTPUT);
}
