#include <stdio.h>
#include <stdlib.h>

int main(){
    int test_num;
    scanf("%d", &test_num);
    
    float *test_score=(float*)malloc(sizeof(float)*test_num);
    float big=0;
    for(int i=0;i<test_num;i++){
        scanf("%f", &test_score[i]);
        if(test_score[i]>big) big=test_score[i];
    }
    
    float sum=0;
    for(int i=0;i<test_num;i++){
        if(test_score[i]!=big){
            test_score[i]=test_score[i]/big*100;
        }
        sum+=test_score[i];
    }

    float mean;
    mean=sum/(float)test_num;
    printf("%f", mean);
}