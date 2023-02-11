// For IR sensor
int irDigital1 = 12;
int irDigital2 = 13;

int motorleftpinA = 2;
int motorleftpinB = 4;
int motorrightpinA = 7;
int motorrightpinB = 8;


void setup() {
  Serial.begin(9600);
  pinMode(irDigital1, INPUT);    // IR sensor
  pinMode(irDigital2, INPUT);
  pinMode(motorleftpinA, OUTPUT);
  pinMode(motorleftpinB, OUTPUT);
  pinMode(motorrightpinA, OUTPUT);
  pinMode(motorrightpinB, OUTPUT);
}

void loop() {
  Serial.print("Digital1: ");
  findIntensity(irDigital1);
  Serial.print(" Digital2: ");
  findIntensity(irDigital2);
  Serial.print("\n");

  // int IR2 = findIntensity(irDigital2);

  // if(IR1 == 1) {
  //   forward(motorleftpinA, motorleftpinB, motorrightpinA, motorrightpinB);
  // }
  // else stop(motorleftpinA, motorleftpinB, motorrightpinA, motorrightpinB);

  // backward(motorleftpinA, motorleftpinB, motorrightpinA, motorrightpinB);
  // forward(motorleftpinA, motorleftpinB, motorrightpinA, motorrightpinB);
}

void forward(int L1, int L2, int R1, int R2) {
  digitalWrite(L1, HIGH);
  digitalWrite(L2, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
  
}

void backward(int L1, int L2, int R1, int R2) {
  digitalWrite(L1, LOW);
  digitalWrite(L2, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  
}

void stop(int L1, int L2, int R1, int R2) {
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(R2, LOW);
}

int findIntensity(int IRdigitalPin) {
  int intensity = digitalRead(IRdigitalPin);
  Serial.print(intensity);

  return intensity;
}


