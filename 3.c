#include <stdio.h>
int main(){
    int std[2];
    for(int i=0;i<2;i++){
        scanf("%d",&std[i]);
        if(i==0) continue;
        if(std[i-1]>std[i]){
            int j=i-1;
            while(j!=0&&(std[j]>std[i])){
                j--;
            }
            int k=std[i];
            for(int t=i-1;t>=j;t--){
                std[t+1]=std[t];     
            }
            if(j==0) std[0]=k;
            else
                std[j+1]=k;
        }
    }
    for(int i=0;i<2;i++){
        printf("%d",std[i]);
    }
    int arr[4];
    for(int i=0;i<4;i++){
        arr[i]=i;
    }
    for(int i=0;i<2;i++){
        if(arr[i]!=std[i]){
            printf("%d\n", i);
            for(int j=i;j<2;j++){
                if((arr[j]+1)!=std[j]){
                    printf("%d", j+1);
                    break;
                }
            }
            break;
        }
    }
}