#include <stdio.h> 

struct time
{
	float start;
	float fin;
};

int main(void)
{
	struct time data[5];
	float sum = 0;
	float fee = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%f %f", &data[i].start, &data[i].fin);
		if ((data[i].fin - data[i].start) > 0)
		{
			if ((data[i].fin - data[i].start) <= 1)
			{
				sum += 0;
			}
			else if ((data[i].fin - data[i].start) > 1)
			{
				if ((data[i].fin - data[i].start-1) > 4)
				{
					sum += 4.0;
				}
				else
				{
					sum += data[i].fin - data[i].start-1;
				}
				
			}
		}
	}
	if (sum >= 15.0)
	{
		fee = (sum / 0.5) * 5000;
		fee = fee - fee * 0.05;
		printf("%.f", fee);
	}
	else if (sum <= 5.0)
	{
		fee = (sum / 0.5) * 5000;
		fee = fee + fee * 0.05;
		printf("%.f", fee);
	}
	else
	{
		fee = (sum / 0.5) * 5000;
		printf("%.f", fee);
	}


	
}
