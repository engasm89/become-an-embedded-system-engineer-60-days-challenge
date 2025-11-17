#include "freertos/FreeRTOS.h" // FreeRTOS
#include "freertos/task.h" // Tasks
#include "driver/gpio.h" // GPIO
#include "esp_log.h" // Logging

#define LED GPIO_NUM_2 // LED
static const char *TAG = "ENG"; // Tag

void app_main(void) { // Entry
  gpio_set_direction(LED, GPIO_MODE_OUTPUT); // Output
  ESP_LOGI(TAG, "Engineering challenge demo"); // Log
  while (true) { gpio_set_level(LED, 1); vTaskDelay(pdMS_TO_TICKS(100)); gpio_set_level(LED, 0); vTaskDelay(pdMS_TO_TICKS(900)); } // Heartbeat
} // End

