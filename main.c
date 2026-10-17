#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int	main(void)
{
	long int	my_time;
	long int	seconds, minutes, hours;

	printf("Enter your time in seconds: ");
	scanf("%ld", &my_time);
	getchar();
	for (int i = 0; my_time >= i; my_time--)
	{
		seconds = my_time % 60;
		minutes = my_time / 60 % 60;
		hours = my_time / 3600;
		system("cls");
		printf("%02ld:%02ld:%02ld\n", hours, minutes, seconds);
		sleep(1);
	}
	printf("TIME'S UP!");
	return (0);
}