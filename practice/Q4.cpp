#include<stdio.h>
int search(int arr[4][4],int i,int j){
    if(arr[i][j]==1){
        printf("seat is not available\n");
    }
    if(arr[i][j]==0){
        printf("seat is available\n");
    }
    return 0;
}
void add(int arr[4][4],int i,int j){
if(arr[i][j]==0){
    arr[i][j]=1;
    printf("seat booked successfully\n");
}
else{
    printf("this seat is available.Try for another\n");
}
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
	int seats[4][4]={
	{0,0,0,0},
	{1,1,0,0},
	{0,1,0,1},
	{1,1,0,0}};
 int choice,row,seat_no;
 int id;
printing(seats);
	do{
        printf("\n1.book seat \n2.seating layout\n3. Search seat\n4. Exit\nChoose an option: ");
        scanf("%d",&choice);
switch (choice)
{
case 1:
	printf("enter seat row= ");
	scanf("%d",&row);
    printf("enter seat number: ");
	scanf("%d",&seat_no);
    add(seats,row-1,seat_no-1);
    break;
case 2:
    printing(seats);
    break;
case 3:
    printf("enter seat no: \n");
    printf("enter seat row:");
    scanf("%d",&row);
    printf("enter seat number: ");
    scanf("%d",&seat_no);
    search(seats,row-1,seat_no-1);
    break;
case 4:
    printf("exiting");
    break;
default:
    break;
}
}while(choice!=4);
}
	