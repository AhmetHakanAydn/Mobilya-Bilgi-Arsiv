#include <iostream>
#include <string>
using namespace std;

// 1) "kumas" yapýsý
struct kumas {
    string ipliktipi;
    double dm2agirlik;   // Örnek: 250.5 gibi bir aðýrlýk olabilir
    string dokumatipi;
    string renk;
    int miktar;          // Kaplama için gerekli kumaþ miktarý, adet/mt cinsinden
};

// 2) "iskelet" yapýsý
struct iskelet {
    string malzeme;      // Örnek: ahþap, metal, vb.
    string birlestirme;  // Örnek: vida, çivi, kaynak, vb.
    string tarz;         // Örnek: modern, klasik, vb.
    string boyut;        // Örnek: 200x90x75 cm gibi
    int miktar;          // Ýskelet üretimi için gerekli malzeme miktarý, adet cinsinden
};

// 3) "mobilya" yapýsý
struct mobilya {
    kumas   kaplama;     // kumas yapýsýndan tanýmlý
    iskelet malzeme;     // iskelet yapýsýndan tanýmlý
    int     fiyat;       // mobilyanýn fiyatý
    int     adet;        // kaç adet üretildiði
};

int main() {
    setlocale(LC_ALL, "Turkish"); // Türkçe karakter desteði (gerekliyse)

    // 3 adet mobilya için dizi tanýmlýyoruz
    mobilya urun[3];
    long long toplamFiyat = 0; // Toplam fiyatý tutmak için

    // Veri giriþi
    for (int i = 0; i < 3; i++) {
        cout << "=== " << i+1 << ". Ürün Bilgileri ===\n";

        // Kaplama (kumas)
        cout << "KUMAÞ BÝLGÝLERÝ:\n";
        cout << "Iplik tipi        : ";
        cin >> urun[i].kaplama.ipliktipi;
        cout << "dm2 aðýrlýk       : ";
        cin >> urun[i].kaplama.dm2agirlik;
        cout << "Dokuma tipi       : ";
        cin >> urun[i].kaplama.dokumatipi;
        cout << "Renk              : ";
        cin >> urun[i].kaplama.renk;
        cout << "Kumaþ miktarý     : ";
        cin >> urun[i].kaplama.miktar;

        // Ýskelet (malzeme)
        cout << "\nISKELET BÝLGÝLERÝ:\n";
        cout << "Malzeme           : ";
        cin >> urun[i].malzeme.malzeme;
        cout << "Birleþtirme yöntemi: ";
        cin >> urun[i].malzeme.birlestirme;
        cout << "Tarz (modern/klasik vb.): ";
        cin >> urun[i].malzeme.tarz;
        cout << "Boyut bilgisi     : ";
        // Not: Boyutu örn. 200x90x75 biçiminde tek satýrda alabiliriz
        cin >> urun[i].malzeme.boyut;
        cout << "Ýskelet malzeme miktarý : ";
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
    cout << "\n=== Tüm Ürünlerin Bilgileri ===\n";
    for (int i = 0; i < 3; i++) {
        cout << "----- " << i+1 << ". Ürün -----" << endl;

        cout << "[KUMAÞ BÝLGÝLERÝ]" << endl;
        cout << "Iplik tipi        : " << urun[i].kaplama.ipliktipi << endl;
        cout << "dm2 aðýrlýk       : " << urun[i].kaplama.dm2agirlik << endl;
        cout << "Dokuma tipi       : " << urun[i].kaplama.dokumatipi << endl;
        cout << "Renk              : " << urun[i].kaplama.renk << endl;
        cout << "Kumaþ miktarý     : " << urun[i].kaplama.miktar << endl;

        cout << "\n[ISKELET BÝLGÝLERÝ]" << endl;
        cout << "Malzeme           : " << urun[i].malzeme.malzeme << endl;
        cout << "Birleþtirme       : " << urun[i].malzeme.birlestirme << endl;
        cout << "Tarz              : " << urun[i].malzeme.tarz << endl;
        cout << "Boyut             : " << urun[i].malzeme.boyut << endl;
        cout << "Ýskelet miktarý   : " << urun[i].malzeme.miktar << endl;

        cout << "\n[FÝYAT / ADET]" << endl;
        cout << "Fiyat (TL)        : " << urun[i].fiyat << endl;
        cout << "Adet              : " << urun[i].adet << endl;
        cout << "---------------------------------------\n\n";
    }

    // 10 ürünün fiyatlarýnýn toplamý
    cout << "\n=== 3 Ürünün Toplam Fiyatý ===\n";
    cout << "Toplam Fiyat (TL) : " << toplamFiyat << endl;

    return 0;
}

