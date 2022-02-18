#include <iostream>
#include <fstream>
#include "DNAStrand.h"

using namespace std;

int main () {
	ifstream inStream;
	string id, dna;
	DNAStrand::FLAG readFlag = DNAStrand::LEGAL;

	inStream.open ("dnastrands.txt");
	if (inStream.fail ()) {
		cout << "Error opening file" << endl;
		exit (EXIT_FAILURE);
	}

	while (inStream >> id >> dna) {
		cout << id << " " << dna << endl;
	}

	return EXIT_SUCCESS;
}