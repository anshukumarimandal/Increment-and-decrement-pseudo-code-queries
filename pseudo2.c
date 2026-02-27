// increment and decrement operator
#include <stdio.h>

int main() {
    int x=8;
    int  y=88;
    char c='B';
    int d =x+y+c;
    printf("%d",(x++)+(y++)+(--c)+d);
 return 0;
}