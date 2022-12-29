#define BLYNK_TEMPLATE_ID "TEMPLATE_ID"
#define BLYNK_DEVICE_NAME "DEVICE_NAME"
#define BLYNK_AUTH_TOKEN "AUTH_TOKEN"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
char ssid[] = "WIFI_NAME";
char pass[] = "WIFI_PASSWORD";

BLYNK_WRITE(V0)
{
  // Room Light
  int value = param.asInt();

  Serial.println(value);
  if(value == 1)
  {
    Serial.println("ON");
    digitalWrite(D0, LOW);
  }
  if(value == 0)
  {
    Serial.println("OFF");
    digitalWrite(D0, HIGH);    
  }

}

BLYNK_WRITE(V1)
{
  // Stair Light
  int value = param.asInt();

  Serial.println(value);
  if(value == 1)
  {
    Serial.println("ON");
    digitalWrite(D0, LOW);
  }
  if(value == 0)
  {
    Serial.println("OFF");
    digitalWrite(D0, HIGH);    
  }
}

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  
  pinMode(D0, OUTPUT);
  digitalWrite(D0, HIGH);
}

void loop()
{
  Blynk.run();
}
