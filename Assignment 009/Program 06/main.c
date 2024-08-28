//write a  simple c program to print alphabets 'z' to 'a'(in reverse order)

//solution
#include <stdio.h>

int main() {
    // Print alphabets from 'z' to 'a' in reverse order
    for (char ch = 'z'; ch >= 'a'; ch--) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0; // Successful execution
}

/*
------output----
z y x w v u t s r q p o n m l k j i h g f e d c b a 
*/