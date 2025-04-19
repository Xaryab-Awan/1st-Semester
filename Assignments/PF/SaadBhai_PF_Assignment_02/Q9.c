#include<stdio.h>

int main() {
    int score=0;
    char move;
    char table[5][5]=
    {
       {' ',' ','I','X',' '},
       {' ','X',' ',' ',' '},
       {'I',' ','X','X',' '},
       {' ',' ',' ','I','X'},
       {' ','X',' ',' ','P'}
    };
    
    for(int i=0; i<5 ; i++){
    printf("| %c | %c | %c | %c | %c |\n",table[i][0],table[i][1],table[i][2],table[i][3],table[i][4]);
    }
    int x=4,y=4;
    printf("Press 'W' to move up\n");
    printf("Press 'S' to move down\n");
    printf("Press 'A' to move left\n");
    printf("Press 'D' to move right\n");
    printf("Press 'Q' to quit\n");
    printf("\n");
    while(1){
    printf("Enter Move =\n");
    scanf(" %c",&move);
    
    int nx=x,ny=y;
    
    if(move=='W' || move=='w'){
    nx--;
    }else if(move=='S' || move=='s'){
    nx++;
    }else if(move=='A' || move=='a'){
    ny--;
    }else if(move=='D' || move=='d'){
    ny++;
    }else if(move=='Q' || move=='q'){
    break;
    }else{
    printf("Invalid move\n");
    continue;
    }
    
    if(nx>=0 && nx<5 && ny>=0 && ny<5 && table[nx][ny]!='X'){
     if(table[nx][ny]=='I'){
     printf("Item collected\n");
     score++;
     printf("score = %d\n",score);
     }
     table[x][y]= ' ';
     x=nx;
     y=ny;
     table[x][y]= 'P';
    }else{
    printf("out of bound or obstacle here\n");
    }
    
    for(int i=0; i<5 ; i++){
    printf("| %c | %c | %c | %c | %c |\n",table[i][0],table[i][1],table[i][2],table[i][3],table[i][4]);
    } printf("\n");
   }
    return 0;
}