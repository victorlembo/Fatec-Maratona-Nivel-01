#include <stdio.h>
 
int main() {
    int X;
    double Y, total;
    
    scanf("%i", &X);
    scanf("%lf", &Y);
    
    total = X/Y;
    
    printf("%.3lf km/l\n", total);
 
    return 0;
}