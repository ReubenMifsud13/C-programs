// fathm_ft.c -- converts 2 fathoms to feet

#include <stdio.h>

int main(void)

{

    int feet, fathoms; //Declaration of integer variables: feet & fathoms are symbollic identifiers - they are the variable names of 2 integer variables respectively



    fathoms = 2; //fathoms is the lvalue, 2 is the rvalue

    feet = 6 * fathoms; //feet is the lvalue, 6*fathoms is the rvalue

    printf("There are %d feet in %d fathoms!\n", feet, fathoms);

    printf("Yes, I said %d feet!\n", 6 * fathoms);



    return 0;

}