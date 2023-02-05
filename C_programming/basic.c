int main(){
	int A[] = {1,2,3,5};
	A[2] = 500;
	int size;
	size = sizeof(A)/sizeof(A[0]);
	int i = 0;
	for(i; i<size; i++){
		printf("%d",A[i]);
	}
	return 0;
}
