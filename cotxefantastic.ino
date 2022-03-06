int LEDArray[]={8,9,10,11,12};
int nPin=0;
int temps=30;
void setup() 
{
 
for (nPin=0;nPin<5;nPin++)
{
  pinMode(LEDArray[nPin],OUTPUT);
}
}
  void loop() 
  {
 for(nPin=0;nPin<5;nPin++)
 {
  digitalWrite(LEDArray[nPin],HIGH);
  delay(temps);
  digitalWrite(LEDArray[nPin+1],HIGH);
 delay(temps);
 digitalWrite(LEDArray[nPin],LOW);
 delay(temps*2);
 }
 for(nPin=5;nPin>0;nPin--)
{
  digitalWrite(LEDArray[nPin],HIGH);
  delay(temps);
  digitalWrite(LEDArray[nPin-1],HIGH);
  delay(temps);
  digitalWrite(LEDArray[nPin],LOW);
  delay(temps*2);
 }
}
