// increment and decrement operator
#include <stdio.h>

int main() {
    int a=2;
    int b=3;
    int c=(a++)+(++b)*(a++)-(b--)/(--a);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
 return 0;
}