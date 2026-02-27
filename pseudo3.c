// increment and decrement operator
#include <stdio.h>

int main() {
    int a=5;
    int b=(a++)+(++a)+(a--);
    printf("%d",a+b);
 return 0;
}