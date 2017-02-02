#include <stdio.h>

int main()
{
    int m,n,move;
    int a[200];
    int i,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    move = n%m;
    for(i=0,j=0;i<m-move;i++,j++)
    {
        a[m+move+j]=a[i];
    }
    for(i=move,j=0;i>0;i--,j++)
    {
        a[m+j]=a[m-i];
    }
    for(i=m;i<2*m-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d",a[i]);
    return 0;
}
