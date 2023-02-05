#include <stdio.h> 


int main(){
	printf("##################### \n");
	int A[] = {1,2,3,4,5,6};
	int size = sizeof(A)/sizeof(A[0]);
	int ele;
	ele = 5000;
	getArr(A, size);
	printf("\n");
	A, size = appendEle(A, size, ele);
	getArr(A, size);
	
	int pos = 3;
	int newEle = 5000;
	A, size = insertEle(A, size, pos, newEle);
	printf("\n");
	grtArr(A, size);
	return 0;
}

int insertEle(int A, int size, int pos, int ele){
	A[pos] = ele;
	pos = pos + 1; 
	size = size + 1
	for(pos, pos<size, pos++){
		A[pos] = A[pos];
	}
	return A, size;
}

int appendEle(int A[], int size, int ele){
	int pos; 
	pos = size+1;
	A[pos] = ele;
	size = pos;
	return A, pos;
}

int getArr(int A[], int size){
	int i = 0;
	for(i; i<size; i++){
		printf(" %d ", A[i]);
	}
}
