#ifndef INVERTION_H
#define INVERTION_H

#include <fstream>

/*
Funkcja obliczajaca liczbe inwersji za pomoca funkcji pomocniczych mergeSort oraz merge
@param mainTab glowna tablica z ciagiem liczb do sprawdzenia
@param Tsize liczba elementow w tablicy, rozmiar
@return liczba inwersji w ciagu liczb
*/
int amountOfInvertion(int *mainTab, int Tsize);

/*
Funkcja rekurencyjna wykorzystujaca (dziel i zwyciezaj) oraz sortowanie przed scalanie
w celu policzenia liczby inwersji
@param mainTab glowna tablica z ciagiem liczb do sprawdzenia
@param Tsize liczba elementow w tablicy, rozmiar
@param leftEdge lewa "krawedz" podzielonej tablicy
@param rightEdge prawa "krawedz" podzielonej tablicy
@return liczba inwersji wysylana do funkcji amountOfInvertion()
*/
int mergeSort(int *mainTab, int *tmpArray, int leftEdge, int rightEdge);

/*
Funkcja scalajaca najmniejsze posortowane ciagi w jedno oraz liczaca przy okazji liczbe inwersji
@param mainTab glowna tablica z ciagiem liczb do sprawdzenia
@param Tsize liczba elementow w tablicy, rozmiar
@param leftEdge lewa "krawedz" subtablicy
@param midEfge srodek subtablicy
@param rightEdge prawa "krawedz" subtablicy
@return liczba inwersji subtablicy 
*/
int merge(int *mainTab, int *tmpArray, int leftEdge, int midEdge, int rightEdge);

/*
Funkcja obliczaca inwersje ciagow z pliku w ilosci liczby zestawow oraz zapisujaca
do pliku wynikowego
@param inFIle wczytywany plik z danymi
@param outFile wynikowy plik z inwersjami
*/
void computeAndSaveInvertionSetsToFIle(std::fstream &inFile, std::fstream &outFIle);

#endif // !INVERTION_H

