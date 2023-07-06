//git clone https://github.com/javierzavalaponce/honeywell_1stweek.git
//0. mision: Cual es el tamaño del arreglo y su direccion ram?
//arreglo consume rom?
char arreglo[] = {
"Everybody knows that the boat is leaking Everybody knows that the captain lied"
};

#pragma optimize=none
int main()
{
  unsigned int direccion=0; //tamaño de tipo uint?
  volatile unsigned int tamano=0;
  tamano =  sizeof(arreglo);
  tamano =  sizeof(unsigned int);
  arreglo[0] = '3';
  *(arreglo+4) = 1; //* lo que tiene adx NOMBRE del arreglo es..
  *(unsigned int*)(arreglo+4) = 2;
  direccion = (unsigned int)arreglo; //1. Que hace esta linea
  return direccion; //2. Que hacer para retornar dos variables o mas?
}
//*hint: cast








//unsigned int dec(unsigned int input)
//{
//  input --;
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
