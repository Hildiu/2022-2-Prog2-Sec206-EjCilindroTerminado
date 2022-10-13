//
// Created by Profesor08 on 11/10/2022.
//

#ifndef CILINDRO_CCILINDRO_H
#define CILINDRO_CCILINDRO_H

#include <iostream>
using namespace std;

using tnumero = double;
const double PI=3.141516;

class CCilindro {
private:
    tnumero radio;
    tnumero altura;
public:
    CCilindro(){}
    CCilindro(tnumero _radio, tnumero _altura): radio(_radio), altura(_altura) {}
    virtual ~CCilindro(){ cout << "me estoy destruyendo...";}
    tnumero areaSuperficieCilindra();
    tnumero aLateral();
    tnumero aTotal();
    tnumero volumen();
    //------------metodos de acceso----
    void setRadio(tnumero _radio){radio=_radio;}
    tnumero getRadio(){return radio;}

    void setAltura(tnumero _altura){ altura = _altura;}
    tnumero getAltura() {return altura;}
};


#endif //CILINDRO_CCILINDRO_H
