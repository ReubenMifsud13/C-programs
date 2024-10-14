#include <stdio.h>

int main(void)

{

    int dogs, cats;

    printf("How many cats do you have?\n");

    scanf("%d", &cats);

    printf("How many dogs do you have?\n");

    scanf("%d", &dogs);

    printf("So you have %d dog(s) and %d cats!\n", dogs, cats);

    printf("This gives a total of %d pets", (dogs+cats));

    return(0);

}