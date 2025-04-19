#include <stdio.h>

int main() {
	int n,count=0;
	printf("Enter the number of characters in the slogan(spaces included): ");
	scanf("%d",&n);
	printf("Enter the Slogan:");
	char arr[n+1],current_letter;
	for(int i=0;i<n;i++)
	{
		scanf("%c",&arr[i]);
	}
	arr[n]='\0';
	printf("For: ");
	for(int i=0;i<n;i++)
	{
		printf("%c",arr[i]);
	}
	int counter[n];
	for(int i=0;i<n;i++)
	{
		counter[i]=0;
	}
	
	for(int i=1;i<n;i++)
	{
	    if(counter[i]==0)
	    {
		current_letter=arr[i];
		count=1;
		for(int j=i+1;j<n;j++)
		{
			if(current_letter==arr[j])
			{
			count++;
			counter[j]=1;
			}
		}
		printf("\'%c\': %d,",arr[i],count);
	}
}
}
