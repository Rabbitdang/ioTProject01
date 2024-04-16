/*
 * This ESP8266 NodeMCU code was developed by newbiely.com
 *
 * This ESP8266 NodeMCU code is made available for public use without any restriction
 *
 * For comprehensive instructions and wiring diagrams, please visit:
 * https://newbiely.com/tutorials/esp8266/esp8266-dht11
 */

// #define BLYNK_TEMPLATE_ID "TMPL6209JSHOF"
// #define BLYNK_TEMPLATE_NAME "Final"
// #define BLYNK_AUTH_TOKEN "QN3ib9zHipvjL-JbHtL1wZo39kuu4mg-"


// // Đèn RGB
// #define LED_R_PIN D6
// #define LED_G_PIN D7
// #define LED_B_PIN D8
// // #define LED_D5_PIN D5

// //Cảm biến nhiệt độ, độ ẩm
// #define DHT_SENSOR_PIN  D4 // The ESP8266 pin D7 connected to DHT11 sensor
// #define DHT_SENSOR_TYPE DHT11
// // #define DHT_SENSOR_TYPE DHT22

// //Còi
// #define BUZZER_PIN D0

// #include <DHT.h>
// #include <BlynkSimpleEsp8266.h>
// // #include <Wire.h>
// // #include <LiquidCrystal_I2C.h>

// // LiquidCrystal_I2C lcd(0x3F, 16, 2);

// DHT dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);

// const char* ssid = "VNU-IS THMT 02";
// const char* password = "Vnu.edu.vn";

// void setup() {
//   Serial.begin(9600);
//   Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
//   dht_sensor.begin();

//   // Initialize LED pins as OUTPUT
//   pinMode(LED_R_PIN, OUTPUT);
//   pinMode(LED_G_PIN, OUTPUT);
//   pinMode(LED_B_PIN, OUTPUT);

//   pinMode(BUZZER_PIN, OUTPUT);

//   // pinMode(LED_D5_PIN, OUTPUT);

//   // Wire.begin(D3, D2);
//   // lcd.init();   // initializing the LCD
//   // lcd.backlight(); // Enable or Turn On the backlight 
//   // lcd.print(" Hello Makers "); // Start Printing
// }

// void runDHT() {
//   // read humidity
//   float humi  = dht_sensor.readHumidity();
//   // read temperature in Celsius
//   float temperature_C = dht_sensor.readTemperature();
//   // read temperature in Fahrenheit
//   float temperature_F = dht_sensor.readTemperature(true);

//   // check whether the reading is successful or not
//   if (isnan(temperature_C) || isnan(temperature_F) || isnan(humi)) {
//     Serial.println("Failed to read from DHT sensor!");
//   } else {
//     Serial.print("Humidity: ");
//     Serial.print(humi);
//     Serial.print("%");

//     Serial.print("  |  ");

//     Serial.print("Temperature: ");
//     Serial.print(temperature_C);
//     Serial.print("°C  ~  ");
//     Serial.print(temperature_F);
//     Serial.println("°F");

//     // Push data to Blynk
//     Blynk.virtualWrite(V1, humi);
//     Blynk.virtualWrite(V0, temperature_C); 

//     // Control LED color based on temperature
//     if (temperature_C > 30) {
//       // Red color
//       analogWrite(LED_R_PIN, 0); // Full brightness
//       analogWrite(LED_G_PIN, 0);   // No green
//       analogWrite(LED_B_PIN, 255);   // No blue

//       // Turn on buzzer
//       digitalWrite(BUZZER_PIN, HIGH);
//       // digitalWrite(LED_D5_PIN, HIGH);
//     } 
//     else {
//       // Blue color
//       analogWrite(LED_R_PIN, 0);   // No red
//       analogWrite(LED_G_PIN, 255);   // No green
//       analogWrite(LED_B_PIN, 0); // Full brightness

//       // Turn on buzzer
//       digitalWrite(BUZZER_PIN, LOW);
//       // digitalWrite(LED_D5_PIN, LOW);
//     }
//   }
// }

// void loop() {
//   Blynk.run();
//   runDHT();
//   delay(2000); // Move the delay inside the loop
// }





//  TECHATRONIC.COM  
//  LIBRARY FOR I2C LDC  
//  https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library  

// #define BLYNK_TEMPLATE_ID "TMPL6209JSHOF"
// #define BLYNK_TEMPLATE_NAME "Final"
// #define BLYNK_AUTH_TOKEN "QN3ib9zHipvjL-JbHtL1wZo39kuu4mg-"

// // Đèn RGB
// #define LED_R_PIN D6
// #define LED_G_PIN D7
// #define LED_B_PIN D8

// //Cảm biến nhiệt độ, độ ẩm
// #define DHT_SENSOR_PIN  D4 // The ESP8266 pin D7 connected to DHT11 sensor
// #define DHT_SENSOR_TYPE DHT11
// // #define DHT_SENSOR_TYPE DHT22

// //Còi
// #define BUZZER_PIN        D0

// #include <DHT.h>
// #include <BlynkSimpleEsp8266.h>
// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>         


// DHT dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);
// LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

// // const char* ssid = "VNU-IS THMT 02";
// // const char* ssid = "VNU-IS Phong Khanh Tiet";
// // const char* password = "Vnu.edu.vn";
// const char* ssid = "Duc Dat";
// const char* password = "30082002";
// int buttonState = 0; 

// void setup() {
//   Serial.begin(9600);
//   Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
//   dht_sensor.begin();

//   // Initialize LED pins as OUTPUT
//   pinMode(LED_R_PIN, OUTPUT);
//   pinMode(LED_G_PIN, OUTPUT);
//   pinMode(LED_B_PIN, OUTPUT);

//   pinMode(BUZZER_PIN, OUTPUT);
//   lcd.begin();         // initialize the lcd
//   lcd.backlight();    
//   lcd.clear(); // Clear the LCD screen
//   lcd.setCursor(5, 0);
//   lcd.print("HELLO");
//   lcd.setCursor(2, 1);
//   lcd.print("BUTTON IS OFF");

// }

// void runDHT() {
//   // read humidity
//   float humi  = dht_sensor.readHumidity();
//   // read temperature in Celsius
//   float temperature_C = dht_sensor.readTemperature();
//   // read temperature in Fahrenheit
//   float temperature_F = dht_sensor.readTemperature(true);

//   // check whether the reading is successful or not
//   if (isnan(temperature_C) || isnan(temperature_F) || isnan(humi)) {
//     Serial.println("Failed to read from DHT sensor!");
//   } else {
//     Serial.print("Humidity: ");
//     Serial.print(humi);
//     Serial.print("%");

//     Serial.print("  |  ");

//     Serial.print("Temperature: ");
//     Serial.print(temperature_C);
//     Serial.print("°C  ~  ");
//     Serial.print(temperature_F);
//     Serial.println("°F");

//     // Push data to Blynk
//     Blynk.virtualWrite(V1, humi);
//     Blynk.virtualWrite(V0, temperature_C); 

//     //lcd
//     lcd.clear();
//     lcd.setCursor(0, 0);
//     lcd.print("Humidity: ");
//     lcd.print(humi);
//     lcd.print("%");

//     lcd.setCursor(0, 1);
//     lcd.print("Temp: ");
//     lcd.print(temperature_C);
//     lcd.print("C");

//     // Control LED color based on temperature
//     if (temperature_C > 27) {
//       // Red color
//       analogWrite(LED_R_PIN, 0); // Full brightness
//       analogWrite(LED_G_PIN, 0);   // No green
//       analogWrite(LED_B_PIN, 255);   // No blue

//       // Turn on buzzer
//       digitalWrite(BUZZER_PIN, HIGH);
//     } 
//     else {
//       // Blue color
//       analogWrite(LED_R_PIN, 0);   // No red
//       analogWrite(LED_G_PIN, 255);   // No green
//       analogWrite(LED_B_PIN, 0); // Full brightness

//       // Turn on buzzer
//       digitalWrite(BUZZER_PIN, LOW);
//     }
//   }
// }

// void loop() {
//   Blynk.run();
  
//   // Đọc trạng thái của nút và xử lý
//   if (buttonState == 1) {
//     runDHT();
//   } else {
//     Serial.println("Button is OFF");
//     lcd.clear(); // Clear the LCD screen
//     lcd.setCursor(0, 0);
//     lcd.print("HELLO");
//     lcd.setCursor(0, 1);
//     lcd.print("BUTTON IS OFF");
//     analogWrite(LED_G_PIN, 0); 
//     analogWrite(LED_B_PIN, 0);  
//     digitalWrite(BUZZER_PIN, LOW); 
//   }

//   delay(2000); 
// }

// // Callback function for button widget on V2
// BLYNK_WRITE(V2) {
//   buttonState = param.asInt(); // Đọc trạng thái của nút (0: Tắt, 1: Bật)
// }


#define BLYNK_TEMPLATE_ID "TMPL6209JSHOF"
#define BLYNK_TEMPLATE_NAME "Final"
#define BLYNK_AUTH_TOKEN "QN3ib9zHipvjL-JbHtL1wZo39kuu4mg-"

// Đèn led
#define LED_D5_PIN D5

//Cảm biến nhiệt độ, độ ẩm
#define DHT_SENSOR_PIN  D4 // The ESP8266 pin D7 connected to DHT11 sensor
#define DHT_SENSOR_TYPE DHT11
// #define DHT_SENSOR_TYPE DHT22

//Còi
#define BUZZER_PIN        D3

#include <DHT.h>
#include <BlynkSimpleEsp8266.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>  

DHT dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);

// const char* ssid = "VNU-IS THMT 02";
// const char* password = "Vnu.edu.vn";
const char* ssid = "Duc Dat";
const char* password = "30082002";

LiquidCrystal_I2C lcd(0x3F, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);
  dht_sensor.begin();


  pinMode(BUZZER_PIN, OUTPUT);

  pinMode(LED_D5_PIN, OUTPUT);

  lcd.begin();         // initialize the lcd
  lcd.backlight();    
  lcd.clear(); // Clear the LCD screen
  lcd.setCursor(5, 0);
  lcd.print("HELLO");
  lcd.setCursor(0, 1);
  lcd.print("BUTTON IS OFF");

}

void runDHT() {
  // read humidity
  float humi  = dht_sensor.readHumidity();
  // read temperature in Celsius
  float temperature_C = dht_sensor.readTemperature();
  // read temperature in Fahrenheit
  float temperature_F = dht_sensor.readTemperature(true);

  // check whether the reading is successful or not
  if (isnan(temperature_C) || isnan(temperature_F) || isnan(humi)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Humidity: ");
    Serial.print(humi);
    Serial.print("%");

    Serial.print("  |  ");

    Serial.print("Temperature: ");
    Serial.print(temperature_C);
    Serial.print("°C  ~  ");
    Serial.print(temperature_F);
    Serial.println("°F");

    // Push data to Blynk
    Blynk.virtualWrite(V1, humi);
    Blynk.virtualWrite(V0, temperature_C); 

    //lcd

    // Control LED color based on temperature
    if (temperature_C > 30) {
      // Turn on buzzer
      digitalWrite(BUZZER_PIN, HIGH);
      digitalWrite(LED_D5_PIN, HIGH);
    } 
    else {
      // Turn on buzzer
      digitalWrite(BUZZER_PIN, LOW);
      digitalWrite(LED_D5_PIN, LOW);
    }
  }
}

void loop() {
  Blynk.run();
  runDHT();
  delay(2000); // Move the delay inside the loop
}


