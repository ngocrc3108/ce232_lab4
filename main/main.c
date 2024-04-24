#include <stdio.h>
#include "connection/wifi.h"
#include "connection/mqtt.h"
#include "esp_log.h"

void app_main(void) {
    //Initialize NVS
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
		ESP_ERROR_CHECK(nvs_flash_erase());
		ret = nvs_flash_init();
    }

    wifi_init_sta();
    mqtt_init();
}