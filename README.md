# Program Hitung Jumlah Data Genap dan Ganjil

[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://cplusplus.com/)
[![Status: Active](https://img.shields.io/badge/Status-Active-green.svg)](#)

Program sederhana berbasis **C++** yang menghitung dan memisahkan jumlah bilangan genap dan bilangan ganjil dari serangkaian data yang diinputkan melalui keyboard.

## 📋 Daftar Isi

- [Fitur Utama](#-fitur-utama)
- [Teknologi yang Digunakan](#-teknologi-yang-digunakan)
- [Prasyarat](#-prasyarat)
- [Instalasi](#-instalasi)
- [Struktur Project](#-struktur-project)
- [Penggunaan](#-penggunaan)
- [Contoh Output](#-contoh-output)
- [Penjelasan Kode](#-penjelasan-kode)
- [Kontribusi](#-kontribusi)
- [Lisensi](#-lisensi)
- [Penulis](#-penulis)

## ✨ Fitur Utama

- ✅ **Input Dinamis**: Menerima 10 bilangan input dari pengguna melalui keyboard
- ✅ **Validasi Input**: Memastikan semua input berada dalam range 0-10
- ✅ **Kategorisasi Otomatis**: Secara otomatis menentukan bilangan genap atau ganjil
- ✅ **Akumulasi Data**: Menjumlahkan semua bilangan berdasarkan kategorinya
- ✅ **Tampilan User-Friendly**: Pesan dan prompt yang jelas dan mudah dipahami
- ✅ **Error Handling**: Menangani input yang tidak valid dengan feedback yang informatif

## 🛠 Teknologi yang Digunakan

| Teknologi | Versi | Keterangan |
|-----------|-------|-----------|
| **C++** | C++11 atau lebih tinggi | Bahasa pemrograman utama |
| **iostream** | Standard Library | Library untuk input/output |
| **Compiler** | GCC/Clang/MSVC | Kompiler C++ |

## 📌 Prasyarat

Sebelum menjalankan program, pastikan Anda telah menginstall:

- **C++ Compiler** (GCC, Clang, atau MSVC)
  - Linux: `sudo apt-get install build-essential` (Ubuntu/Debian)
  - macOS: `xcode-select --install`
  - Windows: [MinGW](http://www.mingw.org/) atau [Visual C++](https://visualstudio.microsoft.com/)
- **Text Editor atau IDE** (Visual Studio Code, Code::Blocks, Dev-C++, dll)

## 💾 Instalasi

### 1. Clone Repository

```bash
git clone https://github.com/username/tugas-looping-04.git
cd tugas-looping-04
```

### 2. Kompilasi Program

**Menggunakan GCC/Clang (Linux/macOS):**

```bash
g++ -o program main.cpp
```

atau

```bash
clang++ -o program main.cpp
```

**Menggunakan MinGW (Windows):**

```bash
g++ -o program.exe main.cpp
```

### 3. Jalankan Program

**Linux/macOS:**

```bash
./program
```

**Windows:**

```bash
program.exe
```

## 📁 Struktur Project

```
tugas-looping-04/
│
├── main.cpp                 # File utama program
├── README.md               # Dokumentasi project
├── laporan/
│   ├── laporan.html       # Laporan dalam format HTML
│   └── laporan.pdf        # Laporan dalam format PDF
└── .gitignore             # File yang diabaikan Git
```

## 🚀 Penggunaan

### Langkah-langkah Menjalankan Program

1. **Jalankan program** dengan perintah sesuai sistem operasi Anda
2. **Masukkan 10 bilangan** saat diminta (harus antara 0-10)
3. **Program akan secara otomatis**:
   - Memvalidasi setiap input
   - Mengkategorikan bilangan sebagai genap atau ganjil
   - Mengakumulasi nilai berdasarkan kategorinya
4. **Lihat hasil akhir** berupa jumlah total bilangan genap dan ganjil

### Contoh Interaksi

```
=== Program Hitung Jumlah Data Genap dan Ganjil ===
Masukkan bilangan dari 0 sampai 10

Masukkan data ke-1 : 5
Masukkan data ke-2 : 10
Masukkan data ke-3 : 3
Masukkan data ke-4 : 7
Masukkan data ke-5 : 2
Masukkan data ke-6 : 8
Masukkan data ke-7 : 4
Masukkan data ke-8 : 1
Masukkan data ke-9 : 6
Masukkan data ke-10 : 9
```

## 📊 Contoh Output

```
=== HASIL AKHIR ===
Jumlah total bilangan genap : 30
Jumlah total bilangan ganjil: 31
```

**Penjelasan Output:**
- Bilangan genap yang diinput: 10, 2, 8, 4, 6 → Total = 30
- Bilangan ganjil yang diinput: 5, 3, 7, 1, 9 → Total = 31

### Skenario Input Tidak Valid

```
Masukkan data ke-1 : 15
Input tidak valid! Silakan masukkan bilangan 0-10
Masukkan data ke-1 : 5
```

Program akan terus meminta input hingga input yang valid diterima.

## 📖 Penjelasan Kode

### Deklarasi Variabel

```cpp
int jumGenap = 0;      // Menyimpan jumlah total bilangan genap
int jumGanjil = 0;     // Menyimpan jumlah total bilangan ganjil
int data;              // Variabel untuk menyimpan input
int ke = 1;            // Penghitung iterasi (dari 1-10)
```

### Perulangan While

```cpp
while (ke <= 10) {
    // Perulangan akan berjalan selama ke kurang dari atau sama dengan 10
    // Setiap iterasi, input diminta dan diproses
    ke++;              // Penghitung bertambah 1
}
```

### Validasi Input

```cpp
if (data < 0 || data > 10) {
    cout << "Input tidak valid! Silakan masukkan bilangan 0-10" << endl;
    continue;          // Kembali ke awal loop tanpa menambah ke
}
```

### Logika Genap-Ganjil

```cpp
if (data % 2 == 0) {
    jumGenap += data;  // Jika habis dibagi 2, tambah ke genap
} else {
    jumGanjil += data; // Jika tidak, tambah ke ganjil
}
```

**Penjelasan:**
- Operator `%` (modulo) menghasilkan sisa pembagian
- Jika `data % 2 == 0`: bilangan adalah genap
- Jika `data % 2 != 0`: bilangan adalah ganjil

## 🤝 Kontribusi

Kami menyambut kontribusi dari siapa saja! Berikut cara untuk berkontribusi:

### Cara Berkontribusi

1. **Fork repository** ini
2. **Buat branch baru** untuk fitur Anda:
   ```bash
   git checkout -b feature/nama-fitur
   ```
3. **Commit perubahan** Anda:
   ```bash
   git commit -m "Tambah: deskripsi fitur"
   ```
4. **Push ke branch**:
   ```bash
   git push origin feature/nama-fitur
   ```
5. **Buka Pull Request** dengan deskripsi yang jelas

### Ide Kontribusi

- Menambahkan fitur pencarian data tertentu
- Meningkatkan validasi input dengan error handling yang lebih baik
- Menambahkan GUI (Graphical User Interface)
- Menyimpan hasil output ke file
- Menambahkan statistik tambahan (rata-rata, median, dll)

## 👨‍💻 Penulis

**M. Krisna Y. P**
- Program Studi: Teknik Informatika
- Kelas: Malam Karyawan TI C
- Institusi: Unisba Bitar
---
