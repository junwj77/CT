#include <stdio.h>
int main(){
    int std[28];
    for(int i=0;i<28;i++){
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
    for(int i=0;i<28;i++){
        printf("%d ",std[i]);
    }
    printf("\n");
    int arr[30];
    for(int i=0;i<30;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<30;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<28;i++){
        if(arr[i]!=std[i]){
            printf("%d\n", arr[i]);
            for(int j=i;j<28;j++){
                if((arr[j+1])!=std[j]){
                    printf("%d", arr[j+1]);
                    break;
                }
            }
            break;
        }
    }
}