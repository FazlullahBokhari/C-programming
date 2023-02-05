#include <stdio.h> 


int main(){
	printf("///////////////// \n");
	int A[] = {10,20};
	int size = sizeof(A)/sizeof(A[0]);
	int result;
	result = getAvg(A,size);
	printf("The average value of the array elements: %d",result);
	return 0;
}

int getAvg(int A[], int size){
	int avgVal;
	int sum; 
	int i = 0;
	for(i; i<size; i++){
		sum = sum + A[i];
	}
	avgVal = (float) sum/size;
	return avgVal;
	
}
