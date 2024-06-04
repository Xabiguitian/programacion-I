#include <stdio.h>

int main () {
    int numpares=2;
    int numimpares=1;
    int totalpares=0;
    int totalimpares=0;

    while (numpares <= 100) {
        totalpares = totalpares + (numpares);
        numpares = numpares + 2;

        totalimpares = totalimpares + (numimpares);
        numimpares = numimpares + 2;
    }

    printf("Suma número pares: %d\n", totalpares);
    printf("Suma número impares: %d", totalimpares);

    return 0;
}