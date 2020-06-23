// khai bao thu vien
#include <ESP8266WiFi.h>
// khai bao bien
char* ssid = "Hoa";
char* pass = "123456789";

IPAddress ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);
//=====================
void setup() {
  // put your setup code here, to run once:
  // thiet lap che do accesspoint
  WiFi.disconnect();
  WiFi.mode(WiFi_AP);
  WiFi.softAPConfig(ip, gateway, subnet);
  WiFi.softAP(ssid, pass);

  Serial.begin(9600);
  Serial.println("ESP 8266 ket noi thanh cong"); 

}

void loop() {
  // put your main code here, to run repeatedly:

}
