#include <stdio.h>
#include <math.h>

int is_prime(int x)
{
    int i;
    if(x <= 3)
    {
        return x>1;
    }
    else
    {
        for(i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int N;
    int i=2;
    int arr[2];
    arr[0]=arr[1]=-1;
    int total=0;
    scanf("%d", &N);
    while(i<=N)
    {
        if(is_prime(i))
        {
            arr[0]=arr[1];
            arr[1]=i;
            if(arr[1]-arr[0]==2)
                total++;
        }
        i++;
    }
    printf("%d", total);
    return 0;
}
