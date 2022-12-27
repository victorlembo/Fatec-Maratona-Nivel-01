#include <stdio.h>

int main(){
    int i, num;
    scanf("%i", &num);
    for(i=1;i<=10000;i++){
        if(i%num==2){
            printf("%i\n", i);
        }
    }
    return 0;
}