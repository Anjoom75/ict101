#include<stdio.h>

int main(){
    int k,i,b=0,f=1,n=10;
    printf("the nth fib : ");
    scanf("%d",&n);
    printf("\n");

    if (n == 1){
     printf("%d", b);
     return 0;
    }   
    if (n == 2){ 
        printf("%d, %d",b, f);
        return 0;}
    
    for(i=1;i<=n-1;i++){
        if(i==1){
            printf("%d, %d",b,f);   
            k=f;
            f=b+f;
            b=k;
        }
        else{
            printf(", %d",f);
            k=f;
            f=b+f;
            b=k;  

        }      
    }


}