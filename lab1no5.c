#include <stdio.h>

void add(int num1, int num2){
    printf("%d", (num1 + num2));
}

void subtract(int num1, int num2){
    if(num1 > num2){
        printf("%d", (num1-num2));
    }
    else{
    printf("%d", (num2-num1));
	}
}

void multiply(int num1, int num2){
    printf("%d", (num1 * num2));
}

int main(void){
    add(1,45);
    printf("\n");
    subtract(4, 7);
    printf("\n");
    subtract(10, 2);
    printf("\n");
    multiply(6,5);
    return 0;
}