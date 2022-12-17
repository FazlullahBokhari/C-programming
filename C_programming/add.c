#include <stdio.h> 

int main(){
	int a = 10;
	int b = 20;
	int sum;
	sum = add(a,b);
	printf("%d", sum);
	return 0;
}

int add(int n1, int n2){
	int c;
	c = n1+n2;
	return c;
}
