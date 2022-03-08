#include <string>
#include <iostream>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "nvs_flash.h"

#include "wifi.h"

class Main final
{
private:
public:
    void run(void);
    void setup(void);

    WIFI::Wifi::state_e wifiState { WIFI::Wifi::state_e::NOT_INITIALIZED };
    WIFI::Wifi Wifi;
};