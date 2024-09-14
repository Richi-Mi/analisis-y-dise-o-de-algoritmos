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
    int i, n, z, polinomio;

    // For the tme complex function.
    int asign = 0, aritm = 0, cond = 0;

    printf(" - Code 1: %d\n", length );
    printf("\n| Total \t| Asignaciones \t| Condicionales \t| Aritmeticas.| \n ");
     
    for( u = 0; u < length; u++ ) {
        // Init the test.
        n = entries[u]; 
        imps = 0;

        int A[n]; 

        polinomio = 0;
        z = 2;
        // Fill the array with random values.
        for( i = 0; i < n; i++ ) 
            A[i] = rand() % 100;

        // The algoritm.
        for( i = 0; i <= n; i++ ){
            polinomio = polinomio*z + A[n-i];

            asign++; // =
            
            aritm++; // n-i
            aritm++; // polinomio*z
            aritm++; // polinomio*z + ..
            
            aritm++; // i++;
            cond++; // i <= n
        }
        cond++; // i <= n == false 
        

        int total = aritm + asign + cond;
        printf("|%d|\t%d|\t%d|\t|%d con n = %d\n", total, asign, cond, aritm, n );
    }

}