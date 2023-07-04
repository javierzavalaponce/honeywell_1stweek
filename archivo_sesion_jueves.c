#include <string.h>
char arreglo[] = {
"Everybody knows that the boat is leaking Everybody knows that the captain lied"
};

#pragma optimize=none
int main()
{
  unsigned int resultado=0;
  resultado =  sizeof(arreglo);
  resultado = (unsigned int)arreglo;
  return resultado;
}
