// khia báo thư viện esp 
#include<ESP8266WiFi.h>
// khai baos bieens
char* ssid = "Thang1";
char* pass = "66666666";
IPAddress ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

void setup() {
  // put your setup code here, to run once:
  WiFi.disconnect();
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(ip, gateway, subnet);
  WiFi.softAP(ssid, pass);

  Serial.begin(9600);
  Serial.println("ESP8266 operating");
}

void loop() {
  // put your main code here, to run repeatedly:

}
