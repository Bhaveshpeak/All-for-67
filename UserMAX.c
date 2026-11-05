#include<stdio.h>

float calcMax(int arr[], int n)
{
    float Max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}
int main()
{
   int arr[5], i;
   printf("Enter 5 numbers: ");
   for(i = 0; i < 5; i++)
   {
        scanf("%d", &arr[i]);
   }
   float Maximum = calcMax(arr, 5);
    printf("Maximum of the array: %.1f\n", Maximum);
    return 0;

}