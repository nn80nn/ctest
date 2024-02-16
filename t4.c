#include <stdio.h>
#include <complex.h>



typedef struct qmatrix
{
    void (*trancpon)(struct qmatrix*, void* data);
    void (*multmat)(struct qmatrix*, void* data);
    void (*multline)(struct qmatrix*, void* data);
    void (*opred)(struct qmatrix*, void* data);
} qmatrix;



typedef struct cplx{
    double dest;
    double mnim;

} cplx;

/* Get a type name string for the argument x */
#define TYPE_NAME(X) _Generic((X), \
      int: "int", \
      char: "char", \
      double: "double", \
      default: "complex")


int main(void) {
    printf("Type name: %s\n", TYPE_NAME(4));
    return 0;
}