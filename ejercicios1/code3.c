#include <stdio.h>

void main() {
    int entries[] = { -1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593, 1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int i, n, k, j, u = 0;

    long int imps;

    int length = sizeof( entries ) / sizeof( int );

    printf(" - Code 3: %d\n", length );
    for( u = 0; u < length; u++ ) {
        n = entries[u]; 
        imps = 0;
        for( i = 0; i < n*5; i+= 2 ) {
            for( j = 0; j < 2*n; j++ ) {
                for( k = j; k < n; k++ ) {
                    imps++;
                }
            }
        }
        printf("for %d entries, are %ld imps \n", n, imps );
    }
}
