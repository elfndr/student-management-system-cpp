#include "StudentManager.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <numeric>

bool OgrenciManager::idVarMi(int id) const {
    for (const auto& o : ogrenciler) {
        if (o.getId() == id)
            return true;
    }
    return false;
}

void OgrenciManager::ogrenciEkle(int id, const std::string& ad, int notu) {
    if (idVarMi(id)) {
        std::cout << "Bu ID zaten mevcut!\n";
        return;
    }
    ogrenciler.emplace_back(id, ad, notu);
    std::cout << "Ogrenci eklendi.\n";
}

void OgrenciManager::ogrenciSil(int id) {
    auto it = std::remove_if(ogrenciler.begin(), ogrenciler.end(),   // mantýksal iteratör döndürür gerçekten silmez
        [id](const Ogrenci& o) { return o.getId() == id; });

    if (it != ogrenciler.end()) {
        ogrenciler.erase(it, ogrenciler.end());
        std::cout << "Ogrenci silindi.\n";
    }
    else {
        std::cout << "Ogrenci bulunamadi.\n";
    }
}

void OgrenciManager::ogrenciAra(int id) const {
    for (const auto& o : ogrenciler) {
        if (o.getId() == id) {
            o.bilgileriYaz();
            return;
        }
    }
    std::cout << "Ogrenci bulunamadi.\n";
}

void OgrenciManager::tumListeyiGoster() const {
    for (const auto& o : ogrenciler)
        o.bilgileriYaz();
}

void OgrenciManager::ortalamaHesapla() const {
    if (ogrenciler.empty()) {
        std::cout << "Liste bos.\n";
        return;
    }

    int toplam = 0;
    for (const auto& o : ogrenciler)
        toplam += o.getSinavNot();

    std::cout << "Sinif ortalamasi: "
        << static_cast<double>(toplam) / ogrenciler.size() // static cast ile bilinçli bir sayý dönüþümü yapýlýr
        << std::endl;
}

void OgrenciManager::notaGoreSirala() {
    std::sort(ogrenciler.begin(), ogrenciler.end(),
        [](const Ogrenci& a, const Ogrenci& b) {
            return a.getSinavNot() > b.getSinavNot();
        });
    std::cout << "Notlara gore siralandi.\n";
}

void OgrenciManager::dosyayaKaydet() const {
    std::ofstream file("students.csv");  //dosyaya veri yaz

    for (const auto& o : ogrenciler) {
        file << o.getId() << ","
            << o.getAd() << ","
            << o.getSinavNot() << "\n";
    }

    file.close();
    std::cout << "Dosyaya kaydedildi.\n";
}

void OgrenciManager::dosyadanYukle() {
    std::ifstream file("students.csv");  // dosyadan veri oku
    if (!file)
        return;

    ogrenciler.clear();

    int id, notu;
    std::string ad;
    char comma;

    while (file >> id >> comma >> ad >> comma >> notu) {
        ogrenciler.emplace_back(id, ad, notu);
    }

    file.close();
}
