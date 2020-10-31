#ifndef LaBoiteDisplayInterface_h
#define LaBoiteDisplayInterface_h

#include "../../../components/display/displayInterface.h"

class LaBoiteDisplayInterface : public DisplayInterface
{
  public:
    virtual void setup (DebugInterface *debug);
    virtual void loop ();
    virtual void clearDisplay ();
    virtual void setCoordStatus (int x, int y, bool state);
    virtual void displayWifiStatus (bool displayWifi);
    virtual void displayHour (int hour, int minutes);
    virtual void displayTemp (int temp);
    virtual void displayConfigurationMode(bool configModeEnabled);
    virtual void displayOtaProgress(int progressPercent);
    virtual void displayIpAddress(String ip);
};

#endif