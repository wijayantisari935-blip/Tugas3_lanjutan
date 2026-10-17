#include <iostream>
#include <cstdlib> // Diperlukan untuk fungsi system("pause") agar program tidak langsung menutup

using namespace std;

// 1. FUNGSI UNTUK MENAMPILKAN MENU
void tampilkanMenu() {
    cout << "=== MENU MINI KASIR ===" << endl;
    cout << "1. Pecel      : Rp 10.000" << endl;
    cout << "2. Minum Teh  : Rp  3.000" << endl;
    cout << "3. Kopi       : Rp  5.000" << endl;
    cout << "=======================" << endl;
}

// 2. FUNGSI UTAMA UNTUK MENGHITUNG TRANSAKSI KASIR
void hitungKasir() {
    int pilihan, jumlah;
    int totalBayar = 0;
    int harga = 0;

    // Memanggil fungsi untuk menampilkan menu makanan/minuman
    tampilkanMenu();

    // Perulangan (loop) agar kasir bisa memasukkan banyak pesanan sekaligus
    while (true) {
        cout << "Masukkan nomor menu (1/2/3) atau 0 untuk selesai: ";
        cin >> pilihan;

        // Jika user mengetik angka 0, perulangan berhenti
        if (pilihan == 0) {
            break; 
        }

        // Menentukan harga berdasarkan nomor menu menggunakan switch-case
        switch (pilihan) {
            case 1:
                harga = 10000; // Harga Pecel
                break;
            case 2:
                harga = 3000;  // Harga Minum Teh
                break;
            case 3:
                harga = 5000;  // Harga Kopi
                break;
            default:
                cout << "Pilihan tidak valid! Silakan pilih menu 1, 2, atau 3.\n" << endl;
                continue; // Kembali ke awal input jika salah ketik angka menu
        }

        cout << "Masukkan jumlah pesanan: ";
        cin >> jumlah;

        // Hitung subtotal belanjaan saat itu dan akumulasikan ke total bayar
        int subtotal = harga * jumlah;
        totalBayar += subtotal;
        cout << "Subtotal: Rp " << subtotal << "\n" << endl;
    }

    // Menampilkan total akhir yang harus dibayar konsumen
    cout << "=======================" << endl;
    cout << "TOTAL YANG HARUS DIBAYAR: Rp " << totalBayar << endl;
    cout << "=======================" << endl;
}

int main() {
    // Menjalankan fungsi kasir
    hitungKasir();
    
    // Menahan jendela CMD/Terminal agar hasil akhir tetap terlihat di layar
    cout << endl;
    system("pause"); 
    
    return 0;
}
