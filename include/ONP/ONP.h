#ifndef INF2ONP_h
#define INF2ONP_h
#include <fstream>
#include <map>
#include "Helper_functions.h"

using namespace std;

/*
 Funkcja przekształca wyrażenie z notacji infiksowej do ONP
 @param expr wyrażenie (podane jako "string")
 */
void INF2ONP (string expr);

/*
 Funkcja przekształca wyrażenie z ONP do notacji infiksowej
  @param expr wyrażenie (podane jako "string")
 */
void ONP2INF (string expr);

#endif 
