#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#include"myLL.h"

split(struct node**start,struct node**start2,int x){
    struct node*p;
    p=(*start);
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=NULL;
    

}

int main(){
    struct node*start,*start2;
    start=NULL;
    start2=NULL;
    int x=30;
    
    insbeg(&start,10);
    insbeg(&start,20);
    insbeg(&start,30);
    insbeg(&start,40);
    insbeg(&start,50);
    split(&start, &start2,x);
    traverse(start);

}