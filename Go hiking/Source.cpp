#define CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	int day;
	printf("How long will you go(day) : ");
	scanf_s("%d", &day);

	char food[20];
	//W for Water(1day) , M for Meat(2days) , B for Bread(1.5days)
	printf("In the your backpack : ");
	scanf_s("%s", food ,19);

	int j = 0;
	float survive = 0;
	while (j <= 19 && food[j]!='\0')
	{
		if (food[j] == 'W')
		{
			survive = survive +1;
		}
		else if (food[j] == 'M')
		{
			survive = survive +2;
		}
		else if (food[j] == 'B')
		{
			survive = survive +1.5;
		}
		j++ ;
	}
	printf("%.1f days\n", survive);

	if (survive < day)
	{
		printf("That's not enough for %d day\n",day);
	}
	else if (survive >= day)
	{
		printf("That's enough for %d days\n", day);
	}
	return 0;
}