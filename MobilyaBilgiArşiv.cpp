#include <iostream>
#include <string>
using namespace std;

// 1) "kumas" yap�s�
struct kumas {
    string ipliktipi;
    double dm2agirlik;   // �rnek: 250.5 gibi bir a��rl�k olabilir
    string dokumatipi;
    string renk;
    int miktar;          // Kaplama i�in gerekli kuma� miktar�, adet/mt cinsinden
};

// 2) "iskelet" yap�s�
struct iskelet {
    string malzeme;      // �rnek: ah�ap, metal, vb.
    string birlestirme;  // �rnek: vida, �ivi, kaynak, vb.
    string tarz;         // �rnek: modern, klasik, vb.
    string boyut;        // �rnek: 200x90x75 cm gibi
    int miktar;          // �skelet �retimi i�in gerekli malzeme miktar�, adet cinsinden
};

// 3) "mobilya" yap�s�
struct mobilya {
    kumas   kaplama;     // kumas yap�s�ndan tan�ml�
    iskelet malzeme;     // iskelet yap�s�ndan tan�ml�
    int     fiyat;       // mobilyan�n fiyat�
    int     adet;        // ka� adet �retildi�i
};

int main() {
    setlocale(LC_ALL, "Turkish"); // T�rk�e karakter deste�i (gerekliyse)

    // 3 adet mobilya i�in dizi tan�ml�yoruz
    mobilya urun[3];
    long long toplamFiyat = 0; // Toplam fiyat� tutmak i�in

    // Veri giri�i
    for (int i = 0; i < 3; i++) {
        cout << "=== " << i+1 << ". �r�n Bilgileri ===\n";

        // Kaplama (kumas)
        cout << "KUMA� B�LG�LER�:\n";
        cout << "Iplik tipi        : ";
        cin >> urun[i].kaplama.ipliktipi;
        cout << "dm2 a��rl�k       : ";
        cin >> urun[i].kaplama.dm2agirlik;
        cout << "Dokuma tipi       : ";
        cin >> urun[i].kaplama.dokumatipi;
        cout << "Renk              : ";
        cin >> urun[i].kaplama.renk;
        cout << "Kuma� miktar�     : ";
        cin >> urun[i].kaplama.miktar;

        // �skelet (malzeme)
        cout << "\nISKELET B�LG�LER�:\n";
        cout << "Malzeme           : ";
        cin >> urun[i].malzeme.malzeme;
        cout << "Birle�tirme y�ntemi: ";
        cin >> urun[i].malzeme.birlestirme;
        cout << "Tarz (modern/klasik vb.): ";
        cin >> urun[i].malzeme.tarz;
        cout << "Boyut bilgisi     : ";
        // Not: Boyutu �rn. 200x90x75 bi�iminde tek sat�rda alabiliriz
        cin >> urun[i].malzeme.boyut;
        cout << "�skelet malzeme miktar� : ";
        cin >> urun[i].malzeme.miktar;

        // Fiyat ve adet
        cout << "\nFiyat (TL)        : ";
        cin >> urun[i].fiyat;
        cout << "Adet              : ";
        cin >> urun[i].adet;

        // Toplam fiyata ekle
        toplamFiyat += urun[i].fiyat;
        cout << "---------------------------------------\n\n";
    }

    // Veri listeleme
    cout << "\n=== T�m �r�nlerin Bilgileri ===\n";
    for (int i = 0; i < 3; i++) {
        cout << "----- " << i+1 << ". �r�n -----" << endl;

        cout << "[KUMA� B�LG�LER�]" << endl;
        cout << "Iplik tipi        : " << urun[i].kaplama.ipliktipi << endl;
        cout << "dm2 a��rl�k       : " << urun[i].kaplama.dm2agirlik << endl;
        cout << "Dokuma tipi       : " << urun[i].kaplama.dokumatipi << endl;
        cout << "Renk              : " << urun[i].kaplama.renk << endl;
        cout << "Kuma� miktar�     : " << urun[i].kaplama.miktar << endl;

        cout << "\n[ISKELET B�LG�LER�]" << endl;
        cout << "Malzeme           : " << urun[i].malzeme.malzeme << endl;
        cout << "Birle�tirme       : " << urun[i].malzeme.birlestirme << endl;
        cout << "Tarz              : " << urun[i].malzeme.tarz << endl;
        cout << "Boyut             : " << urun[i].malzeme.boyut << endl;
        cout << "�skelet miktar�   : " << urun[i].malzeme.miktar << endl;

        cout << "\n[F�YAT / ADET]" << endl;
        cout << "Fiyat (TL)        : " << urun[i].fiyat << endl;
        cout << "Adet              : " << urun[i].adet << endl;
        cout << "---------------------------------------\n\n";
    }

    // 10 �r�n�n fiyatlar�n�n toplam�
    cout << "\n=== 3 �r�n�n Toplam Fiyat� ===\n";
    cout << "Toplam Fiyat (TL) : " << toplamFiyat << endl;

    return 0;
}

