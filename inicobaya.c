#include <stdio.h>
#include <math.h>

void operasi_dasar() {
    double a, b;
    printf("\n=== OPERASI ARITMATIKA DASAR ===\n");
    printf("Masukkan bilangan pertama: ");
    scanf("%lf", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%lf", &b);

    printf("\n--- Hasil Operasi ---\n");
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    printf("%.2f * %.2f = %.2f\n", a, b, a * b);

    if (b != 0) {
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        printf("%.2f %% %.2f = %.2f\n", a, b, fmod(a, b));
    } else {
        printf("Pembagian tidak bisa dilakukan (pembagi = 0)\n");
    }
}

void operasi_eksponensial() {
    double a, b;
    printf("\n=== OPERASI EKSPONENSIAL ===\n");
    printf("Masukkan bilangan dasar: ");
    scanf("%lf", &a);
    printf("Masukkan pangkat: ");
    scanf("%lf", &b);

    printf("\n--- Hasil Operasi ---\n");
    printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
    printf("Akar kuadrat dari %.2f = %.2f\n", a, sqrt(a));
    printf("Akar pangkat 3 dari %.2f = %.2f\n", a, cbrt(a));
}

void operasi_logaritma() {
    double a;
    printf("\n=== OPERASI LOGARITMA ===\n");
    printf("Masukkan bilangan (harus positif): ");
    scanf("%lf", &a);

    if (a <= 0) {
        printf("Error: Logaritma hanya bisa dilakukan untuk bilangan positif!\n");
        return;
    }

    printf("\n--- Hasil Operasi ---\n");
    printf("Logaritma natural (ln) dari %.2f = %.4f\n", a, log(a));
    printf("Logaritma basis 10 (log) dari %.2f = %.4f\n", a, log10(a));
    printf("Logaritma basis 2 (log2) dari %.2f = %.4f\n", a, log2(a));
    printf("e (konstanta euler) = %.4f\n", exp(1.0));
}

int main() {
    int pilihan;
    int lanjut = 1;

    printf("╔════════════════════════════════════════╗\n");
    printf("║  PROGRAM KALKULATOR ARITMATIKA LENGKAP ║\n");
    printf("╚════════════════════════════════════════╝\n");

    while (lanjut) {
        printf("\n===== MENU UTAMA =====\n");
        printf("1. Operasi Aritmatika Dasar\n");
        printf("2. Operasi Eksponensial\n");
        printf("3. Operasi Logaritma\n");
        printf("4. Keluar\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                operasi_dasar();
                break;
            case 2:
                operasi_eksponensial();
                break;
            case 3:
                operasi_logaritma();
                break;
            case 4:
                printf("\nTerima kasih telah menggunakan program ini!\n");
                lanjut = 0;
                break;
            default:
                printf("Pilihan tidak valid! Coba lagi.\n");
        }
    }

    return 0;
}