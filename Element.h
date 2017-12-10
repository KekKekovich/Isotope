//
// Created by PACKARD BELL on 07.12.2017.
//

#ifndef UNTITLED7_ELEMENT_H
#define UNTITLED7_ELEMENT_H
#include <iostream>
#include "Isotope.h"
#include <vector>

using namespace std;

class Element: public Isotope {
private:

    vector <Isotope> E;

public:
    Element();

~Element();

    void Add(Isotope X);
    void SetE();
    void GetE();
    void GetMaxSgm1();
    void GetMaxSgm2();
    void GetMaxfm();
};


#endif //UNTITLED7_ELEMENT_H
