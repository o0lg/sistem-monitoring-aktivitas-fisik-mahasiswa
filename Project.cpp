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

float hitungRataRataProtein(float data[]) {
    float total = 0;

    for (int i = 0; i < 7; i++) {
        total += data[i];
    }

    return total / 7.0;
}

void cariWaktuMakanTerlama(float data[], string hari[]) {
    float tertinggi = data[0];
    int index = 0;

    for (int i = 1; i < 7; i++) {
        if (data[i] > tertinggi) {
            tertinggi = data[i];
            index = i;
        }
    }

    cout << "\nHari dengan waktu makan paling lama: "
         << hari[index] << endl;

    cout << "Waktu makan: "
         << tertinggi << " jam" << endl;
}

int main() {
    string hari[7] = {
        "Senin", "Selasa", "Rabu", "Kamis",
        "Jumat", "Sabtu", "Minggu"
    };

    int langkah[7];
    int olahraga[7];
    float protein[7];
    float waktuMakan[7];

    cout << "SISTEM MONITORING AKTIVITAS FISIK MAHASISWA\n";

    for (int i = 0; i < 7; i++) {
        cout << "\nHari " << hari[i] << endl;

        cout << "Jumlah langkah: ";
        cin >> langkah[i];

        cout << "Durasi olahraga (menit): ";
        cin >> olahraga[i];

        cout << "Konsumsi protein (gram): ";
        cin >> protein[i];

        cout << "Waktu makan (jam): ";
        cin >> waktuMakan[i];
    }

    cout << "\n========== REKAP AKTIVITAS ==========\n";

    cout << left << setw(12) << "Hari"
         << setw(15) << "Langkah"
         << setw(15) << "Olahraga"
         << setw(15) << "Protein (g)"
         << setw(15) << "Waktu Makan" << endl;

    for (int i = 0; i < 7; i++) {
        cout << left << setw(12) << hari[i]
             << setw(15) << langkah[i]
             << setw(15) << olahraga[i]
             << setw(15) << protein[i]
             << setw(15) << waktuMakan[i] << endl;
    }

    float rataLangkah = hitungRataRata(langkah);
    float rataOlahraga = hitungRataRata(olahraga);
    float rataProtein = hitungRataRataProtein(protein);

    cout << fixed << setprecision(2);

    cout << "\nRata-rata langkah: " << rataLangkah << endl;
    cout << "Rata-rata olahraga: " << rataOlahraga << " menit\n";
    cout << "Rata-rata konsumsi protein: " << rataProtein << " gram\n";

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

    if (rataProtein >= 50.0) {
        cout << "Konsumsi protein harian cukup baik.\n";
    } else {
        cout << "Tingkatkan konsumsi protein harian.\n";
    }

    cout << "\n========== WAKTU MAKAN TERLAMA ==========\n";

    cariWaktuMakanTerlama(waktuMakan, hari);

    return 0;
}
