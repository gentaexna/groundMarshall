int ledRed=5;
int ledYellow1=4;
int ledYellow2=6;
int spkPin=8;
String btn;

void setup() {
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow1, OUTPUT);
  pinMode(ledYellow2, OUTPUT);
  pinMode(spkPin, OUTPUT);
}

void loop() {
  Serial.println("Press 'l' to Left");
  Serial.println("Press 'r' to Right");
  Serial.println("Press 's' to Straight");
  Serial.println("Press 'x' to Stop");
  Serial.println("Press 'f' to finish");
  Serial.println();
  while(Serial.available()==0) {}

  btn=Serial.readString();
  if(btn=="l"){
  Serial.println("Moving Left");
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow1,LOW);
  digitalWrite(ledYellow2,HIGH);
  digitalWrite(spkPin,LOW);
  }
  if(btn=="r"){
    Serial.println("Moving Right");
    digitalWrite(ledRed,LOW);
    digitalWrite(ledYellow1,HIGH);
    digitalWrite(ledYellow2,LOW);
    digitalWrite(spkPin,LOW);
  }
  if(btn=="s"){
  Serial.println("Moving Straight");
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow1,HIGH);
  digitalWrite(ledYellow2,HIGH);
  digitalWrite(spkPin,LOW);
  }
  if(btn=="x"){
  Serial.println("Stop");
  digitalWrite(ledRed,HIGH);
  digitalWrite(ledYellow1,LOW);
  digitalWrite(ledYellow2,LOW);
  digitalWrite(spkPin,HIGH);
  }
  if(btn=="f"){
  Serial.println("Finish");
  digitalWrite(ledRed,LOW);
  digitalWrite(ledYellow1,LOW);
  digitalWrite(ledYellow2,LOW);
  digitalWrite(spkPin,LOW);
  digitalWrite(spkPin,LOW);
  }
}
