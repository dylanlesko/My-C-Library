#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <errno.h>
#include <unistd.h>
#include <pthread.h>

//#include "myutil.h"
//#include "btree.h"

typedef enum { FALSE, TRUE} boolean;



//bluesock.org/~willg/dev/ansi.html
#define RESET_FORMAT "\e[m"
#define MAKE_GREEN "\e[32m"
#define MAKE_RED "\e[31m"
#define MAKE_BLACK "\e[30m"
#define MAKE_YELLOW "\e[33m"
#define MAKE_BLUE "\e[34m"
#define MAKE_PURPLE "\e[35m"
#define MAKE_CYAN "\e[36m"
#define MAKE_WHITE "\e[37m"
#define MAKE_UNDERLINE "\e[4m"
#define CLR_SCR "\e[2J"
#define ERROR_SCR "\e[37;1;41m"


#define MALLOC(ptr) my_malloc( ptr, __FILE__, __LINE__ )
#define FREE(ptr) my_free( ptr, __FILE__, __LINE__ )
#define FCLOSE(ptr) my_fclose( ptr, __FILE__, __LINE__ )

#endif