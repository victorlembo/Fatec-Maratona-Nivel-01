#include <stdio.h>

int main() {

    int i,num;

    scanf("%d",&num);

    if(num%2==0){
       num=num-1; 
    }

    for(i=1;i<=num;i+=2){
        printf("%d\n", i);
    }
    
    return 0;
}