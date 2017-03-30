#ifndef PARSER_H
#define PARSER_H
#include "network.h"

#ifdef WIN32
#define DllExport   __declspec( dllexport )   
#else
#define DllExport
#endif

#ifdef __cplusplus
extern "C" {
#endif

DllExport network parse_network_cfg(char *filename);
DllExport void save_network(network net, char *filename);
DllExport void save_weights(network net, char *filename);
DllExport void save_weights_upto(network net, char *filename, int cutoff);
DllExport void save_weights_double(network net, char *filename);
DllExport void load_weights(network *net, char *filename);
DllExport void load_weights_upto(network *net, char *filename, int cutoff);

#ifdef __cplusplus
}
#endif

#endif
