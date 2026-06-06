#include<stdio.h>

int main(){
    int n=5;
    int numbers[n];
    for(int i=0;i<n;i++){
        printf("enter te marks of roll %d : ",i+1);
        scanf("%d", &numbers[i]);
    }
    for(int i=0;i<n;i++){
    printf("roll:%d , number:%d\n",i+1,numbers[i]);
    }
    
    // finding the mean
    float sum =0;
    for(int i=0;i<n;i++){
        sum = sum + numbers[i];
    }
    printf("mean is %d\n",sum/n);
    
    // finding the maximum number
    int max=numbers[0];
    for(int i=0;i<n;i++){
        if (max>numbers[i])
           continue;
        else {
            max=numbers[i];
        }
    }

    printf("the maximum number is %d\n",max);

    return 0;
}