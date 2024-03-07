#include <stdio.h>

#define MAX_V 100

int main()
{
	int lanes, vehicles[MAX_V] = {0}, wt[MAX_V] = {0}, flag = 0, time = 0, shortest = 0, i;

	printf("Enter the number of lanes: ");
	scanf("%d", &lanes);

	for (int i = 0; i < lanes; i++)
	{
		printf("\nEnter the number of vehicles in lane %d: ", i + 1);
		scanf("%d", &vehicles[i]);
	}

	// Apply SJF scheduling

	while (flag == 0)
	{
		flag = 1;
		shortest = -1;

		// shortest lane
		for (i = 0; i < lanes; i++)
		{
			if (vehicles[i] > 0)
			{
				flag = 0;
				if (shortest == -1 || vehicles[i] < vehicles[shortest])
				{
					shortest = i;
				}
			}
		}

		if (shortest != -1)
		{
			printf("\nTime %d: Lane %d with %d vehicles gets green light", time, shortest + 1, vehicles[shortest]);
			vehicles[shortest] -= 20;
			wt[shortest] += time;
		}

		time++;
	}

	printf("Lane\tWaiting Time\n");

	for (i = 0; i < lanes; i++)
	{
		printf("%d\t%d unit\n", i + 1, wt[i]);
	}

	return 0;
	// Coded by Tejas 
}
