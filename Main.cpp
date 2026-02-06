#include <iostream>
#include "StudentManager.h"

void menu() {
    std::cout << "\n===== MENU =====\n";
    std::cout << "1. Ogrenci Ekle\n";
    std::cout << "2. Tum Listeyi Goster\n";
    std::cout << "3. Ogrenci Sil\n";
    std::cout << "4. Ogrenci Ara\n";
    std::cout << "5. Ortalama Hesapla\n";
    std::cout << "6. Nota Gore Sirala\n";
    std::cout << "7. Kaydet\n";
    std::cout << "8. Cikis\n";
}

int main() {

    OgrenciManager manager;
    manager.dosyadanYukle();

    int secim;

    do {
        menu();
        std::cout << "Secim: ";
        std::cin >> secim;

        int id, notu;
        std::string ad;

        switch (secim) {
        case 1:
            std::cout << "ID: ";
            std::cin >> id;
            std::cout << "Ad: ";
            std::cin >> ad;
            std::cout << "Not: ";
            std::cin >> notu;
            manager.ogrenciEkle(id, ad, notu);
            break;

        case 2:
            manager.tumListeyiGoster();
            break;

        case 3:
            std::cout << "Silinecek ID: ";
            std::cin >> id;
            manager.ogrenciSil(id);
            break;

        case 4:
            std::cout << "Aranacak ID: ";
            std::cin >> id;
            manager.ogrenciAra(id);
            break;

        case 5:
            manager.ortalamaHesapla();
            break;

        case 6:
            manager.notaGoreSirala();
            break;

        case 7:
            manager.dosyayaKaydet();
            break;

        case 8:
            manager.dosyayaKaydet();
            std::cout << "Program sonlandi.\n";
            break;

        default:
            std::cout << "Hatali secim.\n";
        }

    } while (secim != 8);

    return 0;
}
