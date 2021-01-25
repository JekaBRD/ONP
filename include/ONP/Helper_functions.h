#ifndef Helper_functions_h
#define Helper_functions_h
#include <iostream>
#include <string>
#include <stack>

using namespace std;

/*
 Funkcja wstawia operand między dwoma górnymi elementami stosu i zapisuje je w jeden element stosu
 @param stos stos na ktorym wykonyjemy zamiane
 @param in kolejny element wyrazu
 */
void connection(stack <string> & stos, char in);

/*
 Funkcja wypisuje wszystkie elementy stosu
  @param stos stos na ktorym wykonyjemy zamiane
 */
void write_stack(stack <char> & stos);

/*
 Funkcja sprawdza czy element jest operandem
 @param s symbol dla sprawdzania
 @return  1 jesli jest operandem 0 jesli nie jest
 */
int is_operand(char s);

/*
 Funkcja sprawdza czy element jest operatorem
 @param s symbol dla sprawdzania
 @return  1 jesli jest operatorem 0 jesli nie jest
 */
int is_operator(char s);
/*
 Funkcja sprawdza w jakiej postaci jest podane wyrażenie
 @param str wyrazenie 
 @return  0 jezeli wyrazenie jest w postaci INF 0 jezeli ONP
 */
int Switch(string str);

/*
 Funkcja usuwa wszystkie znaki, które nie mogą być używane w wyrażeniu
 @param str linijka z ktorej usuwamy znaki
 @return  wartosc przekazanego stringu z usunientymi niepotrzebnymi znakami
 */
string clean_string(string str);

#endif
