#include<stdio.h>
#include<stdlib.h>

void Print(int input,char Symbol)
{
	int i, j, k, tempSum, N = 0,OutputNum = 0;

	for (i = 1; i <= 1000; i += 2)					//求行数
	{
		tempSum = (i*i + 2 * i - 1) / 2;
		if (tempSum > input)
		{
			N = i - 2;
			break;
		}
	}

	for (i = 1; i <= (N+1) / 2; i++)				//输出上半部分（包括中间行）
	{
		for (j = 1; j < i; j++)						    //输出行首空格
			printf(" ");
		for (j = 0; j < N - 2 * (i - 1); j++)		//输出符号
		{
			printf("%c", Symbol);
			OutputNum++;
		}
		printf("\n");
	}

	for (j = i; j <= N; j++)						  //输出下半部分（包括中间行）
	{
		for (k = 0; k < N - j; k++)					//输出行首空格
			printf(" ");
		for (k = 0; k < N - 2 * (N - j); k++)		//输出符号
		{
			printf("%c", Symbol);
			OutputNum++;
		}
		printf("\n");
	}
	printf("%d", input - OutputNum);
}

int main()
{
	int InputNum;
	char Symbol;
	scanf("%d %c", &InputNum,&Symbol);
	Print(InputNum,Symbol);
	return 0;
}
