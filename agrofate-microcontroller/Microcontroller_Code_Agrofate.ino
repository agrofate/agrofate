#include <WiFi.h>
#include <HTTPClient.h>
  
const char* ssid = "WIFI_name";
const char* password =  "WIFI_password";
uint32_t chipID = 0;
uint32_t humiditySensor = 13;
uint32_t phSensor = 14;
  
void setup(){
  pinMode(humiditySensor, INPUT);
  pinMode(phSensor, INPUT);
  Serial.begin(115200);
  delay(4000);
  WiFi.begin(ssid, password); 
  while (WiFi.status() != WL_CONNECTED){
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
  Serial.println("Connected to the WiFi network");
} 

void loop(){
  for(int i=0; i<17; i=i+8) {
    chipID |= ((ESP.getEfuseMac() >> (40 - i)) & 0xff) << i;
    }
    
  if(WiFi.status()== WL_CONNECTED){
   HTTPClient http;
   http.begin("https://getstartedpython-sweet-hyrax-ht.mybluemix.net/insert-historico-sensor?chipid="+String(chipID)+"&humidade="+String(analogRead(humiditySensor))+"&ph="+String(analogRead(phSensor)));
   http.addHeader("Content-Type", "application/x-www-form-urlencoded");
   int httpResponseCode = http.POST("0");
   
   if(httpResponseCode>0){
    String response = http.getString();
    Serial.println(httpResponseCode);
    Serial.println(response);
   }else{
    Serial.print("Error on sending POST: ");
    Serial.println(httpResponseCode);
   } 
   http.end();
  }else{
    Serial.println("Error in WiFi connection");   
  }
  delay(10000);
}
