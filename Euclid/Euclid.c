/*
    Pratice the Euclid with the algorithm five characteristics
*/

#include <stdio.h>

// Remainder as termination condition
int Euclid_r (unsigned int a,unsigned int b) {
    unsigned int r;
    r = 0;
    do {
      r = a%b;
      if (r == 0) {
        printf("GCD = %d",b);
        return b;
      }
      a = b;
      b = r;
    } while (r != 0);
    return 0;
}

//divisor as termination condition
int Euclid_d (unsigned int a,unsigned int b) {
    unsigned int r;
    while (b > 0) {
      r = a%b;
      if (r == 0) {
        printf("GCD = %d",b);
        return b;
      }
      a = b;
      b = r;
    }
    return 0;
}

int main (void) {
    // Definiteness
    unsigned int n1,n2;
    // Input
    printf("Please type two input:");
    scanf("%d %d",&n1,&n2);

    // Finiteness
    Euclid_r(n1,n2);
    // Output (in functions)

    return 0;
}