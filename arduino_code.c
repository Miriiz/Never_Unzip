// C++ code
//
int SWITCH = A3;
int PIEZO = A0;
int LED = 2; // Led lit up == notification pushed
int timeTrigger = 5000; // Trigger after x milliseconds
long currentTime; // Timer to trigger notification push

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
      // Send notification
      digitalWrite(LED, HIGH);
      delay(1000);
      digitalWrite(LED, LOW);
      // Reset timer
      currentTime = millis();
    }
  } else {
    currentTime = millis();
  }
}
