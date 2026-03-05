const int pinoled = 18;
const int pino_sensor = 32;


const int limiar_seco = 20;

void setup() {
  Serial.begin((115200));

 pinMode(pinoled, OUTPUT);
}

void loop() {
 int valor_umidade = analogRead(pino_sensor);

 Serial.print("Valor do sensor:");
 Serial.println(valor_umidade);

if(valor_umidade > limiar_seco) {
  Serial.println("Alerta: Solo seco!");
  digitalWrite(pinoled, HIGH);
}
else {
  Serial.println("Solo umido");
  digitalWrite(pinoled, LOW);
}
delay(5000);

}
