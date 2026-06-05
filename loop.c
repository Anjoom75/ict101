#include<stdio.h>

int main(){
        /// looop
    
    //            WHILE LOOP
    // int i=0,n;
    // scanf("%d", &n);
    // while (i<n)
    // {
    //     printf("turns the friggin frogs gay\n");
    //     i++;
    // }
    


    //     prinf even numbers

    // int i=0,n;
    // scanf("%d",&n);

    // while (i<=n)
    // {
    //     printf("%d\n",2*i);
    //     i++;
    //     }
    
    // 1+2+3 ...........n
    //     int i=1,n,sum=0;
    // scanf("%d",&n);

    // while (i<=n)
    //     {
    //     sum = sum + i;
    
    //     i++;
    //     }
    // printf("sum is %d\n",sum);


  //  sum of 1 to even
    //        int i=0,n,sum=0;
    // scanf("%d",&n);

    // while (i<=n)
    //     {
    //     sum = sum + i;
    
    //     i+=2;
    //     }
    // printf("sum is %d\n",sum);


    //5+10+15+.........n
//     int i=5,n,sum=0;
//     scanf("%d",&n);

//     while (i<=n)
//         {
//         printf("%d + ",i);
//         sum = sum + i;
//         i+=5;
//         }
//     printf("sum is %d\n",sum);
// 


// 1*5 +2*5 ............. n


    // int i=1,n,sum=0;
    // scanf("%d",&n);

    // while (i<=n)
    //     {
    //     printf("%d*5 + ",i);
    //     sum = sum + i*5;
    
    //     i++;
    //     }
    // printf("sum is %d\n",sum);




// 1^2 + 2^2 +3^3






//            DO WHILE LOOP


// take input unless its q

// char ch;
// do{
//     printf("enter a char  \n");
//     scanf(" %c",&ch);
//     printf("u entered %c\n",ch);
    
// }while (ch!='q');




//             FOR LOOP


//  rpint 1to n
// int n=10;
// int i=1;
// //for (int i=1; i<=n;i++)  or
// for (/*already initalized*/ ; i<=n;i++){

//   printf("%d",i);
// }


// 1+2+.......+n

// int n,i,sum=0;
// printf("enter a num: \n");
// scanf("%d",&n);

// for(i=1;i<=n;i++){
//   printf("%d + ",i);
//   sum += i;
// }
// printf("\nsum is %d",sum);


//    factorial

// int i,n,fact=1;

// printf("factorial of .......?? \n");
// scanf("%d",&n);

// for(i=1;i<=n;i++){
//   fact=i*fact; 
// }
// printf("factorial is : %d\n ",fact);



//          9 er namta 

// int i,n;

// printf("kiser namta lagbo bhai : \n");
// scanf("%d",&n);

// for(i=1;i<=10;i++){
// printf("%d x %d = %d \n",n,i,n*i);
// }



//                 break and continue

// int n=10;
// int i=1;
// //for (int i=1; i<=n;i++)  or
// for (/*already initalized*/ ; i<=n;i++){
//   if(i==7)              //skipped 7 and went to the start of loop
//     continue;
  
//   printf("%d\n",i);
// }



// int n=20;
// int i=1;
// //for (int i=1; i<=n;i++)  or
// for (/*already initalized*/ ; i<=n;i++){
//   if(i%3==0)              //skips 3 and its multiples and went to the start of loop
//     continue;
  
//   printf("%d\n",i);
// }


// int n=20;
// int i=1;
// //for (int i=1; i<=n;i++)  or
// for (/*already initalized*/ ; i<=n;i++){
//   if(i==15)              //beraks 15 and after
//     break;
  
//   printf("%d\n",i);
// }



//  GCD  (advanced)

// int h,l,r;
// printf("enter highest number \n");
// scanf("%d",&h);
// printf("enter lower number \n");
// scanf("%d",&l);


// do{
//   r = h%l;
//   h=l;
//   l=r;
// } while(r!=0);
// printf("gcd is %d \n",h);

 
//                      fibonacci




//    check if prime or not

int n,i,isPrime=1;
printf("enter a num \n");
scanf("%d",&n);

if(n==1)  
  isPrime=0;

for(i=2;i<=n-1;i++){
  if(n%i==0){
    isPrime=0;
    break;
  }
}

if(isPrime==0)
    printf("%d is not prime",n);
else
    printf("%d is prime",n);
     

}