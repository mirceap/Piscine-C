#include "header.h"

int		*ft_range(int min, int max)
{
	int		*result;
	int		count;
	int		i;

	if (min >= max)
	{
		result = 0;
		return (result);
	}
	else
	{
		count = max - min;
		result = (int*)malloc(sizeof(int) * count);
		i = 0;
		while (min < max)
		{
			result[i] = min;
			min++;
			i++;
		}
	}
	return (result);
}