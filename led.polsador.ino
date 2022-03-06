int LED=10;
int boto=5;
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode( boto, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int  valor= digitalRead( boto);
digitalWrite( LED, valor);
}
