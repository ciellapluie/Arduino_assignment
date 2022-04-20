
int PIN_LED_6 = 6;
int PIN_LED_3 = 3;
int PIN_LED_10 = 10;
int PIN_LED_2 = 2;
int PIN_TRIGER = 8;
int PIN_ECHO = 4;

void setup()
{
  pinMode(PIN_LED_6, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_10, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_TRIGER, OUTPUT);

int PIN_LED_6 = 6;
int PIN_LED_3 = 3;
int PIN_LED_10 = 10;
int PIN_LED_2 = 2;
int PIN_TRIGER = 8;
int PIN_ECHO = 4;

void setup()
{
  pinMode(PIN_LED_6, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_10, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_TRIGER, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int distance= 0;
    
  digitalWrite(PIN_TRIGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIGER, LOW);
  
  distance = pulseIn(PIN_ECHO, HIGH);
  
  int cm = distance / 57;
  
  if(cm >= 120) {
    
    digitalWrite(PIN_LED_6, LOW);
    digitalWrite(PIN_LED_3, LOW);
    digitalWrite(PIN_LED_10, LOW);
    digitalWrite(PIN_LED_2, LOW);
    
  } else if(cm >= 90 && cm < 120) {
    
    digitalWrite(PIN_LED_6, HIGH);
    digitalWrite(PIN_LED_3, LOW);
    digitalWrite(PIN_LED_10, LOW);
    digitalWrite(PIN_LED_2, LOW);
    
  } else if(cm >= 60 && cm < 90) {
    
    digitalWrite(PIN_LED_6, LOW);
    digitalWrite(PIN_LED_3, HIGH);
    digitalWrite(PIN_LED_10, LOW);
    digitalWrite(PIN_LED_2, LOW);
    
  } else if(cm >= 30 && cm < 60) {
    
    digitalWrite(PIN_LED_6, LOW);
    digitalWrite(PIN_LED_3, LOW);
    digitalWrite(PIN_LED_10, HIGH);
    digitalWrite(PIN_LED_2, LOW);
    
  } else {
    
    digitalWrite(PIN_LED_6, LOW);
    digitalWrite(PIN_LED_3, LOW);
    digitalWrite(PIN_LED_10, LOW);
    digitalWrite(PIN_LED_2, HIGH);
  }
  
}