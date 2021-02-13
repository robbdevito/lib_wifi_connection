/*  By robbdevito
 *  13.02.21
 *  Connecting NodeMCU to known WiFi
*/


#include <ESP8266WiFi.h>
#include <PubSubClient.h>


/* Enter WIFI name and password */
const char* ssid = "ELIL-1860";
const char* password = "976764542267995454467053270947";


void setup(){
  WiFi.mode(WIFI_STA);    //disconnect all WIFI connections
  WiFi.disconnect();
  delay(100);

  Serial.begin(115200);   //beginn communication with Baudrate 115200
  delay(10);

  Serial.println();
  Serial.println("Connecting to following network:");
  Serial.println(ssid);

/* Start WiFi connection, for not established connection print ...
   after successfully connecting to WiFi, print success Message 
   and IP of ESP module*/
   
  WiFi.begin(ssid, password);       
  while (WiFi.status() != WL_CONNECTED) {
    delay(1500);
    Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi Connection successful"); 
    Serial.print("IP of own ESP-Module: ");
    Serial.println(WiFi.localIP());
}

void loop() {

}
 
