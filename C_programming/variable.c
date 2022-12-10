#include <stdio.h>


int main(){ 
	printf("hello world \n");
	float total_life = 10.8;
	float userd_life = 4;
	float remaining_life = total_life - userd_life;
	printf("There are %f remaining lifes and total lifes were %f \n", remaining_life, total_life);
	
	getchar();
	return 0;
}
