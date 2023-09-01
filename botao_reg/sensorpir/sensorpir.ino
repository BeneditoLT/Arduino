/*================================================================================================================================== 
   Este código é destinado a interpletação dos sensores HCSR-03 ou 04
   Benedito Lucas de Toledo 
   ELETROKITS..: https://lista.mercadolivre.com.br/_CustId_325367602?item_id=MLB2659424372&category_id=MLB99779&seller_id=325367602&client=recoview-selleritems&recos_listing=true
   Youtube.....: https://www.youtube.com/channel/UCR_RgvW4hls1Q76Um_8IIjw
   GITHUB......: https://github.com/BeneditoLT
 ==================================================================================================================================*/


int cm = 0; //declaração de variavel global 

long sensorUltra(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT); // Inicializa o pino Trigger como saída
  digitalWrite(triggerPin, LOW); // Seta o pino com nivel logico baixo
  delayMicroseconds(2); // Espera2 microssegundos
  digitalWrite(triggerPin, HIGH);// Seta o pino trigger com nível logico alto
  delayMicroseconds(10); // Espera 10 microsseguros
  digitalWrite(triggerPin, LOW); // Seta o pino trigger com nível logico baixo
  pinMode(echoPin, INPUT); // Inicializa o pino echo como saída
  return pulseIn(echoPin, HIGH); // Retorna o tempo de leitura no pino echoPin
}
//===================Bloco de configuração===================
void setup()
{
  Serial.begin(9600); // Configura a porta serial para 9600 kbps
}

//=================== Main loop ===================
void loop()
{
  cm = 0.01723 * sensorUltra(7, 7); // Carrega a variável cm com o
  // valor retornado da função readUltrasonicDistance()
  Serial.print(cm); // Escreve na porta serial
  Serial.println("cm");
  delay(100); // Espera 100 milissegundos)
}
