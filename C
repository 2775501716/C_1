//写一个函数判断是不是素数
int prime_number(int x)
{
	int y = 2;
	for (y = 2; y <= sqrt(x); y++)
	{
		if (x % y == 0)
		{
			return 0;
		}
	}
	if (x % y != 0)
	{
		return 1;
	}
