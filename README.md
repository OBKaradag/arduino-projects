# ⚡ Arduino Uygulamaları ve Sensör Projeleri

Bu depo, donanım programlama ve gömülü sistemler üzerine yaptığım temel ve orta seviye Arduino projelerini içermektedir. Her bir klasör, bağımsız bir donanım uygulamasını barındırır.

## 📂 Proje Listesi

Aşağıda bu depoda yer alan bazı temel çalışmalar listelenmiştir:

* **`bluetooth/`**: Bluetooth modülü üzerinden kablosuz haberleşme uygulaması.
* **`dijital-saat/`**: RTC modülü veya sayıcılar kullanılarak yapılan saat tasarımı.
* **`gaz-sensoru-1/`**: Ortamdaki gaz yoğunluğunu okuyup tepki veren sistem.
* **`hareket-sensoru/`**: PIR sensörü ile hareket algılama ve alarm kontrolü.
* **`toprak-nem/`**: Toprak nem sensörü ile tarım/bitki sulama simülasyonu.
* **`rgb-led/`**: PWM sinyalleri ile RGB renk kontrolü.

## 🛠️ Kullanılan Donanım ve Bileşenler

* Arduino Uno / Nano / Mega (Projeye göre değişkenlik gösterir)
* HC-06 / HC-05 Bluetooth Modülü
* PIR Hareket Sensörü, LDR (Işık Sensörü), NTC (Sıcaklık Sensörü)
* Çeşitli aktüatörler (DC Motor, LED'ler, Servo)

## 🚀 Nasıl Kullanılır?

1. İncelemek istediğiniz projenin klasörüne girin.
2. İçerisindeki `.ino` uzantılı dosyayı **Arduino IDE** ile açın.
3. Gerekli devre bağlantılarını (pinleri koda göre ayarlayarak) kurun.
4. Kodu derleyip kartınıza yükleyin (Upload).
