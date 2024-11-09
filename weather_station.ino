#define BLYNK_TEMPLATE_ID "TMPL380Bwbr7D"
#define BLYNK_TEMPLATE_NAME "Weather Station"
#define BLYNK_AUTH_TOKEN "T7XbnORbWevWEDNskT-wZpxpt8yptHHL"

#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>
#include<DHT.h>
char ssid[]="SNIST";
char pass[]="Taruni@05";
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

BlynkTimer timer;
void sendSendor(){
  float tC=dht.readTemperature();
  float tF=dht.readHumidity();
  if(isnan(tC)||isnan(tF)){
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Blynk.virtualWrite(V0,tC);
  Blynk.virtualWrite(V1,tF);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  dht.begin();
  time.setInterval(2000L,sendSensor);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
  timer.run();
}
