// C++ code
//
int SWITCH = A3;
int PIEZO = A0;
int LED = 2;
int timeTrigger = 5000;
long currentTime;
long startTime;

void setup()
{
  pinMode(SWITCH, INPUT);
  pinMode(PIEZO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int switchValue = analogRead(SWITCH);
  int piezoValue = analogRead(PIEZO);
  if(switchValue != 0 && piezoValue < 20){
    if(millis() - currentTime >= timeTrigger){
      digitalWrite(LED, HIGH);
      delay(1000);
      digitalWrite(LED, LOW);
      currentTime = millis();
    }
  } else {
    currentTime = millis();
    digitalWrite(LED, LOW);
  }
}
