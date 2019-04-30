#include "Invertion.h"
#include "libTables.h"
#include "libFiles.h"
#include <iostream>
using namespace std;


int amountOfInvertion(int * mainTab, int Tsize)
{
	int *tmpArray = createTable(Tsize);
	return mergeSort(mainTab, tmpArray, 0, Tsize - 1);
}


int mergeSort(int * mainTab, int * tmpArray, int leftEdge, int rightEdge)
{

	int mid{}, inv_count{};

	if (rightEdge > leftEdge)
	{
		mid = (rightEdge + leftEdge) / 2;

		inv_count = mergeSort(mainTab, tmpArray, leftEdge, mid);
		inv_count += mergeSort(mainTab, tmpArray, mid + 1, rightEdge);

		inv_count += merge(mainTab, tmpArray, leftEdge, mid + 1, rightEdge);
	}


	return inv_count;

}

int merge(int * mainTab, int * tmpArray, int leftEdge, int midEdge, int rightEdge)
{
	int i{}, j{}, k{};
	int inv_count{};

	i = leftEdge;
	j = midEdge;
	k = leftEdge;

	while ((i <= midEdge - 1) && (j <= rightEdge))
	{
		if (mainTab[i] <= mainTab[j]) {
			tmpArray[k++] = mainTab[i++];
		}
		else {
			tmpArray[k++] = mainTab[j++];

			inv_count += midEdge - i;
		}
	}

	while (i <= midEdge - 1)
		tmpArray[k++] = mainTab[i++];

	while (j <= rightEdge)
		tmpArray[k++] = mainTab[j++];

	for (i = leftEdge; i <= rightEdge; i++) {
		mainTab[i] = tmpArray[i];
	}

	return inv_count;
}

void computeAndSaveInvertionSetsToFIle(fstream &inFile, fstream &outFIle)
{
	int amountOfDataSets{};
	inFile >> amountOfDataSets;

	int amountOfElem{}, inv_count{};

	for (int i = 0; i < amountOfDataSets; i++)
	{
		inFile >> amountOfElem;
		int *mainTab = createTable(amountOfElem);

		for (int j = 0; j < amountOfElem; j++)
		{
			inFile >> mainTab[j];
		}

		inv_count = amountOfInvertion(mainTab, amountOfElem);

		outFIle << inv_count << endl;

		delete[] mainTab;
	}


}
