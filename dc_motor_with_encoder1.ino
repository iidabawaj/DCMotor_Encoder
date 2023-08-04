#define motor1 5
#define motor2 6
void setup()
{
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop()
{
  analogWrite(motor1, 127);
  digitalWrite(motor2, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}