/*
The grade of a student can be based on the following criteria:
Attendance must be more than 50%
Tests scores must be more than .70
Total score must be more than 5600 (just go with this number)
The grades are awarded as follows:
Grade is 10: if all conditions are met
Grade is 9: if conditions 1 and 2 are met
Grade is 8: if conditions 3 and 3 are met
Grade is 7: if conditions 1 and 3 are met
Grade is 6: if only one condition is met
Grade is 5: if none of the conditions are met
Write a cpp program to display the grades, based on the scores students secured in individual criteria.
Ex: input 53, 0.6, 5602 res: 10
Input 45, 0, 4500 res: 6

*/


#include<stdio.h>
#include<stdlib.h>


int checkGrades(int a, float t, int tot)
{
	if(a > 50 && t > 0.70 && tot > 5600)
	{
		return 10;
	}
	else if(a > 50 && t > 0.70 && tot < 5600)
	{
		return 9;
	}
	else if(a < 50 && t < 0.70 && tot > 5600)
	{
		return 8;
	}
	else if(a > 50 && t < 0.70 && tot > 5600)
	{
		return 7;
	}
	else if(a > 50 || t > 0.70 || tot > 5600)
	{
		return 6;
	}
	else
	{
		return 5;
	}
}

int main()
{
	int attend, total, res=0;
	float test;

	printf("Enter attendance , Test score & Total score : \n");
	scanf("%d %f %d",&attend, &test, &total);

	res = checkGrades(attend, test, total);
	printf("res: %d\n", res);

	return 0;
}
