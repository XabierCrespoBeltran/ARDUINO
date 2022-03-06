int LED=10;
int boto =6;
bool estatActual= 0;
bool estatAnterior=0;
int pulsacions=1;

void setup() {
 
pinMode(LED, OUTPUT);
pinMode(boto, INPUT);
}

void loop() {
  estatActual-digitalRead(boto);
  if (estatAnterior != estatActual)
  {
    if(estatActual==HIGH)pulsacions++;
    estatAnterior=estatActual;
  }
if (pulsacions%2==0){
  digitalWrite(LED,HIGH);
}else{
  digitalWrite(LED,LOW);
}
}
