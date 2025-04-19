#include<stdio.h>
#include<string.h>
int compression(char arr[])
{
	char compressed[20];
	int index=0,count=0;
	char c_letter;
	for(int i=0;i<strlen(arr);i++)
	{
		int found=0;
		c_letter=arr[i];
		for(int j=0;j<index;j++)
		{
			if(compressed[j]==c_letter)
			{
				count++;
				found=1;
				break;
			}
		}
		if(found==0)
		{
			compressed[index++]=arr[i];
		}
	}
	strcpy(arr,compressed);
	return count++;
}


int main()
{
	char word[20],c;
	printf("Enter the word: ");
	scanf("%19s",&word);
	printf("The original word is %s",word);
	c=compression(word);
	printf("\nThe compressed word is %s",word);
	printf("\nThe duplicate was removed %d times",c);
}

