#include <stdio.h>
#include <stdlib.h>


int main(){
	int read;
	int randomNum;
	int tried=0;
	//srand((unsigned int)time(NULL));

	printf("Guess what number computer thought @_@?\n");
	randomNum = rand() % 99 + 1;

	printf("Enter a number(1-99) : ");
	scanf("%d", &read);

	while (read != 0){
		if (randomNum == read){
			printf("You got it!!(%dtimes tried)\n", tried);
			break;
		}
		else if (read < randomNum){
			if (randomNum - read > 10){
				printf("It's MUCH BIGGER than that!");
			}
			else{
				printf("It's BIGGER than that!");
			}
		}
		else{
			if (read - randomNum > 10){
				printf("It's MUCH SMALLER than that!");
			}
			else{
				printf("It's SMALLER than that!");
			}
		}
		printf("(%dtimes tried)\n", ++tried);
		printf("\nEnter a number(1-99) : ");
		scanf("%d", &read);
	}



	return 0;
}