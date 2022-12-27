#include <stdio.h>

int main() {

	int id1, id2;

	scanf("%d", &id1);
	scanf("%d", &id2);
	
	if (id1==1){
		printf("Total: R$ %.2f\n", 4.00*id2);
	}
	
	else{
		
		if (id1==2){
			printf("Total: R$ %.2f\n", 4.50*id2);	
		}
	
		else{
			
			if (id1==3){
				printf("Total: R$ %.2f\n", 5.00*id2);
			}
			
			else{
				
				if (id1==4){
					printf("Total: R$ %.2f\n", 2.00*id2);
				}
				
				else{
					
					if (id1==5){
						printf("Total: R$ %.2f\n", 1.50*id2);	
					}
				}
			}
		}	
	}

	return 0;
}