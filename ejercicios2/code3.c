#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    
    srand( time(NULL));

    int entries[] = { -1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593, 1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int length = sizeof( entries ) / sizeof( int );

    // For the test
    int imps, u = 0;

    // For the code.
    int i, j, n, k;

    // For the tme complex function.
    int asign = 0, aritm = 0, cond = 0;

    printf(" - Code 1: %d\n", length );
    printf("\n| Total \t| Asignaciones \t| Condicionales \t| Aritmeticas.| \n ");
     
    for( u = 0; u < length; u++ ) {
        // Init the test.
        n = entries[u]; 
        imps = 0;

        int A[n][n], C[n][n], B[n][n]; 

        // Fill the array with random values.
        for( i = 0; i < n; i++ ) {
            for( j = 0; j < n; j++ ) {
                A[i][j] = rand() % 10;
                B[i][j] = rand() % 10;            
            }
        }


        // The algoritm.
        for( i = 1; i < n; i++ ){
            for( j = 1; j < n; j++ ) {
                C[i][j] = 0;
                for( k = 1; k < n; k++) {
                    C[i][j] = C[i][j] + A[i][k] * B[k][j];
                }
            }
        }
        

        int total = aritm + asign + cond;
        printf("|%d|\t%d|\t%d|\t|%d con n = %d\n", total, asign, cond, aritm, n );
    }

}