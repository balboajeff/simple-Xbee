 char sigIn;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() 
{
  if (Serial.available()>0)
  {
sigIn=Serial.read();
 Serial.println(sigIn);
  }
 

}
