#include <stdio.h>

int MaxSubseqSum(int arr[], int N)
{
    int ThisSum, i, MaxSum;
    ThisSum = MaxSum = 0;
    for(i=0; i<N; i++)
    {
        ThisSum += arr[i];
        if(ThisSum < 0)
        {
            ThisSum = 0;
        }
        else if(ThisSum > MaxSum)
        {
            MaxSum = ThisSum;
        }
    }
    return MaxSum;
}
int main()
{
	int K, i, MaxSum;
	scanf("%d", &K);
	int arr[100000] = { 0 };
	for (i = 0; i < K; i++)
	{
		scanf("%d", &arr[i]);
	}
	MaxSum = MaxSubseqSum(arr, K);
	printf("%d", MaxSum);
	return 0;
}
