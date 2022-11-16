#include<stdio.h>
#include<stdlib.h>

void input(int *p, int n){
    for(int i=0; i<n; i++){
        scanf("%d", (p+i));
    }
}
void output(int *p, int n){
    for(int i=0; i<n; i++){
        printf("%d ", *(p+i));
    }
}




int main(){

    //printf("%d", sizeof(long long));
    
    // char *q;
    // q=(char*) malloc(4);
    
    // for(int i=0; i<=9; i++){
    //      scanf("%c", (q+i));   //give input without space
    // }
   
    // printf("\n");
    // for(int i=0; i<=9; i++){
    //     printf("%c ", *(q+i));
    // }
    
/*********************/
    // int *p;
    // p= (int*) malloc(40);

    // printf("enter 10 elem\n");
    // for(int i=0; i<=9; i++){
    //     scanf("%d", (p+i));
    // }
    // for(int i=0; i<=9; i++){
    //     printf("%d ", *(p+i));
    // }
/************************/


    // int *p;
    // int n;            //size of array
    // scanf("%d", &n);
    // p= (int*) malloc(n*sizeof(int));

    // printf("enter n elem\n");
    // for(int i=0; i<n; i++){
    //     scanf("%d", (p+i));
    // }
    // for(int i=0; i<n; i++){
    //     printf("%d ", *(p+i));
    // }
    /**************************/

    int *p;
    int n;
    printf("enter n");
    scanf("%d", &n);
    p= (int*) malloc(n*sizeof(int));

    input(p,n);
    output(p,n);

    return 0;
}