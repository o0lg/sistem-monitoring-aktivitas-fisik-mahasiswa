# Sistem Monitoring Aktivitas Fisik Mahasiswa

Program **Sistem Monitoring Aktivitas Fisik Mahasiswa** merupakan aplikasi berbasis C++ untuk mencatat dan memantau aktivitas mahasiswa selama tujuh hari, mulai dari Senin hingga Minggu. Data yang dipantau meliputi jumlah langkah kaki, durasi olahraga, waktu istirahat, dan konsumsi air minum.

Program mengolah data yang dimasukkan pengguna untuk menampilkan rekap aktivitas mingguan, menghitung nilai rata-rata, memberikan analisis sederhana berdasarkan target yang ditentukan, serta menunjukkan hari dengan durasi olahraga dan waktu istirahat paling lama.

## Fitur Program

- **Pencatatan aktivitas selama tujuh hari**  
  Pengguna memasukkan jumlah langkah kaki, durasi olahraga dalam menit, waktu istirahat dalam jam, dan konsumsi air minum dalam liter untuk setiap hari.

- **Rekap aktivitas mingguan**  
  Program menampilkan kembali data langkah kaki, durasi olahraga, waktu istirahat, dan konsumsi air minum dari Senin sampai Minggu.

- **Perhitungan rata-rata aktivitas**  
  Program menghitung rata-rata jumlah langkah, durasi olahraga, waktu istirahat, dan konsumsi air minum selama tujuh hari.

- **Analisis aktivitas sederhana**  
  Program membandingkan nilai rata-rata dengan target yang telah ditentukan:
  - Jumlah langkah: 7.000 langkah per hari.
  - Durasi olahraga: 30 menit per hari.
  - Waktu istirahat: 7 jam per hari.
  - Konsumsi air minum: 2 liter per hari.  
  Hasilnya ditampilkan sebagai keterangan apakah aktivitas sudah cukup baik atau masih perlu ditingkatkan.

- **Pencarian hari dengan olahraga terlama**  
  Program membandingkan durasi olahraga setiap hari, kemudian menampilkan hari dengan durasi olahraga paling lama beserta jumlah menitnya.

- **Grafik sederhana jumlah langkah**  
  Program menampilkan grafik menggunakan karakter `*`. Setiap satu bintang mewakili 1.000 langkah sehingga jumlah langkah harian lebih mudah dilihat.

- **Pencarian hari dengan waktu istirahat terlama**  
  Program membandingkan waktu istirahat selama tujuh hari, kemudian menampilkan hari dengan waktu istirahat paling lama beserta jumlah jamnya.

- **Pencatatan dan rata-rata konsumsi air minum**  
  Program mencatat jumlah air minum yang dikonsumsi setiap hari dalam satuan liter, lalu menghitung rata-ratanya selama tujuh hari.

- **Analisis konsumsi air minum**  
  Program membandingkan rata-rata konsumsi air minum dengan target 2 liter per hari. Jika rata-rata mencapai atau melebihi target, program menampilkan keterangan bahwa konsumsi air minum cukup baik; jika belum, program menyarankan pengguna untuk meningkatkannya.

## Anggota Kelompok

| No. | Nama | NPM |
|---:|---|---:|
| 1 | M Arfa Rabbani Algusma | 2617051083 |
| 2 | Aufa Rayhan Arifin | 2657051005 |
| 3 | Azzka Luthfi Rahman | 2617051068 |
| 4 | Tsuraya Farras | 2617051078 |
| 5 | M Andra Aditia | 2617051082 |
| 6 | M Iqbal Al-Ghoni | 2617051059 |

## Kontribusi Anggota

Berdasarkan pembagian fitur yang tercantum dalam dokumen kelompok:

- **M Arfa Rabbani Algusma** — Pencatatan jumlah langkah kaki dan durasi olahraga selama tujuh hari, rekap aktivitas, perhitungan rata-rata aktivitas fisik, serta analisis berdasarkan target.
- **M Iqbal Al-Ghoni** — Fitur pencatatan konsumsi air minum harian dan perhitungan rata-rata konsumsi air dalam satuan liter.
- **M Andra Aditia** — Grafik jumlah langkah harian menggunakan karakter bintang, dengan satu bintang mewakili 1.000 langkah.
- **Tsuraya Farras** — Fitur pencarian hari dengan waktu istirahat paling lama selama tujuh hari.
- **Azzka Luthfi Rahman** — Fitur pencarian hari dengan durasi olahraga paling lama selama tujuh hari.
- **Aufa Rayhan Arifin** — Fitur perhitungan rata-rata waktu istirahat selama satu minggu.


## Teknologi

- Bahasa pemrograman: **C++**
- Pustaka yang digunakan:
  - `iostream` untuk input dan output.
  - `iomanip` untuk mengatur format tampilan.
  - `string` untuk menyimpan nama hari.

## Cara Menjalankan

1. Simpan kode program dengan ekstensi `.cpp`.
2. Buka file menggunakan compiler atau IDE C++.
3. Compile dan jalankan program.
4. Masukkan jumlah langkah, durasi olahraga, waktu istirahat, dan konsumsi air minum untuk setiap hari sesuai permintaan program.
5. Program akan menampilkan rekap, rata-rata, analisis aktivitas dan konsumsi air minum, pencarian aktivitas terlama, serta grafik langkah.

## Tujuan

Program ini dibuat untuk membantu mahasiswa memantau kebiasaan aktivitas fisik dan waktu istirahat selama satu minggu. Melalui rekap dan analisis sederhana, pengguna dapat mengevaluasi kebiasaan sehari-hari serta meningkatkan kesadaran dalam menjaga keseimbangan antara aktivitas, olahraga, dan istirahat.
