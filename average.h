#ifndef _INCLUDE_AVERAGE_H_
#define _INCLUDE_AVERAGE_H_

int average(int payments[]);
#endif // _INCLUDE_AVERAGE_H_

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
