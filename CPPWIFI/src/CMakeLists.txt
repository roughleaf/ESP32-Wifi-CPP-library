set(SOURCES main.cpp
            CPPWIFI/wifi.cpp)
            
idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS .  ../include/CPPWIFI
                    REQUIRES esp_wifi nvs_flash esp_event esp_netif lwip)