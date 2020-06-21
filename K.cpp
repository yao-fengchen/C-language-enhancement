#include <stdio.h>
int main(){
    int arr[21][21]={0},n=0;
    while (scanf ("%d",&n)!=EOF){
        if (n==0)
            return 0;
        for (int i=1; i<=n; i++)
            for (int j=1; j<=n; j++){
                if (j==1)
                    arr[i][j]=1;
                else
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        for (int i=1; i<=n; i++){
            for (int j=1; j<=i; j++)
                printf ("%d ",arr[i][j]);
            printf ("\n");
        }
    }
    return 0;
}
