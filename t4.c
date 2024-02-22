#include <stdio.h>
#include <complex.h>
#include <stdlib.h>
#include <string.h>

int check(char *str);

typedef struct matrix
{
    void (*vvod) (struct matrix*, void* data);
    void (*create)(struct matrix*, void* data);
    void (*show)(struct matrix*, void* data);
    void (*trancpon)(struct matrix*, void* data);
    void (*multmat)(struct matrix*, void* data);
    void (*multline)(struct matrix*, void* data);
} matrix;


typedef struct qmatrix
{
    struct 
    void (*opred)(struct qmatrix*, void* data);
} qmatrix;



typedef struct cplx{
    double dest;
    double mnim;

} cplx;

/* Get a type name string for the argument x 
#define TYPE_NAME(X) _Generic((X), \
      int: "int", \
      char: "char", \
      double: "double", \
      default: "default")

*/
/*void create() {
    int n, m;
    scanf(&n, &m);
    pa = (double *) malloc((n*m) * sizeof (double));
    if (pa == NULL) { 
        printf("Не удалось выделить память.");
        exit(EXIT_FAILURE); 
    };
    for (i = 0; i < n; i++)
    {
       for (j = 0; j < m; j++)
       {
        scanf(pa[i,j])
       }
       
    }
    

}*/
void hello() {
    printf("");
}


void vvod() {
    int n, m, i;
    printf("Введите размеры матрицы:");
    scanf("%d%d",&n, &m);
    for (i = 0; i < n*m; i++)
    {
        /* code */
    }
    
}
int main(void) {
    char t[2] = "12";
    printf("Type name: %s\n", check(t));


    return 0;
}


int check(char *str)  {
    int ch = 'i';
    if (strchr(str, ch) != NULL) {
        return 2; }
    else if (str, ".")
    {
        return 1;
    }
    return 0;
}