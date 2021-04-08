#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
bool leep_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
}
int main()
{
	int year;
	printf("please input year:>");
	scanf("%d", &year);
	if (year < 0)
	{
		printf("Year input error!\n");
		return 0;
	}
	if (leep_year(year))
	{
		printf("this year is a leap year!\n");
	}
	else
		printf("this year isn't a leap year!\n");
	return 0;
}