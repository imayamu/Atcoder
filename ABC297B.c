/* 画面に何か表示するプログラム */
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(suppress : 4996)


#include <stdio.h>
int main(void)
{
    int N=8;
    int x,y,x1,y1,z1,count,flag,flag1;
    count=0;
    flag=0;
    flag1=0;
	char s[N];

    scanf("%s",s);

    for(int i=0;i<N;i++){
        if(flag==0){
        if(s[i]=='B'){
            flag++;
            x=i+1;
            //printf("%d\n",x);
            for(int j=i+1;j<N;j++){
                if(s[j]=='B'){
                    y=j+1;
                    //printf("%d",y);
                }
            }
        }
        }
        if(flag1==0){
            if(s[i]=='R'){
            x1=i+1;
            //printf("%d",x1);
            for(int j=i+1;j<N;j++){
                if(s[j]=='R'){
                    y1=j+1;
                    //printf("%d",y1);
                }
            }
            flag1++;
            
        }
        }

        if(s[i]=='K'){
            z1=i+1;
            //printf("%d",z1);
        }
    }
    if((y-x)%2==1){
        count++;
        //printf("%d",count);
    }
    if(x1<z1&&z1<y1){
        count++;
    }

    //printf("%d\n",count);

    if(count==2){
        printf("Yes");
    }
    else{
        printf("No");
    }




            
	
	return 0;
}