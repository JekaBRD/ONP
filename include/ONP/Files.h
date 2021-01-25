#ifndef Files_h
#define Files_h
#include <iostream>
#include <fstream>

/*
 Funkcja otwiera plik do odczytu
 @param file odwolanie do strumieniu wejscia
*/
void open_to_read(std::ifstream& file);

/*
 Funkcja otwiera plik do zapisu
 @param file odwolanie do strumieniu wyjscia
*/
void open_to_write(std::ofstream& file);

/*
 Funkcja uzupełnia tablice jednowymiarową z pliku
 @param array tablica dla zapisywania wartosci z pliku
 @param size rozmiar tablicy
 @param file odwolanie do strumieniu wejscia
 */
void fill_array_from_file(int *& array, int size, std::ifstream& file);

/*
 Funkcja zapisuje tablice jednowymiarową do pliku
 @param array tablica dla zapisywania wartosci z pliku
 @param size rozmiar tablicy
 @param file odwolanie do strumieniu wyjscia
 */
void write_array_to_file(int * array, int size, std::ofstream& file);
#endif
