#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "list.h"

#ifdef WIN32
#define DllExport   __declspec( dllexport )   
#else
#define DllExport
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct{
    char *key;
    char *val;
    int used;
} kvp;


DllExport list *read_data_cfg(char *filename);
int read_option(char *s, list *options);
void option_insert(list *l, char *key, char *val);
char *option_find(list *l, char *key);
DllExport char *option_find_str(list *l, char *key, char *def);
DllExport int option_find_int(list *l, char *key, int def);
int option_find_int_quiet(list *l, char *key, int def);
float option_find_float(list *l, char *key, float def);
float option_find_float_quiet(list *l, char *key, float def);
void option_unused(list *l);

#ifdef __cplusplus
}
#endif

#endif
