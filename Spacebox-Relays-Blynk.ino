#define BLYNK_PRINT Serial    // Comment this out to disable prints and save space
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "BLYNK AUTH TOKEN HERE";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "YOUR SSID";
char pass[] = "YOUR WIFI PASSWORD";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}

