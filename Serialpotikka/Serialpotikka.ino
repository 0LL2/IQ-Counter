void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}
void loop() {
  //read the pushbutton value into a variable

  int val = analogRead(A0);
  int vol = map(val, 0, 1023, 0, 100);
  Serial.println(vol);
  delay(100);
  }
