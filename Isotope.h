//
// Created by PACKARD BELL on 07.12.2017.
//

#ifndef UNTITLED7_ISOTOPE_H
#define UNTITLED7_ISOTOPE_H
#include <iostream>

using namespace std;

class Isotope {
public:
    string name;
    double a;
    int A;
    int N;
    double fm;
    double Sgm1;
    double Sgm2;

public:
    Isotope ();
    Isotope (string name, double a, int A, int N, double fm, double Sgm1, double Sgm2 );
    ~Isotope();

    void GetIso();
  // void SetIso();
};


#endif //UNTITLED7_ISOTOPE_H
