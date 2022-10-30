// Name: JADE HARRIS E. ROPEROS
// BSCpE - 4A
// Date: October 30, 2022
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
  digitalWrite(2, HIGH);
  delay(500); 
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500); 
  digitalWrite(5, HIGH);
  delay(500); 
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(7, HIGH);
  delay(500); 
  
  digitalWrite(7, LOW);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(4, LOW);
  delay(500); 
  digitalWrite(3, LOW);
  delay(500);
  digitalWrite(2, LOW);
  delay(500); 
  
}
