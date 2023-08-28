/* No Arduino nt armazena um valor 16bit(2 bytes). Isso garante um intervalo de -32,768 a 32,767 
  
*/

char caracter = 'A';          //cria uma char e guarda o caracter "A"
char caracterASCCE = 65;      //cria uma char e guarda o caracter "A" no formato ASCII
char palavra = 'Eletrokits';  //cria uma char e de forma erronia guarda a palavra "Eletrokits"
char vetor[10] = "Eletrokits";//cria uma char com uma estrutura de vetor e guada a palavra "Eletrokits" 
char numero = '7';               //cria uma char e guarda o caracter 7, o mesmo não tem valor numerico 

void setup() {
  Serial.begin(9600);      // usa a porta serial para imprimir o número
}

void loop() {
  
  Serial.println(caracter); // Impreime o caracter A
  Serial.println(caracterASCCE); // Imprime o caracter A apartir do codigo ASCII
  Serial.println(palavra); // Imprime apenas o ultimo caracter da palavra Eletrokits
  Serial.println(vetor); // Imprime todos os caracteres contidos na variavel
  Serial.println(numero);// imprime o caracter 7
  while(true){}
}
