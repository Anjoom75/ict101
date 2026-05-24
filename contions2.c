#include<stdio.h>

int main(){
//     char ch;
//     printf("input ur character \n :");
//     scanf("%c",&ch);

//     if (ch >= 'a' && ch<= 'z'  )
//         printf("lower \n");
//     else if(ch>='A' && ch<='Z')
//         printf("upper\n");
//     else{
//         printf("not a letter \n");
//     }
//     return 0;
// 

//          if if blocks

// int a = 67;

// if(a>20){printf("greater than 10\n");}
// if(a>80){printf("greater than 10\n");}
// if(a>10){printf("greater than 10\n");}
// if(a>10){printf("greater than 10\n");}



//             find the bigger digit among 3

// int a,b,c;
// scanf("%d %d %d",&a,&b,&c);
// if (a>b && a>c){printf("%d\n",a);}
// else if (b>a && b>c){printf("%d\n",b);}
// else{printf("%d\n",c);}

//     another way of doing it         

// int a,b,c;
// scanf("%d %d %d",&a,&b,&c);

// if (a>b){
//     if(a>c){
//         printf("A");}
//     else{
//         printf("C");}
// }
// else{
//     if(b>c){printf("B");}
//     else{printf("C");}
// }


//             switch

// int n;
// scanf("%d",&n);

// switch (n){
//     case 1:
//        printf("sat");
//        break;
//     case 2:
//        printf("sun");
//        break;
//     case 3:
//        printf("mon");
//        break;
//     case 4:
//        printf("tue");
//        break;
//     default: 
//         printf("nothing");
//     }

// char a;
// scanf("%c",&a);

// switch (a){
//     case 'a':
//        printf("sat");
//        break;
//     case 'b':
//        printf("sun");
//        break;
//     case 'c':
//        printf("mon");
//        break;
//     case 'd':
//        printf("tue");
//        break;
//     default: 
//         printf("nothing");
//     }




//                build a calculator with switch


float n1,n2;
char op;

scanf("%f %c %f",&n1,&op,&n2);

switch (op)
{
case '+':
    printf("%f\n",n1+n2);
    break;
case '-': 
    printf("%f\n",n1-n2);
    break;
case '*':
    printf("%f\n",n1*n2);
    break;
case '/':
    if (n2==0){
    printf("wtf");
    break;
}
    printf("%f\n",n1/n2);
    break;

default:
    printf("invalid\n");
    break;
}



}




