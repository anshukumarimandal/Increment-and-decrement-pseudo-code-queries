// increment and decrement operator
#include <stdio.h>

int main() {
    int a=1;
    int b=2;
    int c=(a++)+(b++)+(++a)+(--b);
    printf("%d",a+b+c);
 return 0;
}