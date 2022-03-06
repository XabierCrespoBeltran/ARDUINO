int LED1 = 8;
int velocitat= 20;
int pwm;
void setup() {
  // put your setup code here, to run once:
pinMode (LED1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (pwm=0; pwm<256; pwm++);
{
  analogWrite (LED1, pwm);
  delay (velocitat);
}
for (pwm=255;pwm>-1;pwm--);
{
  analogWrite(LED1, pwm);
  delay (velocitat);
}
}
