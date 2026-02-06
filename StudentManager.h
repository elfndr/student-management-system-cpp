#pragma once
#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include "Student.h"

class OgrenciManager {
private:
    std::vector<Ogrenci> ogrenciler;

    bool idVarMi(int id) const;

public:
    void ogrenciEkle(int id, const std::string& ad, int notu);
    void ogrenciSil(int id);
    void ogrenciAra(int id) const;
    void tumListeyiGoster() const;
    void ortalamaHesapla() const;
    void notaGoreSirala();
    void dosyayaKaydet() const;
    void dosyadanYukle();
};

#endif
