#include <stdio.h>
//#include <complex.h>

/* Get a type name string for the argument x */
#define TYPE_NAME(X) _Generic((X), \
      int: "int", \
      char: "char", \
      double: "double", \
      default: "unknown")

int main(void) {
    char t[2] = "12";
    printf("Type name   : %s\n", TYPE_NAME(t));
    return 0;
}