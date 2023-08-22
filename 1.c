#include <stdio.h>

int main(){
    int N, M;
    int buk[101];
    scanf("%d %d", &N, &M);
    for(int a=1;a<=N;a++){
        buk[a]=a;
    }
    int i,j;
    for(int a=0;a<M;a++){
        scanf("%d %d", &i, &j);
        int t=buk[i];
        buk[i]=buk[j];
        buk[j]=t;
    }
    for(int a=1;a<=N;a++){
        printf("%d ", buk[a]);
    }
}