/*---------------------------------------------
 * Dato de Entrada: radio, altura (double)
 * Dato de Salida: aSupCilindrica, aLateral,
 *                 aTotal, volumen  (double)
 ---------------------------------------------*/

#include "CCilindro.h"
#include <iomanip>

int main()
{ tnumero r, h;

//---- creando el primer objeto
  cout << "Objeto cilindro 1\n";
  cout << "Radio : "; cin >> r;
  cout << "Altura : "; cin >> h;
  CCilindro   cil1(r,h);
  cout << "El area de la superficie cilindrica es : " << cil1.areaSuperficieCilindra() << "\n";
  cout << "El area lateral : " << cil1.aLateral() << "\n";
  cout << "El area total   : " << cil1.aTotal() << "\n";
  cout << "El volumen      : "  << cil1.volumen() << "\n";
  cout << "\n";
  //-------------------------------------------------------
  //-- ahora definimos un puntero al objeto cil1
  CCilindro *pCil1 = &cil1;
  //--- utilizando el puntero vamos a modificar el estado de objeto cil1
  //--- el valor del radio va ser 100 unidades mas
  //--- el valor de la altura va ser 50 unidades mas
  pCil1->setRadio(pCil1->getRadio() + 100);
  pCil1->setAltura((*pCil1).getAltura() + 50);
  cout << "\nManipulando el objeto a traves del puntero\n";
  cout << "El area de la superficie cilindrica es : " << pCil1->areaSuperficieCilindra() << "\n";
  cout << "El area lateral : " << pCil1->aLateral() << "\n";
  cout << "El area total   : "  << pCil1->aTotal() << "\n";
  cout << "El volumen      : "  << fixed << setprecision(4) << (*pCil1).volumen() << "\n";

 //--------------------------------------------------------------------
 //--- ahora creamos un segundo objeto, pero va a ser dinamico
  cout << "\nSegundo objeto ==> cil2\n";
  CCilindro    *pCil2=nullptr;
  cout << "Radio : "; cin >> r;
  cout << "Altura : "; cin >> h;
  pCil2 = new CCilindro(r,h);

  cout << "El area de la superficie cilindrica  es : " << pCil2->areaSuperficieCilindra() << "\n";
  cout << "El area lateral : " << (*pCil2).aLateral() << "\n";
  cout << "El area total   : "  << pCil2->aTotal() << "\n";
  cout << "El volumen      : " << pCil2->volumen() << "\n";
  delete pCil2;
  pCil2 = nullptr;
  return 0;
}
