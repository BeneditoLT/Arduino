int index;
int condicao = 16;  
void setup ( )  
{  
  Serial.begin(9600);  
  for ( index = 1 ; index < condicao; index ++ )  
  {
   Serial.print(index);  
   Serial.println(" Carneirinhos");
   delay(1000);
  }  
}  
void loop ( ) {  
}  
