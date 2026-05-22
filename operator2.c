#include<stdio.h>

int main(){

    //     bitwise op
    int a,b,c;

    a=10;
    b=6;
    c=130;

    printf("bitwise and of %d & %d is: %d\n",a,b,a&b);
    printf("bitwise or of %d & %d is: %d\n",a,b,a|b);
    printf("bitwise xor of %d & %d is: %d\n",a,b,a^b);
    printf("left shift of %d is: %d\n",c,c<<3);
    printf("right shift of %d is: %d\n",c,c>>2);
    printf("bitwise not of %d is: %d\n",c,~c);

}    //int a;
    // scanf("%d",&a);
    // if (a>0){
    //     printf("positive\n");
    // }
    // else{
    //     printf("neative");
    // }    