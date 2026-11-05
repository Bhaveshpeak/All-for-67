#include<stdio.h>

float calcAverage(int arr[], int n)
{
    float Avg = 0;
    for(int i = 0; i < n; i++)
    {
        Avg += arr[i];
    }
    return Avg / n;
}
int main()
{
   int arr[5], i;
   printf("Enter 5 numbers: ");
   for(i = 0; i < 5; i++)
   {
        scanf("%d", &arr[i]);
   }
   float Average = calcAverage(arr, 5);
    printf("Average of the array: %.2f\n", Average);
    return 0;

}