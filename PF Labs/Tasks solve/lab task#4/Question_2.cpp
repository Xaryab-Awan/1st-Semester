#include<stdio.h>
int main()
{
	char a;
	printf("ENTER APLAHBET:");
	scanf("%c",&a);
	if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u'))
	printf("Its A Vowel");
	else 
		printf("Its consunant");
	return 0;
}