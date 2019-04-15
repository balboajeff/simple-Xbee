 char sigIn;
 int counter;
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
 if(sigIn=='a')
 {
  digitalWrite(13,HIGH);
 }
 if(sigIn=='q')
 {
  digitalWrite(13,LOW);
 }
 if(sigIn=='j')
 {
  counter=(random(10));
  Serial.print(counter);
 }
  }
 

}
