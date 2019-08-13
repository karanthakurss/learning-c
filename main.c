#include <stdio.h>
#include <stdlib.h>

int sum();

int main(){
    int a = 20;
    int b = 20;
    printf("%d %d", a, b);
    printf("the sum is: %d", sum(a, b));

    return 0;
}

int sum(int a, int b){
    int total = a + b;
    return total;
}
