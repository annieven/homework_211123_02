#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct DATA {
	double	x;
	double	y;
};

int main(int argc, char **argv)
{
	struct DATA	*pData = NULL;
	int			i, num = 0;

	scanf("%d", &num);
	pData = malloc(num * sizeof(struct DATA));

	for (i = 0; i < num; i++)
	{
		scanf("%lf %lf", &pData[i].x, &pData[i].y);
	}

	for (i = 0; i < num; i++)
	{
		printf("%lf\n", hypot(pData[i].x, pData[i].y));
	}

	free(pData);
	pData = NULL;

	return 0;
}
