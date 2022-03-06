int pin=0;
void setup() {
  // put your setup code here, to run once:
  for(pin =8;pin<13;pin++);
  pinMode(pin,OUTPUT);
}

void loop() {
for(pin= 8; pin<13;pin++)
{
digitalWrite(pin,HIGH);
delay(500);
digitalWrite(pin,LOW);
delay(500);

}
}
