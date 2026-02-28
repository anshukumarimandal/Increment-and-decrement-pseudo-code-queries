// increment and decrement operator
#include <stdio.h>

int main() {
    int i=0;
    i=(i++)-(--i)+(++i)-(i--);
    printf("%d",i);
 return 0;
}