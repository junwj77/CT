#include <stdio.h>

int a=12;

void chan(){
    a=15;
}
void main(){
    chan();
    printf("%d\n",a);
    a=14;
    printf("%d",a);
}