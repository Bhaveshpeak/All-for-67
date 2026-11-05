#include<stdio.h>

int sum(int arr[], int n);
float calcAvg(int arr[], int n);
int calcMax(int arr[], int n);
int calcMin(int arr[], int n);

int main()
{
    int arr[5], i;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum of the array: %d\n", sum(arr, 5));
    printf("Average of the array: %.2f\n", calcAvg(arr, 5));
    printf("Maximum of the array: %d\n", calcMax(arr, 5));
    printf("Minimum of the array: %d\n", calcMin(arr, 5));
    return 0;
}
int sum(int arr[], int n)
{
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}
float calcAvg(int arr[], int n)
{
    float total = sum(arr, n);
    return total / n;
}
int calcMax(int arr[], int n)
{
    int Max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}
int calcMin(int arr[], int n)
{
    int Min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}