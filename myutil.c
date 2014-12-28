#include "lesko.h"



void error_exit( char* message );
void* my_malloc( int memSize, char* file, int lineNum );
void my_free( void* ptr, char* file, int lineNum );
void my_fclose( FILE* ptr, char* file, int lineNum );
int cmpChar(void *c1, void *c2);


void* my_malloc( int memSize, char* file, int lineNum )
{
	void* test = malloc( memSize );

	if(test == NULL)
	{
		char number[1024];
		char message[1024];

		sprintf(number, "%d", lineNum);

		strcpy(message, "allocation in ");
		strcat(message, file);
		strcat(message, " at line number ");
		strcat(message, number);
		strcat(message, " has failed.");
		error_exit(message);
	}

	return test;
}

void my_free( void* ptr, char* file, int lineNum )
{
	free(ptr);
	ptr = NULL;
}
void my_fclose( FILE* ptr, char* file, int lineNum )
{
	fclose( ptr );
	ptr = NULL;
}
void error_exit( char* message )
{
	printf("\n");
	printf(ERROR_SCR"error:\n\t%s"RESET_FORMAT, message);
	exit(0);
}
int cmpChar(void *c1, void *c2)
{
	char char1 = *(char*)c1;
	char char2 = *(char*)c2;

	return char2 - char1;

}

