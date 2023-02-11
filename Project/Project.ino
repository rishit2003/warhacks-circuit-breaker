// For IR sensor
int irDigital1 = 2;
int irDigital2 = 4;


void setup() {
  Serial.begin(9600);
  pinMode(irDigital, INPUT);    // IR sensor

}

void loop() {
  findIntensity(irDigital);// hello
}


int findIntensity(int IRdigitalPin) {
  int intensity = digitalRead(IRdigitalPin);
  Serial.println(intensity);
  return intensity;
}


