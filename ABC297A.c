/* 画面に何か表示するプログラム */
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(suppress : 4996)


#include <stdio.h>
int main(void)
{
	int N,D;
    scanf("%d",&N);
    scanf("%d",&D);

    int x[N];
    int count=0;

    for(int i=0;i<N;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<N-1;i++){
        if(x[i+1]-x[i]<=D){
            count++;
            printf("%d",x[i+1]);
            break;
        }
    }
    if(count==0){
        printf("-1");
    }

	
	return 0;
}