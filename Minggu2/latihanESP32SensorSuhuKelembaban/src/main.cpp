#include <Arduino.h>
#include <DHT.h>

#define DHTPIN 27      // Pin yang terhubung ke sensor DHT22
#define DHTTYPE DHT22  // Tipe sensor DHT

DHT dht(DHTPIN, DHTTYPE);

float humidity = 50.0;    // Nilai default kelembaban
float temperature = 25.0; // Nilai default suhu

void setup() {
  Serial.begin(115200);
  dht.begin(); // Inisialisasi sensor
}


void loop() {
  delay(2000); // Delay antar pembacaan

  // Baca nilai dari Wokwi (simulasi input slider)
  temperature = analogRead(34) / 40.95; // Simulasi slider suhu
  humidity = analogRead(35) / 40.95;    // Simulasi slider kelembaban

  // Tampilkan hasil pembacaan
  Serial.print("Kelembaban: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Suhu: ");
  Serial.print(temperature);
  Serial.println(" *C");
}
