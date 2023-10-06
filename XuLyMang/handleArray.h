void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;  
}

int* insertArray(int *A,int n){
	for(int i=0;i<n;i++){
		printf("Nhap vao A[%d]:",i);
		scanf("%d",&A[i]);
	}
	return A;
}
void outputArray(int A[],int n){
	printf("\nCac phan tu trong mang la\n");
    for(int i = 0; i <= n - 1; i++){
        printf("A[%d] = %d \n" ,i,A[i]);
    }
}

void Partition(int A[], int left, int right)
{
    if (left >= right)
        return;
    int pivot = A[(left + right) / 2]; 
    
    int i = left, j = right;
    while (i < j)
    {
        while (A[i] < pivot) 
            i++;
        while (A[j] > pivot) 
            j--;

        if (i <= j)
        {
			int temp = A[i];
        	A[i] = A[j];
        	A[j] = temp;
			
            i++;
            j--;
        }
    }

    Partition(A, left, j);

    Partition(A, i, right);
}


void quickSortAsc(int A[], int n)
{
    Partition(A, 0, n - 1);
}
void qickSortDesc(int A[],int n){
	Partition(A,n-1,0);
}
int binarySearch(int array[], int x, int low, int high) {
	quickSortAsc(array,high);
  	if (high >= low) {
    int mid = low + (high - low) / 2;


    if (array[mid] == x)
      return mid;


    if (array[mid] > x)
    return binarySearch(array, x, low, mid - 1);
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}


