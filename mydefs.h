// Macroguard for h file.
#ifndef __DEFINITIONS_H__
#define __DEFINITIONS_H__
#define jab   1
#define cross 2
#define hola  5

typedef struct {
    char numero_de_peleas;
    void (*punch)(void); //aputador a funcion
} boxeador;
#endif