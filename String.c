/*************************************************************************
	> File Name: hello.c
	> Author:JankinBai 
    > Mail: jankinbai@qq.com
	> Created Time: 2018年07月11日 星期三 22时02分51秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define X 4
#define Y 4
int main(){
    int Matrix[X][Y]={{1,2,3,4},{4,3,1,2},{5,6,7,8},{8,7,6,5}};
   /**********************************************************
    int hub =0;
    int sum =0;
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
           if(Matrix[i][j]>=hub){
                hub=Matrix[i][j];
            }
            printf("\n%d\n",hub);
        }
        sum+=hub;
    }
    printf("\n%d\n",sum);
   **********************************************************//*
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            printf("%d ",Matrix[i][j]);
        }printf("\n");
    }printf("\n");

    int hub[X][Y] ={0};
    
    for(int i=0;i<X;i++){
       hub[i][0]=Matrix[i][0]; 
       hub[i][2]=Matrix[i][2];      
    } 
    for(int i=0;i<X;i++){
       Matrix[i][0]=hub[i][2];
       Matrix[i][2]=hub[i][0];
    }
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            printf("%d ",Matrix[i][j]);
        }    printf("\n");
    }
*************************************************************//*
    char str[100];
    gets(str);
    for(int i;str[i]!='\0';i++){
        str[i]-=32;}
    puts(str);
*************************************************************//*
    char str1[100],str2[100],str3[100];
    printf("\nInput str1:");
    gets(str1);
    printf("\nInput str2:");
    gets(str2);
    printf("\nInput str3:");
    gets(str3);
    int a=strlen(str1);
    int b=strlen(str2);
    int c=strlen(str3);
    printf("%d\n",((a<b?a:b)<c?(a<b?a:b):c));
*************************************************************/
    char str[100];
    int j=0;
   gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A'&&str[i]<='z')
            j++;
    }
    printf("\nLen:%d",j);

    return 0;
}
