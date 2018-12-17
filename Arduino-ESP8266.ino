#include <SPI.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>


char auth[] = "Authorization Code";


char ssid[] = "Wifi SSID";
char pass[] = "Password";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  
}

BLYNK_WRITE(V1)

{

  Blynk.setProperty(V1, "offLabel", "OFF");
    
  Blynk.setProperty(V1, "onLabel", "ON");


  
  }
void loop()
{
  Blynk.run();
  
}
