#include <stdio.h>
#include<stdlib.h>

#include"polynomialLL.h"

struct node* polyadd(struct node**poly1,struct node**poly2){
    struct node*p,*q,*poly3;
    poly3=NULL;
    p=*poly1;
    q=*poly2;

    while(p!=NULL && q!=NULL){
        if(p->exponent== q->exponent){
            insend(&poly3,(p->coeff)+(q->coeff), p->exponent);
            p=p->next;
            q=q->next;
        }
        else{
            if((p->exponent)>(q->exponent)){
                insend(&poly3,p->coeff, p->exponent);
                p=p->next;
            }
            else{
                insend(&poly3,q->coeff, q->exponent);
                q=q->next;
            }
        }
    }
    while(p!=NULL){
        insend(&poly3,p->coeff, p->exponent);
            p=p->next;
    }
    while(q!=NULL){
        insend(&poly3,q->coeff, q->exponent);
                q=q->next;
    }

    return poly3;
}

void polysub(struct node**poly1,struct node**poly2){
    struct node*q,*poly3;
    q=*poly2;
    while(q!=NULL){
        q->coeff=(-1)*(q->coeff);
        q=q->next;
    }
    poly3=polyadd(poly1,poly2);
    traverse(poly3);
    
}


int main(){
    struct node*poly1,*poly2;
    poly1=NULL;
    poly2=NULL;
    // insbeg(&start,1,6);
    // insbeg(&start,3,2);
    // insbeg(&start,3,8);
    // insend(&start,5,5);
    
    orderedins(&poly1,1,6);
    orderedins(&poly1,3,2);
    traverse(poly1);
    printf("\n");
    orderedins(&poly2,4,2);
    orderedins(&poly2,3,9);
    traverse(poly2);
    printf("\n");
    //polyadd(&poly1,&poly2);
    printf("\n");
    polysub(&poly1,&poly2);
    
    
    return 0;
}
