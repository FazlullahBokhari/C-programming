struct ArrayADT
{
	int capacity;
	int lastIndex;
	int *ptr;
};

struct ArrayADT* createArray(int cap)
{
	struct ArrayADT *arr;
	arr = (struct ArrayADT*)malloc(sizeof(struct ArrayADT));
	arr->capacity=cap;
	arr->lastIndex=-1;
	arr->ptr=(int*)malloc(sizeof(int)*cap);
	return arr;
}

void append(struct ArrayADT *arr, int data)
{
	if(arr->lastIndex== arr->capacity-1){
		printf("\nOverflow");
	}else{
		arr->lastIndex++;
		arr->ptr[arr->lastIndex] = data;
	}
	
}

void insert(struct ArrayADT *arr, int index, int data)
{
	if(index<0 || index>arr->lastIndex+1)
	{
		printf("\nInvalid Index");
	}else if(arr->lastIndex == arr->capacity-1){
		printf("\nOverflow");
	}else{
		
	}
		}	
}

int main()
{
	struct ArrayADT *arr;
	arr=createArray(6);
	append(arr, 10);
	insert(arr, 1,20);
}
