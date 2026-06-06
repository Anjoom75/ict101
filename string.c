#include<stdio.h>
#include<string.h>

int main(){
    char str[100]= "write a sentence ";
    printf("%s",str);
    scanf("%s",&str);
    printf("\n u entered : %s",str);


    int len= strlen(str);
    printf("\nlength : %d ",len);

}