//  1.Increment and Decrement operations 
#include <stdio.h>

int main() {
    int a=65;
    int b=++a;
    int c=((++a)-(b--));
    int d=((a++)+(--b)+(c++));
    printf("%d",(a+b+c+d));
 return 0;
 }