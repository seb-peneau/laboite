
#include <Arduino.h>

#include "./services/laboite/domain.h"

#include "./components/debug/console/console.h"
#include "./components/network/wifi/wifi.h"
#include "./components/storage/eeprom/storeEeprom.h"
#include "./components/board/NodeMCU/nodemcuBoard.h"
#include "./components/storage/spiff/storeSpiff.h"
#include "./services/laboite/display/laboite/laboiteDisplay.h"
#include "./components/webserver/webserver/webserver.h"
#include "./components/ota/espOta/espOta.h"
#include "./components/time/ntp/ntp.h"

Domain* Tamtam = new Domain();

void setup() {
  Console* console = new Console();
  LaBoiteDisplay *ledDisplay = new LaBoiteDisplay(); // Specific display for laboite
  Tamtam->setBoardInterface(new NodeMCUBoard()); // FOR NODEMCU BOARD
  Tamtam->setDebugInterface(console);
  Tamtam->setDisplayInterface(ledDisplay);
  Tamtam->setNetworkInterface(new EspWifi());
  Tamtam->setStorageInterface(new StoreEeprom()); // USE EEPROM for storage
  // Tamtam->setStorageInterface(new StoreSpiff()); // USE SPIFF for storage
  Tamtam->setWebServerInterface(new EspWebServer());
  Tamtam->setOtaInterface(new ESPOta());
  Tamtam->setTimeInterface(new Ntp());
  Tamtam->setup();
}

void loop() {
  Tamtam->loop();
}