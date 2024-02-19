#include <stdio.h>
#include <complex.h>
#include  <stdlib.h>


typedef struct qmatrix
{
    void (*create)(struct qmatrix*, void* data);
    void (*show)(struct qmatrix*, void* data);
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
      default: "default)


void create() {
    int n;
    scanf(&n);
    pa = (double *) malloc((n*n) * sizeof (double));
    if (pa == NULL) { /*Проверка успешности выделения памяти.*/
        printf("Не удалось выделить память.");
        exit(EXIT_FAILURE); /*Аварийное завершение программы.*/
    };
    for (i = 0; i < n; i++)
    {
       for (j = 0; j < n; j++)
       {
        scanf(pa[i,j])
       }
       
    }
    

}


int main(void) {
    printf("Type name: %s\n", TYPE_NAME(4));
    return 0;
}