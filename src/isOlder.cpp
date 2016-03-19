/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int len(char *a)
{
	int i, j = 0;
	for (i = 0; *(a + i) != '\0'; i++)
	{
		j++;
	}
	return j;
}
int valid(char *h)
{
	int i, j, m, d, y, b[20], l;
	int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	l = len(h);
	if (l != 10)return 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 5)
			continue;
		if (*(h + i) < '0' || *(h + i) > '9')
			return 0;
	}
	for (i = 0; i < l; i++)
	{
		b[i] = (*(h + i) - 48);
	}
	d = (b[0] * 10) + b[1];
	m = (b[3] * 10) + b[4];
	y = (b[6] * 1000) + (b[7] * 100) + (b[8] * 10) + b[9];
	if (y % 4 == 0)
	{
		a[1] = 29;
	}
	if (y % 4 == 0)
	{
		if (y % 100 == 0 || y % 400 == 0)
		{

			a[1] = 29;
		}
		/*else
		{
		a[1] = 28;
		}*/
	}
	if (m == 0 || d == 0 || y == 0)
		return 0;
	else if (d <= 0 || d >= 31 || m >= 12)
	{
		return 0;
	}
	else if (y <= 0)
	{
		return 0;
	}
	else if (d > a[m - 1])
	{
		return 0;
	}
	else if (*(h + 2) != '-' || *(h + 5) != '-')
	{
		return 0;
	}


}
int isOlder(char *dob1, char *dob2) {
	int m, d, dd, mm, y, yy, yyy, yyyy, m1, d1, dd1, mm1, y1, yy1, yyy1, yyyy1;
	if (valid(dob1) == 0 || valid(dob2) == 0)
	{
		return -1;
	}
	d = dob1[0] - 48;
	dd = dob1[1] - 48;
	dd = d * 10 + dd;
	m = dob1[3] - 48;
	mm = dob1[4] - 48;
	mm = m * 10 + mm;
	y = dob1[6] - 48;
	yy = dob1[7] - 48;

	yyy = dob1[8] - 48;
	yyyy = dob1[9] - 48;
	yyyy = (y * 1000) + (yy * 100) + (yyy * 10) + yyyy;
	d1 = dob2[0] - 48;
	dd1 = dob2[1] - 48;
	dd1 = d1 * 10 + dd1;
	m1 = dob2[3] - 48;
	mm1 = dob2[4] - 48;
	mm1 = m1 * 10 + mm1;
	y1 = dob2[6] - 48;

	yy1 = dob2[7] - 48;

	yyy1 = dob2[8] - 48;

	yyyy1 = dob2[9] - 48;

	yyyy1 = (y1 * 1000) + (yy1 * 100) + (yyy1 * 10) + yyyy1;

	if (yyyy < yyyy1)
		return 1;
	else if (yyyy>yyyy1)
		return 2;
	if (mm < mm1)
		return 1;
	else if (mm>mm1)
		return 2;
	if (dd < dd1)
	{
		return 1;
	}
	else if (dd>dd1)
		return 2;
	return 0;
}



