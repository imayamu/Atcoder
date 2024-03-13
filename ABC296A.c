/* 画面に何か表示するプログラム */
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(suppress : 4996)


#include <stdio.h>
int main(void)
{
	int N;
    scanf("%d",&N);
    char s[N];
    int count=0;

    
    scanf("%s",s);
    

    for(int i=0;i<N-1;i++){
        if(s[i]=='M'){
            if(s[i+1]=='M'){
                count++;
            }

        }
        if(s[i]=='F'){
            if(s[i+1]=='F'){
                count++;
            }
            
        }

    }
    if(count==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

}