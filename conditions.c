#include<stdio.h>

int main(){
    // if(0){
    //     printf("inside if block\n");
    // }                                               // inside if(0 ---- false
                                                            //      1 ----- true            )
    // else{
    //     printf("inside else block\n");
    // }
    // printf("end\n");


    //check if an integer is even:

    // int a;
    // printf("enter the num : ");
    // scanf("%d",&a);
    // if(a%2){
    //     printf("the number is even\n");
    // }
    // else{
    //     printf("the numer is odd\n");
    // }
    // return 0;


    // check if a number is  positive or negative

    // int a;
    // scanf("%d",&a);
    // if (a>0){
    //     printf("positive\n");
    // }
    // else if(a==0){
    //     printf("zero\n");
    // }
    // else{
    //     printf("neative");
    // }

    // find out which int is bigger

    // int a,b;
    // scanf("%d\n%d",&a,&b);

    // if (a>b){
    //     printf("%d>%d\n",a,b);
    // }
    // if (a==b)
    //     printf("eqAL");
    // else{
    //     printf("%d>%d\n",b,a);
    // }

    //                    grades


    int marks;
    scanf("%d",&marks);

    if (marks>100 || marks<0){
        printf("invalid");
    }
    else if(marks>=80)
         printf("A+\n");
    else if(marks>=70)
        printf("A\n");
    else if(marks>=65)
        printf("A-\n");
    else if(marks>=60)
        printf("B\n");
    else
        printf("fail\n");
    

}