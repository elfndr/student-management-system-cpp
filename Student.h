#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

//int namespace içinde deðil , c++ çekirdeðinin parçasý herhangi bir namespace'e ait deðil

class Ogrenci {
private:
    int id;
    std::string ad;
    int sinavNot;

public:
    Ogrenci(int id, const std::string& ad, int sinavNot);

    int getId() const;
    std::string getAd() const;
    int getSinavNot() const;

    void bilgileriYaz() const;
};

#endif
