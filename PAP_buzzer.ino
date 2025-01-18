const int buzzer = 9;
 
//Método setup, executado uma vez ao ligar o Arduino.
void setup() {
  //Definindo o pino buzzer como de saída.
  pinMode(buzzer,OUTPUT);
}
 
//Método loop, executado enquanto o Arduino estiver ligado.
void loop() {  
  //Ligando o buzzer com uma frequencia de 1500 hz.
  tone(buzzer,400000);   
  delay(500);
   
  //Desligando o buzzer.
  noTone(buzzer);
  delay(500);  
}
