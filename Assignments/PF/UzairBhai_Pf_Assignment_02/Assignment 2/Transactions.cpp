#include <stdio.h>
#include <string.h>

void bubblesort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {    
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, num;
    printf("Enter the number of transactions: ");
    scanf("%d", &n);
    printf("Enter the length of each transaction code: ");
    scanf("%d", &num);
    
    char transactions[n][num + 1];
    char sorted[n][num + 1]; 

    printf("Enter the transaction codes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", transactions[i]); 
    }

    for (int i = 0; i < n; i++) 
	{
        strcpy(sorted[i], transactions[i]); 
        bubblesort(sorted[i], strlen(sorted[i])); 
    }
    
    int done_printing[n];
    for(int i=0;i<n;i++)
    {
    	done_printing[i]=0;
	}
	printf("Grouped:\n");
    for(int i = 0 ; i < n; i++)
    {
    	if(done_printing[i]==1)
    	{
    		continue;
		}
    	printf("{\"%s\"",transactions[i]);
    	for(int j=i+1;j<n;j++)
    	{
    		if(strcmp(sorted[i],sorted[j])==0)
    		{
    			printf(" ,\"%s\"",transactions[j]);
    			done_printing[j]=1;
			}
		}
		printf("}");
		printf("\n");
	}
}
