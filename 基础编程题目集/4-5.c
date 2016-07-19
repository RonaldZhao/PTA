ElementType Max(ElementType S[], int N)
{
	ElementType Max = S[0];
	for (int i = 0; i < N; i++)
	{
		Max = Max >= S[i] ? Max : S[i];
	}
	return Max;
}
