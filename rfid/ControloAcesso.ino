// --- Bibliotecas Auxiliares ---
#include <SPI.h>
#include <MFRC522.h>


// --- Mapeamento de Hardware ---
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Cria instância com MFRC522
 

// --- Variáveis Globais --- 
char st[20];


// --- Configurações Iniciais ---
void setup() 
{
  Serial.begin(9600);   // Inicia comunicação Serial em 9600 baud rate
  SPI.begin();          // Inicia comunicação SPI bus
  mfrc522.PCD_Init();   // Inicia MFRC522
  
  Serial.println("Aproxime o seu cartao do leitor...");
  Serial.println();
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT); 
  
} //end setup


// --- Loop Infinito ---
void loop() 
{
  // Verifica novos cartões
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Seleciona um dos cartões
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  
  // Mostra UID na serial
  Serial.print("UID da tag :");
  String conteudo= "";
  byte letra;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     conteudo.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Mensagem : ");
  conteudo.toUpperCase();
  
  if (conteudo.substring(1) == "8A 95 F3 59") //UID 1 - Chaveiro
  {
    Serial.println("Chaveiro identificado!");
    Serial.println();
    digitalWrite(6, HIGH);
    delay(5000);
     
  }

  else {
    Serial.println("Acesso negado");
    Serial.println();
    digitalWrite(7, HIGH);
    delay(5000);
  }
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);

  
  
} //end loop