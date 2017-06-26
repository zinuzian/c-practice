#include <stdio.h>
#include <stdlib.h>

#define ROCK 1
#define SCISSOR 2
#define PAPER 3

int main(){
	int menu;
	int com;
	int w = 0, d = 0, l = 0;

	srand((unsigned int)time(NULL));

	printf("Choose Rock(1), Scissor(2), Paper(3). 0 to terminate : ");
	scanf("%d", &menu);

	while (menu != 0){
		if (menu == ROCK){
			printf("Your choice : Rock\n");
		}
		else if (menu == SCISSOR){
			printf("Your choice : Scissor\n");
		}
		else if (menu == PAPER){
			printf("Your choice : Paper\n");
		}
		else if (menu == 0){
			break;
		}
		else{
			printf("Wrong input::Idiot!!\n");
		}

		com = rand() % 3 + 1;
		if (com == ROCK){
			printf("Computer : Rock\n");
		}
		else if (com == SCISSOR){
			printf("Computer : Scissor\n");
		}
		else if (com == PAPER){
			printf("Computer : Paper\n");
		}

		if (com == menu){
			printf("Draw!!\n");
			printf("W:%d  L:%d  D:%d\n", w, l, ++d);

		}
		else if ((menu - com == -1) || (menu - com == 2)){
			printf("You Win!!\n");
			printf("W:%d  L:%d  D:%d\n", ++w, l, d);
		}
		else{
			printf("You Lose!!\n");
			printf("W:%d  L:%d  D:%d\n", w, ++l, d);
		}

		printf("\nChoose Rock(1), Scissor(2), Paper(3). 0 to terminate : ");
		scanf("%d", &menu);

	}
	printf("**** Total Score ****\n");
	printf("W:%d  L:%d  D:%d\n", w, l, d);
	
	return 0;
}