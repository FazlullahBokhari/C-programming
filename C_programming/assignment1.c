#include <stdio.h> 

int main(){
	printf("Hellow \n"); 
	int A[] = {1,2,5,10,0,100,7};
	int maxVal = -1;
	int result;
	int lenA = sizeof(A)/sizeof(A[0]);
	result = maxValue(A,maxVal, lenA);
	printf("Biggest number in the given array: %d", result);
	return 0;
}

int maxValue(int A[], int maxValue, int lenA){ 
int i = 0;
for(i; i<lenA; i++){
	printf("I---------- %d \n", i);
	if (A[i] > maxValue){
	maxValue = A[i];}
}
return maxValue; 
}


