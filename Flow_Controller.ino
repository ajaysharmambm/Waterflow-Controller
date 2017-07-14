int ledPin = 13;
int inPin = 2;
static int counter;
int ppl = 450;

void setup(){
  pinMode(inPin, INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(inPin), pulseCounter, RISING);
}

void loop(){
  Serial.println(counter);
  if(counter>=450*3){
    noInterrupts();
    digitalWrite(13, HIGH);
  }
}

void pulseCounter(){
  counter++;
}

