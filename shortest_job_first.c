// Name: JADE HARRIS E. ROPEROS
// BSCpE - 4A
// Date: October 29, 2022
// Subject Code: CpE- 411

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;


void setup()
{
 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
 
}
void loop()
{
  
  digitalWrite(3, HIGH);
  delay(1000); //Time delay 1sec.
  digitalWrite(3, LOW);
  
  digitalWrite(6, HIGH);
  delay(2000); //Time delay 2secs.
  digitalWrite(6, LOW);
  
  digitalWrite(4, HIGH);
  delay(3000); //Time delay 3sec. 
  digitalWrite(4, LOW);
  
  digitalWrite(5, HIGH);
  delay(2000); //Time delay 2sec.
  digitalWrite(5, LOW);
  
  digitalWrite(2, HIGH);
  delay(5000); //Time delay 5sec.
  digitalWrite(2, LOW);
  
  digitalWrite(7, HIGH);
  delay(7000); //Time delay 7sec.
  digitalWrite(7, LOW);
  
  digitalWrite(5, HIGH);
  delay(3000); //Time delay 3sec.
  digitalWrite(5, LOW);

}
