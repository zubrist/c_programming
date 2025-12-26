#include <stdio.h>

int main()
{
	int arr[40];
	int num, temp;
	int i;
	
	printf("\nEnter total number of elements: ");
	scanf("%d", &num);
	
	printf("\nEnter elements: ");
	for(i = 0; i < num; i++)
	{
		printf("\nPosition %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nBefore sorting: ");
	for(i = 0; i < num; i++)
	{
		printf("%d ",arr[i]);
	}
	//Before sorting: 2 34 65  9 68
    // Bubble Sort
	for(i = 0; i < num-1; i++)  //  number of passes ||  i = 1
	{
        for ( int j = 0 ; j< num-i-1; j++) // comparison in each pass || j = 4
        {
		if(arr[j] > arr[j + 1]) // 
		{
			temp = arr[j]; // temp = 68
			arr[j] = arr[j + 1]; // 9
			arr[j + 1] = temp;	 // 68
		}

        }
	}
	
	printf("\n-----------------------------------------");
	printf("\nAfter sorting: ");
	for(i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}