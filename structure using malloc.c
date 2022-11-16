#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[10];
    double percent;
};

void input(struct student *p, int n){
    int i;
    for(i=0; i<n; i++){
        scanf("%d%s%lf", &(p+i)->roll, (p+i)->name, &(p+i)->percent);
    }
}
void output(struct student *p, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d %s %lf ", (p+i)->roll, (p+i)->name, (p+i)->percent);
    }
}

int main(){
    int n;
    struct student *p;
    printf("enter n");
    scanf("%d", &n);
    p= (struct student *)malloc(n*sizeof(struct student));
    // scanf("%d%s%lf", &p->roll, p->name, &p->percent);
    // printf("%d %s %lf", p->roll, p->name, p->percent);
    input(p,n);
    printf("\n");
    output(p,n);

    return 0;
}