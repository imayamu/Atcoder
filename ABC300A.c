#include <stdio.h>
int main(void)
{
	int N,A,B,S;
    int answer=0;
    
    

    
	
	scanf("%d",&N);
    scanf("%d",&A);
    scanf("%d",&B);

    int C[N];

    



    S=A+B;

    for(int i=0;i<N;i++){
        scanf("%d",&C[i]);
        if(C[i]==S){
            answer=i+1;
        }
    }

    printf("%d",answer);

    




	return 0;
}

