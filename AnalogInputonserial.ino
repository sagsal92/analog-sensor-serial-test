int sensorPin = A0;
int sensorValue = 0;

void setup() 
{
  pinMode(sensorPin, IN PUT);
  Serial.begin(9600);
}

void loop() 
{
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(100);
}
