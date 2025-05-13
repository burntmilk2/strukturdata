# 📚 Penjelasan Sorting dan Hashing

## 🔢 Sorting

**Sorting** adalah proses menyusun data dalam urutan tertentu, biasanya dalam urutan **menaik (ascending)** atau **menurun (descending)**. Sorting digunakan untuk mempermudah pencarian, pengurutan, dan penyajian data.

### Contoh:

Menyusun angka `5, 3, 8, 1` secara menaik akan menghasilkan:

```
1, 3, 5, 8
```

### Jenis-jenis Algoritma Sorting:

* **Bubble Sort**
* **Selection Sort**
* **Insertion Sort**
* **Merge Sort**
* **Quick Sort**
* **Heap Sort**

### Kegunaan:

* Mempermudah pencarian data (misalnya dengan binary search)
* Menyederhanakan analisis data
* Mengoptimalkan struktur data tertentu

---

## 🔐 Hashing

**Hashing** adalah proses mengubah data (biasanya kunci) menjadi indeks dalam sebuah tabel yang disebut **hash table** menggunakan fungsi tertentu yang disebut **hash function**.

### Konsep Dasar:

* Hash function: Fungsi yang mengubah input (seperti string atau angka) menjadi angka indeks.
* Hash table: Struktur data yang menyimpan data berdasarkan hasil hash.

### Contoh:

Misalnya kita memiliki string `"apel"` dan fungsi hash menghasilkan indeks `2`, maka `"apel"` akan disimpan di indeks ke-2 dari hash table.

### Kelebihan Hashing:

* Akses data sangat cepat (rata-rata O(1) waktu akses)
* Cocok untuk implementasi struktur data seperti:

  * HashMap
  * HashSet
  * Dictionary

### Tantangan:

* **Collision**: Ketika dua data berbeda memiliki hash yang sama. Ini bisa diatasi dengan teknik seperti:

  * Chaining
  * Open Addressing

---

## 📌 Perbandingan Singkat

| Aspek        | Sorting                | Hashing                          |
| ------------ | ---------------------- | -------------------------------- |
| Tujuan       | Menyusun data          | Menyimpan & mengakses data cepat |
| Contoh       | Quick Sort, Merge Sort | Hash Table, HashMap              |
| Kompleksitas | O(n log n) rata-rata   | O(1) akses rata-rata             |
| Kelemahan    | Butuh waktu lebih lama | Rentan terhadap collision        |
