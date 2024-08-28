// Write a simple c program to print the following patterns using 2 loops
// *********
// *********
// *********
// *********
// *********

//solution
#include <stdio.h>

int main() {
    int rows = 5;
    int columns = 9;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
----output----
*********
*********
*********
*********
*********
*/
