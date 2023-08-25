/*================================================================================================================================== 
  Este código é destinado a demonstração do uso de registradores 
   Benedito Lucas de Toledo 
   ELETROKITS..: https://lista.mercadolivre.com.br/_CustId_325367602?item_id=MLB2659424372&category_id=MLB99779&seller_id=325367602&client=recoview-selleritems&recos_listing=true
   Youtube.....: https://www.youtube.com/channel/UCR_RgvW4hls1Q76Um_8IIjw
   GITHUB......: https://github.com/BeneditoLT
 ==================================================================================================================================*/
//===================Bloco de configuração===================
void setup() {
  DDRB &= ~(1 << DDB4); // Seta D12  como entrada;
  DDRB |= (1 << DDB5); // Seta D13  como saída;
}
//=================== Main loop ===================
void loop() {
  bool STATUS = (PINB & (1 << PINB4));

  if (STATUS) {
    PORTB |= (1 << DDB5); // Seta saida PD13 para High
  } else {
    PORTB &= ~(1 << DDB5); // Seta saída PD13 para LOW
  }
}
