/* 
 *  Este código é destinado a comutação dos relés de um módulo contendo dois canais por meio de chaves Push Bottom 
 *  Benedito Lucas de Toledo 
 *  *  ELETROKITS..: https://lista.mercadolivre.com.br/_CustId_325367602?item_id=MLB2659424372&category_id=MLB99779&seller_id=325367602&client=recoview-selleritems&recos_listing=true
 *  Youtube.....: https://www.youtube.com/channel/UCR_RgvW4hls1Q76Um_8IIjw
 *  GITHUB......: https://github.com/BeneditoLT
 */

//Inicialização de variaveis com valor inteiro 
int valor;
int valortr;
int temperatura;

void setup () {  
  Serial.begin ( 9600 ) ; 
  analogReference(INTERNAL);
  // Configura a porta seria para 9600 kbp/s
}
void loop () {  
 
  valor = analogRead ( A0 );            // Carrega a variavel valor com o resultado medido em A0     
  valortr = valor * ( 1100 / 1024.0 );  // Converte este valor para volts 
  temperatura = ( valortr - 500 ) / 10; // converte este valor para graus C
  /* Escreve na porta serial 
     EX: Valor AD 153 Voltagem AD 747 Temperatura 24°C
  */
  Serial. print ("Valor AD ") ;
  Serial. print ( valor) ;
  Serial. print (" Voltagem AD ") ;
  Serial. print ( valortr);
  Serial. print (" Temperatura ") ;
  Serial. print ( temperatura );
  Serial. print ( "\xB0" ); 
  Serial. println ( "C" );
  delay ( 1000 ); // Aguarda 1s
}