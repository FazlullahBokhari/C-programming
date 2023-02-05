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
	
	return arr;
};
