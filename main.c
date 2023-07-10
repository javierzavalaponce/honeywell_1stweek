//Jueves 13 jul
#include "mydefs.h"

//Jueves 6 jul
//git clone https://github.com/javierzavalaponce/honeywell_1stweek.git
//0. mision: Cual es el tamaño del arreglo y su direccion ram?
//arreglo consume rom?
//char arreglo[] = {
//"Everybody knows that the boat is leaking Everybody knows that the captain lied"
//};
//#pragma optimize=none
//int main()
//{
//  unsigned int direccion=0;   
//  //Objetivo: siguiente linea
//  //nota 0x31 = '1'  
//  *(unsigned int*)(arreglo) = 0x31323334; 
//  //
//  direccion = (unsigned int)arreglo;
//  return direccion; //2. Que hacer para retornar dos variables o mas?
//}



boxeador julio_cesar_chavez;
boxeador juan_manuel_marquez;

void cross_derecha(void);
void gancho_al_higado(void);

int main(void) {
  boxeador* direccion;             // apuntador a struct
  direccion = &julio_cesar_chavez; // puntero toma la direccion de julio_cesar_chavez
  
  julio_cesar_chavez.numero_de_peleas  = 150; // punto
  direccion->numero_de_peleas          = 100; // flecha
  //Cual es el numero de peleas de julio cesar?..
  julio_cesar_chavez.punch = gancho_al_higado; //nombre de la funcion tambien es su direccion
  juan_manuel_marquez.punch = cross_derecha;

  julio_cesar_chavez.punch(); //que funcion se va a ejecutar?
  juan_manuel_marquez.punch();
}

void cross_derecha(void)
{
  //Do smthing..
  static unsigned char var = 0;
  var++;
}

void gancho_al_higado(void)
{
  //Do smthing..
  static unsigned char j = 0;
  j++;
}




//unsigned int dec(unsigned int input)
//{
//  input--;
//  return input;
//}
//unsigned int func(unsigned int input)
//{
//  input++; // detener aqui
//  dec(input);
//  return input;
//}
//
//#pragma optimize=none
//int main()
//{
//  unsigned int res=93;
//  return func(2);
//}
//