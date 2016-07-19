#include<math.h>
double f(int n, double a[], double x)
{
	int i, j;
	double fn = 0;
	if (!x)
	{
		return 0;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			fn += a[i] * pow(x, i);
		}
	}
	return fn;
}
