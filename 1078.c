#include <stdio.h>
 
int main() {
 
    int num, i;
    
    scanf("%i", &num);
    
    for(i=1; i<=10; i++){
        printf("%i x %i = %i\n", i, num, i*num);
    }
 
    return 0;
}