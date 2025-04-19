#include<stdio.h>
int choice(int n)
{
	if(n%5==0)
	{
		return -1;
	}
	else{
		return n%5;
	}
}
int main()
{
	int n;
	printf("Enter the number of matchsticks:  ");
	scanf("%d",&n);
	int a=choice(n);
	if(a==-1)
	{
		printf("Your win may be impossible");
	}
	else{
		printf("You need to pick %d matchsticks on first try to guarantee your win",a);
	}
}