idf_component_register(SRCS "wifi.c" "mqtt.c"
                       INCLUDE_DIRS "include"
                       REQUIRES mqtt esp_wifi nvs_flash)