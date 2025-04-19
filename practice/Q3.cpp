#include<stdio.h>
int search(int arr[4][4],int id){
    int flag=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (arr[i][j]==id){
                flag=1;
                printf("book is available in shelf NO: %d and placement %d\n",i+1,j+1);
                break;
                }
        }
    }
               if(flag==0) 
                {
                    printf("book is not available\n");
                }
    return 0;
}
void add(int arr[4][4],int id){
    int flag=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (arr[i][j]==0){
                arr[i][j]=id;
                flag++;
            }
                if(flag==1)
                    break;
        }
        if(flag==1)
                {
                    printf("book added successfully\n");
                    break;
                }
    }
    if(flag==0)
    printf("book not added no space available\n");
}
void remove(int arr[4][4],int id){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==id){
                arr[i][j]=0;
                printf("book removed successfully\n");
            }
        }
    }
}
void printing(int arr[4][4]){
	for (int i=0;i<4;i++){
			printf("| %d | %d | %d | %d |",arr[i][0],arr[i][1],arr[i][2],arr[i][3]);
		printf("\n");
        }
		
	}
int main ()
{
	int books[4][4]={
	{10,0,12,0},
	{17,18,0,20},
	{0,42,26,27},
	{31,32,0,0}};
 int choice;
 int id;
printing(books);
	do{
        printf("\n1. Add book id\n2. Remove book id\n3. Search book ids\n4. Exit\nChoose an option: ");
        scanf("%d",&choice);
switch (choice)
{
case 1:
	printf("enter book id= ");
	scanf("%d",&id);
    add(books,id);
    printing(books);
    break;
case 2:
    printf("enter book id= ");
    scanf("%d",&id);
    remove(books,id);
    printing(books);
    break;
case 3:
    printf("enter book id= ");
    scanf("%d",&id);
    search(books,id);
    printing(books);
    break;
default:
    break;
}
}while(choice!=4);
}
	
