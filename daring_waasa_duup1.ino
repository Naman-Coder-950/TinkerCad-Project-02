// C++ code
//
int LED_1 = 13;
void setup()
{
pinMode(LED_1,OUTPUT);
}

void loop()
{
  digitalWrite(LED_1,HIGH);
  delay(1000);// Delay a little bit to improve simulation performance
  digitalWrite(LED_1,LOW);
  delay(1000);
}