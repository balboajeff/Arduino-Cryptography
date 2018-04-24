int keys[]=
{117,161,173,187,199};
int arryPos=0;
char request;
int arrayPos;
int subtractNum;
int returnVal;
int red=0;
int blue=0;
int green=0;
void setup() 
{
  Serial.begin(9600);
  
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
subtractNum=random(30,100);
arrayPos=random(0,4);
}

void loop() 
{



  
  if(Serial.available()!=0)
  {
    request= Serial.read();
    digitalWrite(13, HIGH);
if(request=='a')
{
 arrayPos=(random(0,4));
 subtractNum=(random(1,100));
 
delay(10);
Serial.print(arrayPos);
Serial.print(",");
Serial.println(keys[arrayPos]-subtractNum);

}
if(request=='r')
{
 returnVal=Serial.parseInt();
 Serial.print("array val =");
 Serial.println(keys[arrayPos]);
 Serial.print(returnVal + keys[arrayPos]-subtractNum);//subtractNum=10+ x = 117
 delay(50);
 if(returnVal + keys[arrayPos]-subtractNum==keys[arrayPos])
 {
  digitalWrite(9,HIGH);
  delay(350);
  digitalWrite(9,LOW);
  delay(350);
  digitalWrite(9,HIGH);
  delay(350);
  digitalWrite(9,LOW);
  delay(350);
  digitalWrite(9,HIGH);
  delay(350);
  digitalWrite(9,LOW);
  delay(350);
 }
}

  }
  digitalWrite(13,LOW);
  }

