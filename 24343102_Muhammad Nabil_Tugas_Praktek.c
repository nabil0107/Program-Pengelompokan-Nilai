#include <stdio.h>

// Fungsi untuk mengelompokkan nilai ke kategori
char* kelompokkan_nilai(float nilai) {
    if (nilai >= 85 && nilai <= 100) {
        return "A";
    } else if (nilai >= 70 && nilai < 85) {
        return "B";
    } else if (nilai >= 55 && nilai < 70) {
        return "C";
    } else if (nilai >= 40 && nilai < 55) {
        return "D";
    } else if (nilai >= 0 && nilai < 40) {
        return "E";
    } else {
        return "Nilai tidak valid";
    }
}

int main() {
    float nilai;
    char ulang;

    printf("Program Pengelompokkan Nilai\n");

    do {
        // Input nilai dari pengguna
        printf("Masukkan nilai (0-100): ");
        if (scanf("%f", &nilai) != 1) {
            printf("Harap masukkan angka yang valid!\n");
            while (getchar() != '\n'); // Membersihkan buffer input
            continue; // Kembali ke awal loop
        }

        // Menampilkan hasil kategori
        printf("Nilai Anda masuk kategori: %s\n", kelompokkan_nilai(nilai));

        // Menanyakan apakah pengguna ingin mengulang
        printf("Apakah Anda ingin memasukkan nilai lagi? (y/n): ");
        scanf(" %c", &ulang);
        while (getchar() != '\n'); // Membersihkan buffer input

    } while (ulang == 'y' || ulang == 'Y');

    printf("Terima kasih telah menggunakan program ini.\n");
    return 0;
}
