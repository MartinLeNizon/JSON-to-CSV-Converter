//#include <fstream>
#include <stdio.h>
#include <assert.h>
#include <fstream>

int main(int argc, char * argv[]) {

	// assertions
	assert(argc == 4);

	// options treatment
	char * fileName = argv[1];
	char charReplaced = argv[2][0];
	char charInserted = argv[3][0];

	assert(charInserted != charReplaced);

	#ifdef MAP
	printf("file name : %s\n", fileName);
	printf("char replaced : %c\n", charReplaced);
	printf("char inserted : %c\n", charInserted);
	#endif

	FILE * readingFile;
	readingFile = fopen(fileName, "r");

	assert(readingFile != NULL);

	FILE * writingFile;
	writingFile = fopen("output", "w");

	char buffer[256];


	// WRITE CODE HERE



	fclose(readingFile);
	fclose(writingFile);

	return 0;
}

