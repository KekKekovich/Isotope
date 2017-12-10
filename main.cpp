#include <iostream>
#include "Isotope.h"
#include "Element.h"

using namespace std;

int main() {
    Isotope Eu151("Eu151", 150.92, 151, 63, 0.478, 4.72, 9430 );
    Isotope Eu153("Eu153", 152.92, 153, 63, 0.522, 8.51, 446 );


    Eu151.GetIso();
    Eu153.GetIso();
    Element Europium;
    Europium.Add(Eu151);
    Europium.Add(Eu153);
    Europium.GetMaxSgm1();
    Europium.GetMaxSgm2();
    Europium.GetMaxfm();

    return 0;
}