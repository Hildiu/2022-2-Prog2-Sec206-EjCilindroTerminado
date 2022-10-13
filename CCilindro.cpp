//
// Created by Profesor08 on 11/10/2022.
//

#include "CCilindro.h"

tnumero CCilindro::areaSuperficieCilindra()
{
  return 2*PI*radio*radio;
}

tnumero CCilindro::aLateral()
{
  return 2*PI*radio*altura;
}

tnumero CCilindro::aTotal()
{
  return areaSuperficieCilindra() + aLateral();
}

tnumero CCilindro::volumen()
{
  return PI*radio*radio*altura;
}
