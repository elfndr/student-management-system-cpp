#include "Student.h"
#include <iostream>

Ogrenci::Ogrenci(int id, const std::string& ad, int sinavNot)  : id(id), ad(ad), sinavNot(sinavNot) {
}

int Ogrenci::getId() const {
    return id;
}

std::string Ogrenci::getAd() const {
    return ad;
}

int Ogrenci::getSinavNot() const {
    return sinavNot;
}

void Ogrenci::bilgileriYaz() const {
    std::cout << "ID: " << id
        << "  Ad: " << ad
        << "  Not: " << sinavNot
        << std::endl;
}
