#include<stdio.h>
#include<math.h>    

// define a funtion to add 2 ints
int adder(int a,int b){
    return a+b;
}

void print(){
    printf("hello im a bish\n");
}

//write a funtion that will add (wont return anything)

void sumprint(int,int);       //funtion prototype


int fact(int n){          //factorial
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int lau = 2;
    int  kodu = 67;

    //printf("%d\nf",adder(lau,kodu));

    // print();
    // print();

    //sumprint(lau,kodu); 


//    printf("%d",fact(6));

    //   double n = sqrt(16);
    //   printf("%lf",n);



    
}


void sumprint(int a,int b ){
    int sum = a+b;
    printf("sum is %d \n",sum);
}