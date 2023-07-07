/*
 Projeto em C para Arduino. 
 Programa que liga e desliga um LED conectado à placa Arduino em intervalos regulares.
*/

// Incluindo a biblioteca do Arduino
#include <Arduino.h>

// Definindo o pino do LED
const int ledPin = 13;

// Função para configurar o ambiente
void setup() {
  // Configurando o pino do LED como saída
  pinMode(ledPin, OUTPUT);
}

// Função principal
void loop() {
  // Ligar o LED
  digitalWrite(ledPin, HIGH);
  
  // Aguardar por 1 segundo
  delay(1000);
  
  // Desligar o LED
  digitalWrite(ledPin, LOW);
  
  // Aguardar por mais 1 segundo
  delay(1000);
}