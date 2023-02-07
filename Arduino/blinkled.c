// Projeto de Programação para Arduino em C
// Arduino Programming Project in C


#include <Arduino.h>

// Definir a porta digital do LED
// Define LED digital port
#define LED_PIN 13

void setup() {
  // Inicializar a porta digital como saída
  // Initialize digital port as output

  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Set high logic state on LED digital port
  // Definir o estado lógico alto na porta digital do LED
  digitalWrite(LED_PIN, HIGH);
  // Esperar 1 segundo
  // Wait for 1 second
  delay(1000);
  // Definir o estado lógico baixo na porta digital do LED
  // Set low logic state on LED digital port
  digitalWrite(LED_PIN, LOW);
  // Esperar 1 segundo
  // Wait for 1 second
  delay(1000);
}

