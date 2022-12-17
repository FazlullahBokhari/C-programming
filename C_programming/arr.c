#include <stdio.h> 

int main(){
	int arr[] = {1,2,3,6,5,4,5};
	int i = 0;
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("%d", size);
	int maxVal = -1;
	for(i; i<size; i++){
		
		if(arr[i]> maxVal){
			maxVal = arr[i];
		}
	}
	printf("%d", maxVal);
	return 0;
}


