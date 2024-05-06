idf_component_register(SRCS "ble.c" "wifi.c" "mqtt.c"
                       INCLUDE_DIRS "include"
                       REQUIRES mqtt esp_wifi nvs_flash bt)