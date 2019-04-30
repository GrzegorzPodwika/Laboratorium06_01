#ifndef LIBTABLES_H
#define LIBTABLES_H

#include <iostream>

/*
Funkcja tworzaca dynamiczna tablice jednowymiarowa
@param	Tsize rozmiar tablicy, jaka chcemy utworzyc
@return	adres utworzonej tablicy
*/
int* createTable(int Tsize);

/*
Funkcja pokazujaca na ekranie zawartosc przeslanej tablicy
@param	tab adres zerowego elementu tablicy jendowymiarowej dynamicznej
@param	Tsize rozmiar przesy�anej tablicy
*/
void showTable(int *tab, int Tsize);

/*
Funkcja wype�niaj�ca przes�ana tablice lodowymi wartosciami
@param	tab adres zerowego elementu tablicy jendowymiarowej dynamicznej
@param	Tsize rozmiar przesylanej tablicy
*/
void fillTableRandomNumbers(int *tab, int Tsize);

/*
Funkcja sortujaca niemalejaco przeslana tablice
@param	tab adres zerowego elementu tablicy jednowymiarowej dynamicznej
@param	Tsize rozmiar przesylanej tablicy
*/
void sortTable(int *tab, int Tsize);

#endif