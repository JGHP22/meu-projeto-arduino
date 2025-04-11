#include <Arduino.h>

// put function declarations here:

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Digite 'ON' para ligar o LED:");
}

void loop()
{
  if (Serial.available() > 0){
    String command = Serial.readStringUntil('\n');
    command.trim();
    if(command.equalsIgnoreCase("ON")){
      digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("LED LIGADO");
    delay(2000);
    digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
// put function definitions here: