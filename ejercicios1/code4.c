#include <stdio.h>

void main() {
    int entries[] = { -1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593, 1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int i, n, k, j, u = 0;
    long int imps;
    int length = sizeof( entries ) / sizeof( int );
    printf(" - Code 4: %d\n", length );
    for( u = 0; u < length; u++ ) {
        n = entries[u]; 
        imps = 0;

        i = n;
        while( i >= 0 ) {
            for( j = n; i < j; i-= 2) {
                j = j /= 2;
                imps++;
            }
        }

        printf("for %d entries, are %ld imps \n", n, imps );
    }
}