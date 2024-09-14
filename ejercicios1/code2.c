#include <stdio.h>

void main() {

    int entries[] = { -1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593, 1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int i, imps, n, k, j, u = 0;

    int length = sizeof( entries ) / sizeof( int );

    printf(" - Code 2: %d\n", length );

    for( u = 0; u < length; u++ ) {
        n = entries[u]; 
        imps = 0;

        for( j = n; j > 1; j /= 2 ){
            if( j < (n/2) ) {
                for( i = 0; i < n; i += 2) {
                    imps++;
                }
            }
        }

        printf("for %d entries, are %d imps \n", n, imps );
    }

}
