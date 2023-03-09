#include<stdio.h>
int main()
{
	int cd, cm, cy, bd, bm, by;
	int day, month, year;
	printf("Enter Birth day, month and year: \n");
	scanf("%d %d %d", &bd, &bm, &by);
	printf("Enter Current day, month and year: \n");
	scanf("%d %d %d", &cd, &cm, &cy);

	if(cd<bd)
	{
		cm-=1;
		day=(cd+30)-bd;
	}
	else 
	{
		day=cd-bd;
	}
	if(cm<bm)
	{
		cy-=1;
		month=(cm=12)-bm;
	}
	else
	{
		month=cm-bm;
	}
	year = cy-by;
	printf("\nyear		Month		day");
	printf("\n%d \t\t%d \t\t%d",year,month,day);
	return 0;
}

