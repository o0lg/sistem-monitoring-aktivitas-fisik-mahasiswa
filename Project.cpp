#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float hitungRataRata(int data[]) {
    int total = 0;

    for (int i = 0; i < 7; i++) {
        total += data[i];
    }

    return total / 7.0;
}

float hitungRataRataIstirahat(float data[]) {
    float total = 0;

    for (int i = 0; i < 7; i++) {
        total += data[i];
    }

    return total / 7.0;
}

void cariOlahragaTerlama(int data[], string hari[]) {
    int tertinggi = data[0];
    int index = 0;

    for (int i = 1; i < 7; i++) {
        if (data[i] > tertinggi) {
            tertinggi = data[i];
            index = i;
        }
    }

    cout << "\nHari dengan durasi olahraga paling lama: "
         << hari[index] << endl;

    cout << "Durasi olahraga: "
         << tertinggi << " menit" << endl;
}

void cariIstirahatTerlama(float data[], string hari[]) {
    float tertinggi = data[0];
    int index = 0;

    for (int i = 1; i < 7; i++) {
        if (data[i] > tertinggi) {
            tertinggi = data[i];
            index = i;
        }
    }

    cout << "\nHari dengan waktu istirahat paling lama: "
         << hari[index] << endl;

    cout << "Waktu istirahat: "
         << tertinggi << " jam" << endl;
}

void tampilGrafikLangkah(int data[], string hari[]) {
    for (int i = 0; i < 7; i++) {
        cout << left << setw(7) << hari[i] << "| ";

        for (int j = 0; j < data[i] / 1000; j++) {
            cout << "*";
        }

        cout << " " << data[i] << endl;
    }

    cout << "(1 bintang = 1000 langkah)\n";
}

int main() {
    string hari[7] = {
        "Senin", "Selasa", "Rabu", "Kamis",
        "Jumat", "Sabtu", "Minggu"
    };

    int langkah[7];
    int olahraga[7];
    float istirahat[7];

    cout << "SISTEM MONITORING AKTIVITAS FISIK MAHASISWA\n";

    for (int i = 0; i < 7; i++) {
        cout << "\nHari " << hari[i] << endl;

        cout << "Jumlah langkah: ";
        cin >> langkah[i];

        cout << "Durasi olahraga (menit): ";
        cin >> olahraga[i];

        cout << "Waktu istirahat (jam): ";
        cin >> istirahat[i];
    }

    cout << "\n========== REKAP AKTIVITAS ==========\n";

    for (int i = 0; i < 7; i++) {
        cout << "\nHari: " << hari[i] << endl;
        cout << "Jumlah langkah: " << langkah[i] << endl;
        cout << "Durasi olahraga: " << olahraga[i] << " menit" << endl;
        cout << "Waktu istirahat: " << istirahat[i] << " jam" << endl;
    }

    float rataLangkah = hitungRataRata(langkah);
    float rataOlahraga = hitungRataRata(olahraga);
    float rataIstirahat = hitungRataRataIstirahat(istirahat);

    cout << fixed << setprecision(2);

    cout << "\n========== RATA-RATA ==========\n";

    cout << "Rata-rata langkah: " << rataLangkah << endl;
    cout << "Rata-rata olahraga: " << rataOlahraga << " menit\n";
    cout << "Rata-rata istirahat: " << rataIstirahat << " jam\n";

    cout << "\n========== ANALISIS ==========\n";

    if (rataLangkah >= 7000) {
        cout << "Aktivitas berjalan kaki cukup baik.\n";
    } else {
        cout << "Tingkatkan aktivitas berjalan kaki.\n";
    }

    if (rataOlahraga >= 30) {
        cout << "Durasi olahraga cukup baik.\n";
    } else {
        cout << "Tingkatkan durasi olahraga.\n";
    }

    if (rataIstirahat >= 7) {
        cout << "Waktu istirahat cukup baik.\n";
    } else {
        cout << "Tingkatkan waktu istirahat.\n";
    }

    cout << "\n========== OLAHRAGA TERLAMA ==========\n";

    cariOlahragaTerlama(olahraga, hari);

    cout << "\n========== GRAFIK LANGKAH ==========\n";

    tampilGrafikLangkah(langkah, hari);

    cout << "\n========== ISTIRAHAT TERLAMA ==========\n";

    cariIstirahatTerlama(istirahat, hari);

    return 0;
}
