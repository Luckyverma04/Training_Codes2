#include<stdio.h>
#include"D:\Project(2)\struck.h"
#include"D:\Project(2)\insertData.c"
#include"D:\Project(2)\show.h"
#include"D:\Project(2)\search.h"
#include"D:\Project(2)\update.h"
#include"D:\Project(2)\delete.h"
int main (){
    int i,ch,ext;
    do{
         printf("\nPress 1 For insert: ");
         printf("\nPress 2 For Show: ");
         printf("\nPress 3 For Search: ");
         printf("\nPress 4 For  Update: ");
         printf("\nPress 5 For Delete: ");
printf("\nenter ur choice: ");
scanf("%d",&ch);
switch(ch){
    case 1: insert();
    break;
    case 2: show();
    break;
    case 3: srch();
    break;
    case 4: update();
    break;
    case 5: delete();
    break;
}


printf("\n For continue press 1:");
scanf("%d",&ext);


    }
    while(ext ==1);
    return 0;
}
