#include <stdio.h>

int main(void)
{
	int arr[5] = {1,3,5,7,9};
	double arr2[5] = {1.1, 3.2, 5.3, 7.4, 9.5};
	int *arrPtr = arr; 
	double *arrPtr2 = arr2; 
	printf("%d %d\n", arrPtr, arrPtr2);
	(*arrPtr)++;
	*arrPtr2++;

	printf("%d %lf %d %d \n", *arrPtr, *arrPtr2, arrPtr, arrPtr2);

	return 0;
}
