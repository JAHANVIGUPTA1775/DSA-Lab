#include<stdio.h>
void traverse(int *ptr, int n){
    int i;
    for(i=0; i<=n-1; i++){
        printf("%d", *(ptr+i));
    }
}

int main(){
    int i;
    int A[10]= {1,2,3,4,5,6,7,8,9,10};

    traverse(A, 10);

    /********************/
    // int*ptr;
    // ptr= &A[0];

    // for(i=0; i<=9; i++){
    //     printf("%d\t", A[i]);
    // }
    // for(i=0; i<=9; i++){
    //     printf("%d ", *(ptr+i));
    // }
    // for(i=0; i<=9; i++){
    //     printf("%d ", *(A+i));
    // }
    /**********************/

    // int x=10;
    // int *p;
    // printf("%u ", &x);
    // p= &x;
    // printf("%d ", x);
    //  printf("%u ", p);
    //   printf("%d", *p);

    return 0;
}