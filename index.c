#include<stdio.h>

int main()
{
    int arr[5];
    for(int i =0; i<5; i++){
        printf("Enter your %d element of array:",i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n \n");
    int max = arr[0];
    for(int i=0; i<5; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("The max element is: %d\n", max);
    return 0;
}