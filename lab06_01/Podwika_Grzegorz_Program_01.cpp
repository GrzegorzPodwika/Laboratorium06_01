#include <iostream>
#include "libFiles.h"
#include "Invertion.h"
using namespace std;


int main() {

	fstream inFile = createInputFile();
	fstream outFile = createOutputFile();

	computeAndSaveInvertionSetsToFIle(inFile, outFile);

	inFile.close();
	outFile.close();
	getchar();
}



