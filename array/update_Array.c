// #include <stdio.h>

// int main() {
//     // Declare and initialize an array of 5 integers
//     int arr[5] = {10, 20, 30, 40, 50};
//     int i, pos, new_value;

//     // Display the original array
//     printf("Original Array:\n");
//     for(i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     // Ask user for the position and new value
//     printf("\n\nEnter the position to update (0-4): ");
//     scanf("%d", &pos);

//     printf("Enter the new value: ");
//     scanf("%d", &new_value);

//     // Update the element at the given index
//     arr[pos] = new_value;

//     // Display the updated array
//     printf("\nUpdated Array:\n");
//     for(i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");
//     return 0;
// }
#include <stdio.h>
int main()
{
    int size,i;
    printf("\nEnter size: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter numbers: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n----------------------------");
    printf("\nEntered elements: ");
    for(i=0;i<size;i++)
    {
        printf("\nPosition %d : %d",i+1,arr[i]);
    }
    return 0;
}