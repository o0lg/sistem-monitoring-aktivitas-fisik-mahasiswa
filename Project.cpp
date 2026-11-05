
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

    cout << left << setw(12) << "Hari"
         << setw(15) << "Langkah"
         << setw(15) << "Olahraga"
         << setw(15) << "Istirahat" << endl;

    for (int i = 0; i < 7; i++) {
        cout << left << setw(12) << hari[i]
             << setw(15) << langkah[i]
             << setw(15) << olahraga[i]
             << setw(15) << istirahat[i] << endl;
    }

    float rataLangkah = hitungRataRata(langkah);
    float rataOlahraga = hitungRataRata(olahraga);
    float rataIstirahat = hitungRataRataIstirahat(istirahat);

    cout << fixed << setprecision(2);

    cout << "\nRata-rata langkah: " << rataLangkah << endl;
    cout << "Rata-rata olahraga: " << rataOlahraga << " menit\n";
    cout << "Rata-rata istirahat: " << rataIstirahat << " jam\n";

    cout << "\n========== ANALISIS ==========\n";

    if (rataLangkah >= 7000) {
        cout << "Aktivitas berjalan kaki cukup baik.\n";
    } else {
        cout << "Tingkatkan aktivitas berjalan kaki.\n";
    }

    if (rataOlahraga >= 30) {
        cout << "durasi olahraga cukup baik.\n";
    } else {
        cout << "Tingkatkan durasi olahraga.\n";
    }

    if (rataIstirahat >= 7) {
        cout << "Waktu istirahat cukup baik.\n";
    } else {
        cout << "Tingkatkan waktu istirahat.\n";
    }

    return 0;
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

    cout << "Hari dengan durasi olahraga paling lama: "
         << hari[index] << endl;
    cout << "Durasi olahraga: " << tertinggi << " menit" << endl;
}
cariOlahragaTerlama(olahraga, hari);
