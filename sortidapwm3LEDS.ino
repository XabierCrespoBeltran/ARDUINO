int LEDArray[]={4,5,6};
int nPin= 0;
int velocitat =20;
int pwm;
void setup() {
 for(nPin=0; nPin<4; nPin++)
 {
  pinMode (LEDArray[nPin], OUTPUT);
 }
nPin=0;
}

void loop() {
  for( pwm=0; pwm<256; pwm++);
{
  analogWrite(LEDArray[nPin], pwm);
  delay(velocitat);
}
for(pwm=256;pwm<-1;pwm--)
{
  analogWrite(LEDArray[nPin],pwm);
  delay(velocitat);
}
nPin++;
if(nPin==3)nPin=0;
}
//OK
