#include <stdio.h>

void main() {

    int entries[] = { -1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593, 1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int i, n, k, j, u = 0;

    long int imps;

    int length = sizeof( entries ) / sizeof( int );

    printf(" - Code 5: %d\n", length );

    for( u = 0; u < length; u++ ) {
        n = entries[u]; 
        imps = 0;
        for( i = 1; i < 4*n; i*= 2 ) {
            for( j = i; j < 5*n; j+= 3 ) {
                imps++;
            }
        }
        printf("for %d entries, are %ld imps \n", n, imps );
    }
}
