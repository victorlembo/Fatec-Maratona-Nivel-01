#include <stdio.h>
 
int main() {
 	
 	int i, num, cont=0;
   
    for(i=1; i<=5; i++){
        scanf("%i", &num);
        if( num % 2 == 0 ){
        	cont++;
		}
    }
    
    printf("%i valores pares\n%", cont);
    
    return 0;
}