//by vishwak
#define s1 6
#define s2 7
#define m1 2
#define m2 3
#define m3 4
#define m4 5
String straight()
{
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
  return "STRAIGHT";
}  
String left()
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
  return "LEFT";
} 
String right()
{
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,HIGH);
  return "RIGHT";
} 

void setup()
{
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  }
void loop()
{
  if(digitalRead(s1)==1 && digitalRead(s2)==1)
  {
    straight();
    } 
    if(digitalRead(s1)==0 && digitalRead(s2)==1)
  {
    right();
    } 
    if(digitalRead(s1)==1 && digitalRead(s2)==0)
  {
    left();
    } 
}

