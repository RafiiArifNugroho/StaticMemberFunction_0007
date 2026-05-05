#include <iostream>
#include <string>
using namespace std;

class Produk
{
private:
    int id_produk;
    string nama_produk;

public:
    // 1. Constructor default
    Produk()
    {
        id_produk = 0;
        nama_produk = "Tidak diketahui";
    }

    // 2. Constructor dengan id saja
    Produk(int id)
    {
        id_produk = id;
        nama_produk = "Tidak diketahui";
    }

    // 3. Constructor dengan nama saja
    Produk(string nama)
    {
        id_produk = 0;
        nama_produk = nama;
    }

    // 4. Constructor lengkap
    Produk(int id, string nama)
    {
        id_produk = id;
        nama_produk = nama;
    }

    // Method tampilkan data
    void tampilkan()
    {
        cout << "ID Produk   : " << id_produk << endl;
        cout << "Nama Produk : " << nama_produk << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    cout << "=== Daftar Inventaris Toko ===\n\n";

    // Membuat objek dengan berbagai constructor
    Produk p1;                    // default
    Produk p2(101);               // id saja
    Produk p3("Pensil");          // nama saja
    Produk p4(102, "Buku Tulis"); // lengkap

    // Menampilkan data
    p1.tampilkan();
    p2.tampilkan();
    p3.tampilkan();
    p4.tampilkan();

    return 0;
}