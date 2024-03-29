
#ifndef DATATYPES_H_

#include <stdlib.h>

typedef void * TYPE;
typedef int BOOL;
typedef char * STRING;

TYPE int_create(int i);
TYPE float_create(float f);
TYPE double_create(int d);
TYPE char_create(char c);
TYPE string_create(STRING s);

#define DATATYPES_H_



#endif /* DATATYPES_H_ */
