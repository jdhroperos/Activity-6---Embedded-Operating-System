
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

void loop (){

digitalWrite (2, HIGH);
delay (10000);// Time delay 10second(s) 
digitalWrite (2, LOW);
  
digitalWrite (3, HIGH);
delay (5000); // Time delay 5second(s) 
digitalWrite (3, LOW);  
  
digitalWrite (4, HIGH);
delay (3000); // Time delay 3second(s) 
digitalWrite (4, LOW);
  
digitalWrite (5, HIGH);
delay (5000); //  Time delay 5second(s) 
digitalWrite (5, LOW);
  
digitalWrite (6, HIGH);
delay (8000); // Time delay 8second(s) 
digitalWrite (6, LOW);
  
digitalWrite (7, HIGH);
delay (5000); // Time delay 5second(s) 
digitalWrite (7, LOW);
  
}
