#include <stdio.h>
#include <complex.h>



typedef struct qmatrix
{
    void (*trancpon)(struct qmatrix*, void* data);
    void (*multmat)(struct qmatrix*, void* data);
    void (*multline)(struct qmatrix*, void* data);
    void (*opred)(struct qmatrix*, void* data);
} qmatrix;


int main(void) {
    return 0;
}