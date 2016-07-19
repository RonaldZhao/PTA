int FactorialSum(List L)
{
	int Sum = 0, temp;
	while (L)
	{
		temp = 1;
		for (int i = 1; i <= L->Data; i++)
		{
			temp *= i;
		}
		Sum += temp;
		L = L->Next;
	}
	return Sum;
}
