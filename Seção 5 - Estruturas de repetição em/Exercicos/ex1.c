#include <stdio.h>

int main(){
	int li, lf, contator = 0;

	printf("O limite inferior: ");
	fflush(stdout);
	scanf("%d", &li);

	printf("O limite superior: ");
	fflush(stdout);
	scanf("%d", &lf);

	for(int i=li; i< lf; i++){
		if(i % 3 == 0){
			printf("O número %d é divisivel por 3\n", i);
			contator += 1;
			if(contator == 3){
				break;
			}
		}
	}
	return 0;
}
