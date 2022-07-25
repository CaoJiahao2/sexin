#include <stdio.h>
#include "string.h"
#define maxnum 20
int arr[maxnum][maxnum];
int main() {
    int n1,n2,x,y,count;
    printf("input two num:");
    scanf("%d%d",&n1,&n2);
    memset(arr,0,sizeof (arr));
    count=arr[x=0][y=n2-1]=1;
    while (count<n1*n2){
        while (x+1<n1 && !arr[x+1][y])arr[++x][y]=++count;
        while (y-1>=0 && !arr[x][y-1])arr[x][--y]=++count;
        while (x-1>=0 && !arr[x-1][y])arr[--x][y]=++count;
        while (y+1<n2 && !arr[x][y+1])arr[x][++y]=++count;
    }
    for(x=0;x<n1;x++){
        for(y=0;y<n2;y++)
            printf("%4d",arr[x][y]);
        printf("\n");
    }
    printf("count = %d",count);
    return 0;
}
