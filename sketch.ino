
const int SENSOR_DE_UMIDADE = 34;
const int LED_SECO = 26;
const int LED_UMIDO = 33;
const int LIMIAR_SECO = 2000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
pinMode(LED_SECO, OUTPUT);
pinMode(LED_UMIDO, OUTPUT);


}

void loop() {
   int valor_umidade = analogRead(SENSOR_DE_UMIDADE);

   Serial.print("Valor de umidade: ");
   Serial.println(valor_umidade);

   if(valor_umidade > LIMIAR_SECO){
    Serial.println("ALERTA: Solo seco! É hora de regar");
    digitalWrite(LED_SECO, HIGH);
    digitalWrite(LED_UMIDO, LOW);
   

   }
    else {
      Serial.println("Solo úmido. Tudo certo!");
      digitalWrite(LED_SECO, LOW);
      digitalWrite(LED_UMIDO, HIGH);
      
    }

    delay(1000);
}
