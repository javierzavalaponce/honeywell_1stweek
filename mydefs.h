// Macroguard for h file.
#ifndef __DEFINITIONS_H__
#define __DEFINITIONS_H__
#define tiempo          1
#define sabiduria       2
#define group_consensus 3
#define fake_news       4
#define CONOCIMIENTO (sabiduria & tiempo)
#define VERDAD       group_consensus
#define POST_VERDAD  fake_news

typedef struct {
    /* Add here more attributes; */
    char era_actual;
    char informacion;
    /* Add here more methods */
    void (*state_machine)(void*);
} estructura_mental;

#endif