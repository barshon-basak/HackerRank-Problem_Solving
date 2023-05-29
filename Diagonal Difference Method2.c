#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,diff,diff2;
    int sum1=0;
    int sum2=0;
    int Arr[100][100];
    scanf("%d",&n);

    for(int i=1; i<=n ; i++){
         for(int j=1; j<=n ; j++){
             scanf("%d",&Arr[i][j]);
         }
    }
 for(int i=1; i<=n ; i++){
         for(int j=1; j<=n ; j++){
    if(i==j){
        sum1=sum1+Arr[i][j];
    }
    if(i+j==n+1){
        sum2= sum2+Arr[i][j];
    }}}

diff= (sum1-sum2);
diff2= abs(diff);
printf("%d",diff2);
}
