#include <stdio.h>
#include<string.h>
#include <math.h>

int yearDays(int);
int moDays(int, int);
int numDays(int, int, int, int, int, int);
void date(int, int, int, char day[]);

int main()
{
	
	char day[10];
	int d[3],
		digits[3],
		i,
		j,
		flag;
	
	printf("d/m/y: ");
	scanf("%d/%d/%d", &d[0], & d[1], &d[2]);
	
	printf("\n");
	for(j = 0; j < 3; j++)
	{
		for(i = 0, flag = 0, digits[j] = 0; !flag; i++)
		{
			if(d[j] < pow(10, i))
			{
				flag = 1;
				printf("digits[%d] = %d\n", j, digits[j] = i);
			}
		}
	}
	
	date(d[0], d[1], d[2], day);
	printf("%s\n",day);
	
	return 0;
}

int yearDays(int year)
{
	if(year % 400 == 0)
		return 366;
	else if(year % 100 == 0)
		return 365;
	else if(year % 4 == 0)
		return 366;
	else
		return 365;
}

int moDays(int month, int year)
{
	switch(month)
	{
		case 2:
			if(yearDays(year) == 365)
				return 28;
			else
				return 29;
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
			break;
		default:
			return 30;
	}
}

int numDays(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int i;
	if(m1 == m2 && y1 == y2)
	{
		if(d1 > d2)
			return d1 - d2;
		else
			return d2 - d1;
	}
	else if(y1 == y2)
	{
		if(m1 > m2)
		{
			//left in month + middle months + start month
			int sum;
			sum = moDays(m2, y2) - d2;
			for(i = m2 + 1; i < m1; i++)
				sum += moDays(i, m2);
			return sum += d1 - 1;
		}
		else
		{
			int sum;
			sum = moDays(m1, y1) - d1;
			for(i = m1 + 1; i < m2; i++)
				sum += moDays(i, m1);
			return sum += d2 - 1;
		}
	}
	else
	{
		if(y1 > y2)
		{
			//left in month + left in year + middle years + start year + start month
			int sum;
			sum = moDays(m1, y1) - d1;
			for(i = m2 + 1; i <= 12; i++)
				sum += moDays(i, m2);
			for(i = y2 + 1; i < y1; i++)
				sum += yearDays(i);
			for(i = 1; i < m2; i++)
				sum += moDays(i, y2);
			sum += moDays(m2, y2);
			return sum += d2;
		}
		else
		{
			int sum;
			sum = moDays(m2, m2) - d2;
			for(i = m1 + 1; i <= 12; i++)
				sum += moDays(i, y1);
			for(i = y1 + 1; i < y2; i++)
				sum += yearDays(i);
			for(i = 1; i < m1; i++)
				sum += moDays(i, y1);
			return sum += d1;
		}
	}
}

void date(int d1, int m1, int y1, char day[])
{
	int days;
	int d2, m2, y2;
	
	d2 = 1;
	m2 = 1;
	y2 = 1901;
	days = numDays(d1, m1, y1, d2, m2, y2) % 7 + 1;
	
	if(y1 > y2 || y2 == y1 && m1 > m2 || y2 == y1 && m1 == m2 && d1 > d2)
	{
		switch(days)
		{
			case 1:
				strcpy(day,"Tuesday");
				break;
			case 2:
				strcpy(day,"Wednesday");
				break;
			case 3:
				strcpy(day,"Thursday");
				break;
			case 4:
				strcpy(day,"Friday");
				break;
			case 5:
				strcpy(day,"Saturday");
				break;
			case 6:
				strcpy(day,"Sunday");
				break;
			case 7:
				strcpy(day,"Monday");
				break;
		}
	}
	else
	{
		switch(days)
		{
			case 1:
				strcpy(day,"Tuesday");
				break;
			case 2:
				strcpy(day,"Monday");
				break;
			case 3:
				strcpy(day,"Sunday");
				break;
			case 4:
				strcpy(day,"Saturday");
				break;
			case 5:
				strcpy(day,"Friday");
				break;
			case 6:
				strcpy(day,"Thursday");
				break;
			case 7:
				strcpy(day,"Friday");
				break;
		}
	}
}
