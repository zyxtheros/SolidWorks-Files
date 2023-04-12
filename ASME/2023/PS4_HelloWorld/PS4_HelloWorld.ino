#include <PS4Controller.h>
#include <ps4_int.h>

String mac = "90:cd:b6:e9:bb:50";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  PS4.begin("90:cd:b6:e9:bb:50");
  Serial.println("Initialization is ready!");

}

void loop() {
  // put your main code here, to run repeatedly:
  if(PS4.isConnected()) {
    Serial.println("Controller connected");
  }
 
  delay(1000);
}
