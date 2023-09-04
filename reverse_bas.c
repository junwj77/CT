#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    
    int* bas=(int *)malloc(sizeof(int)*(N+1));
    for(int i=0;i<N+1;i++){
        bas[i]=i;
    }
    
    for(int i=0;i<N+1;i++){
        printf("%d ", bas[i]);
    }
}
