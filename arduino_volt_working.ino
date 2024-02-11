int a=6; 
int b=7; 
int c=9; 
int d=10; 
int e=11; 
int f=12; 
int g=8; 
int d1=3;
int d2=4;
int d3=5;
int dp = 2;

int volt;
// *************** Setup *******************
void setup() 
{ 
  Serial.begin(9600);
  pinMode(A0,INPUT);
    int i;
    for(i=2;i<=12;i++)  
        pinMode(i,OUTPUT);
} 
// *************** Loop *******************
void loop() 
{   
 volt=analogRead(A0);
 Serial.println(volt);
 
// if(volt<10){volt=0;}
numPrint(volt);
}
void numPrint(int number){
  uint8_t n1;
   uint8_t n2; uint8_t n3;
 
  n1=number%10;

  showDigit(n1);
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
 delay(5); 
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);

n2=(number/10)%10;
  showDigit(n2);
  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(dp, HIGH);
 delay(5); 
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
   digitalWrite(dp, LOW);


  if(number>99){
  n3=(number/100)%10;
   showDigit(n3);
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
 delay(5); 
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);}
  }


void showDigit(uint8_t dat){
  if(dat == 0){
    display0(); 
  }else if(dat == 1){
display1(); 
  }else if(dat == 2){
display2(); 
  }else if(dat == 3){
display3(); 
  }else if(dat == 4){
display4(); 
  }else if(dat == 5){
display5(); 
  }else if(dat == 6){
display6(); 
  }else if(dat == 7){
display7(); 
  }else if(dat == 8){
display8(); 
  }else if(dat == 9){
display9(); 
  }
}
//display number 1
void display1(void) 
{  

    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
} 
//display number2
void  display2(void) 
{
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
}  
// display number3
void display3(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
} 
// display number4
void display4(void) 
{  
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
} 
// display number5
void display5(void)  
{ 
       digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
     digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
} 
// display number6
void  display6(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
} 
// display number7
void display7(void)  
{   
        digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
}  
// display number8
void display8(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);  
} 

void display9(void)  
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,LOW); 
  digitalWrite(f,HIGH);  
} 
void display0(void) 
{ 
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);  
    digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);  
} 
void clearDisplay(void) 
{ 
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(g,LOW);
  digitalWrite(c,LOW);
    digitalWrite(d,LOW);  
    digitalWrite(e,LOW);  
  digitalWrite(f,LOW);  
} 