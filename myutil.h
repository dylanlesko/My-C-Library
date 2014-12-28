#ifndef MYUTIL_H
#define MYUTIL_H

void error_exit( char* message );
void* my_malloc( int memSize, char* file, int lineNum );
void my_free( void* ptr, char* file, int lineNum );
void my_fclose( FILE* ptr, char* file, int lineNum );
int cmpChar(void *c1, void *c2);

#endif