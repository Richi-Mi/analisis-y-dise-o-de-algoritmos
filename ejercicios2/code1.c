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
    int i, temp, n, j;

    // For the tme complex function.
    int asignacion = 0, aritmeticas = 0, condicionales = 0;

    printf(" - Code 1: %d\n", length );
    printf("\n| Total \t| Asignaciones \t| Condicionales \t| Aritmeticas.| \n ");
     
    for( u = 0; u < length; u++ ) {
        // Init the test.
        n = entries[u]; 
        imps = 0;

        int A[n];
        // Fill the array with random values.
        for( i = 0; i < n; i++ ) 
            A[i] = rand() % 100;

        // The algoritm.
        for( i = 1; i < n; i++){
            
            for( j = n; j > 1; j/=2 ) {
                temp = A[j];
                
                asignacion++;
                
                A[j] = A[j+1];
                
                asignacion++;
                aritmeticas++;
                
                A[j+1] = temp;

                asignacion++;
                aritmeticas++;

                aritmeticas++; // por j/=2
                condicionales++; // por j > 1 == true
            }
            condicionales++; // por j > 1 == false.

            aritmeticas++; // por i++
            condicionales++; // por i < n == true
        }
        condicionales++; // por i<n == false

        int total = aritmeticas + asignacion + condicionales;
        printf("|%d|\t%d|\t%d|\t|%d con n = %d\n", total, asignacion, condicionales, aritmeticas, n );
    }

}