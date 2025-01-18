// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;


// defines variables
long duracao;
int distancia;
int distanciasegura;


void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(buzzer, OUTPUT);
Serial.begin(9600); 
}


void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
  
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);


digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duracao = pulseIn(echoPin, HIGH);

// Calculating the distance
distancia= duracao*0.034/2;

distanciasegura = distancia;
if (distanciasegura <= 20){
  digitalWrite(buzzer, HIGH);
 tone(buzzer, 40000);
 delay(500);
}
else{
  digitalWrite(buzzer, LOW);
  noTone(buzzer);
  delay(500);  
}

// Prints the distance on the Serial Monitor
Serial.print("Distancia: ");
Serial.println(distancia);
}
