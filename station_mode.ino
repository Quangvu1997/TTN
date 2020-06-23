  // dooc ip cua con wifi can ket noi
  // thu vien
  #include <ESP8266WiFi.h>
  // khai bao bien
  char* ssid = "Hoa";
  char* pass = "123456789";  
  
  void setup() {
  // put your setup code here, to run once:
  // thiet lap che do station mode
  // bat dau
  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pass);
 
  Serial.begin(9600);
  Serial.print("Connecting");
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print("... ... ");  
  }
  //ketthuc
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
