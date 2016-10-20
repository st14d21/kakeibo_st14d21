#include <stdio.h>
#include "average.h"

int average(int payments[])
{
	int i;
	int sum=0;

	for(i=0;i<5;i++)
	{
		sum+=payments[i];
	}

	sum=sum/5;	

	return sum;
}
