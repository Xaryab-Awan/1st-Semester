#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int BinaryToDecimal(long int n)
{
	int deci_number=0,m=0,temp=0;
	for(int i=0;n!=0;i++)
	{
		m=n%10;
		deci_number = deci_number + (m*pow(2,i));
		n=n/10;
	}
	return deci_number;
}




int DecimalToBinary(int n)
{
	unsigned long int bin_number=0;
	unsigned long int m=0;
	for(int i=0;n!=0;i++)
	{
		m=n%2;
		bin_number=bin_number+(m*pow(10,i));
		n=n/2;
	}
	return bin_number;
}




void DecimalToHexadecimal(int n)
{
	int m=0,count=0;
	char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	printf("The Hexadecimal number is: ");
	int tem=n;
	for(int i=0;tem!=0;i++)
	{
		m=tem%16;
		count++;
		tem=tem/16;
	}
	int temp1[count];
	tem=n;
	for(int i=0;tem!=0;i++)
	{
		m=tem%16;
		temp1[i]=m;
		tem=tem/16;
	}
	for(int i=count-1;i>=0;i--)
	{
		printf("%c",arr[temp1[i]]);
	}
}




void HexadecimalToDecimal(char arr[],int n)
{
	int dec=0,k=0;
	char converter[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	for(int i=n-1;i>=0;i--)
	{
		int index=-1;
		for(int j=0;j<16;j++)
		{
			if(arr[i]==converter[j])
			{
				index=j;
				break;
			}
		}
		if(index!=-1)
		{
			dec=dec+(index*pow(16,k));
		}
		k++;
	}
	printf("The Decimal number is %d",dec);
}


void BinaryToHexadecimal(int n)
{
	int new_number=BinaryToDecimal(n);
	DecimalToHexadecimal(new_number);
}


void HexadecimalToBinary(char arr[],int n)
{
	int dec=0,k=0;
	char converter[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	for(int i=n-1;i>=0;i--)
	{
		int index=-1;
		for(int j=0;j<16;j++)
		{
			if(arr[i]==converter[j])
			{
				index=j;
				break;
			}
		}
		if(index!=-1)
		{
			dec=dec+(index*pow(16,k));
		}
		k++;
	}
	printf("%d is Binary of %s",DecimalToBinary(dec),arr);
}



int main()
{
	long int n;
	int choice,flag;
	do{
	printf("============MENU==============");
	printf("\n1. Binary to Decimal ");
	printf("\n2. Decimal to Binary ");
	printf("\n3. Decimal to Hexadecimal ");
	printf("\n4. Hexadecimal to Decimal ");
	printf("\n5. Binary to Hexadecimal ");
	printf("\n6. Hexadecimal to Binary ");
	printf("\n0. Exit\n");
	printf("Enter your Operation: ");
	scanf("%d",&choice);
	if(choice==0){
		break;
	}
	switch(choice)
	{
		case 1:
			{
			int decimal;
			printf("Enter the Binary number you want to convert to Decimal: ");
			scanf("%d",&n);
			decimal=BinaryToDecimal(n);
			printf("%d is decimal number of %d",decimal,n);
			printf("\nDo you want to continue(1.yes 0.no)");
			scanf("%d",&flag);
			if(flag!=0)
					{
						system("cls");
						continue;
					}
			break;
		}
		case 2:
			{
				printf("Enter the Decimal number you want to convert to Binary: ");
				scanf("%d",&n);
				unsigned long int binary=DecimalToBinary(n);
				printf("%d is Binary number of %d",binary,n);
				printf("\nDo you want to continue(1.yes 0.no): ");
				scanf("%d",&flag);
				if(flag!=0)
					{
						system("cls");
						continue;
					}
			break;
		}
		case 3:
			{
					printf("Enter the Decimal number you want to convert to Hexadecimal: ");
					scanf("%d",&n);
					DecimalToHexadecimal(n);
					printf("\nDo you want to continue(1.yes 0.no): ");
					scanf("%d",&flag);
					if(flag!=0)
					{
						system("cls");
						continue;
					}
				break;
			}
		case 4:
			{
					printf("Enter the number of characters in Hexadecimal number: ");
					scanf("%d",&n);
					char hexdec[n];
					printf("Enter the Hexadecimal number you want to convert to Decimal: ");
					scanf("%s",hexdec);
					HexadecimalToDecimal(hexdec,n);
					printf("\nDo you want to continue(1.yes 0.no): ");
					scanf("%d",&flag);
					if(flag!=0)
					{
						system("cls");
						continue;
					}
				break;
			}
		case 5:	
		{
					printf("Enter the Binary number for Hexadecimal Conversion: ");
					scanf("%d",&n);
					BinaryToHexadecimal(n);
					printf("\nDo you want to continue(1.yes 0.no): ");
					scanf("%d",&flag);
					if(flag!=0)
					{
						system("cls");
						continue;
					}
				break;	
			}
		case 6:
			{
					printf("Enter the number of characters in Hexadecimal number: ");
					scanf("%d",&n);
					char hexdec2[n];
					printf("Enter the Hexadecimal number you want to convert to Binary: ");
					scanf("%s",hexdec2);
					HexadecimalToBinary(hexdec2,n);
					printf("\nDo you want to continue(1.yes 0.no): ");
					scanf("%d",&flag);
					if(flag!=0)
					{
						system("cls");
						continue;
					}
				break;	
			}
			default:
				{
					printf("Invalid Input");
					flag=0;
					break;
					
				}
	}
	}while(flag!=0);

}
