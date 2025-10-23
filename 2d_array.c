#include <stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        for(int j =1;j<=i;j++){
            printf(" %d",i);
        }
        printf("\n");
    }
    for(int k = 4;k >= 1;k--){
        for(int l = 1 ;l<=k;l++){
            printf(" %d",k);
        }        
        printf("\n");
    }
    return 0;
}