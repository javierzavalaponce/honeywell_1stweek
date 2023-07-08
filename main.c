//Jueves 13 jul
#include "mydefs.h"
estructura_mental mindset;  //struct
//void func (void* input);  //ignore this for the moment
int main(void) {
  
  estructura_mental* ptr; // apuntador a struct
  ptr = &mindset;         // que es esto?
  
  /* --------------------<-aqui */
  
  if(ptr->informacion == (CONOCIMIENTO + VERDAD)) {
     ptr->era_actual = POST_VERDAD;
  } else {
    ptr->informacion = 0xfa; //update info
                             //information == truth ?
  } 
  //ptr->state_machine=func;
  //ptr->state_machine(0);
}
//question: 
//1. if true | false ?
//2. cual deberia ser el valor de la informacion
//para que era_actual sea POST_VERDAD? linea 13
//tips
//mindset.informacion = x;
//ptr->informacion= x;
//void func (void* input)
//{
//  //Do magic stuff
//}

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
//  unsigned int direccion=0; //tamaño de tipo uint?
//  volatile unsigned int tamano=0;
//  tamano =  sizeof(arreglo);
//  tamano =  sizeof(unsigned int);
//  arreglo[0] = '3';
//  *(arreglo+4) = 1; //* lo que tiene adx NOMBRE del arreglo es..
//  *(unsigned int*)(arreglo+4) = 2;
//  direccion = (unsigned int)arreglo; //1. Que hace esta linea
//  return direccion; //2. Que hacer para retornar dos variables o mas?
//}








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