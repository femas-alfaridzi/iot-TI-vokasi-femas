#include <Arduino.h> 

// Deklarasi pin LED
int lampuMerah = 26;
int lampuHijau  = 32;
int lampuKuning = 33;  // Tambahkan LED hijau (gunakan pin yang sesuai)

void setup() {
  Serial.begin(115200); // Inisialisasi komunikasi Serial
  Serial.println("ESP32 Blinking LED");

  // Atur pin sebagai OUTPUT
  pinMode(lampuMerah, OUTPUT);
  pinMode(lampuKuning, OUTPUT);
  pinMode(lampuHijau, OUTPUT);
}

void loop() {
  // Nyalakan lampu merah
  digitalWrite(lampuMerah, HIGH);
  Serial.println("Lampu merah nyala");
  delay(6000); // Tunggu 6 detik

  //matikan lampu merah
  digitalWrite(lampuMerah, LOW);
  Serial.println("Lampu merah mati");
  delay(1000); // Tunggu 1 detik

  // Nyalakan lampu kuning
  digitalWrite(lampuKuning, HIGH);
  Serial.println("Lampu kuning nyala");
  delay(3000); // Tunggu 3 detik

  //matikan lampu kuning
  digitalWrite(lampuKuning, LOW);
  Serial.println("Lampu kuning mati");
  delay(1000); // Tunggu 1 detik

  // Nyalakan lampu Hijau
  digitalWrite(lampuHijau, HIGH);
  Serial.println("Lampu hijau nyala");
  delay(4000); // Tunggu 4 detik

  //matikan lampu hijau
  digitalWrite(lampuHijau, LOW);
  Serial.println("Lampu hijau mati");

 delay(2000); // Tunggu 2 detik sebelum mengulang
}
