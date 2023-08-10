#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$^&*()";
    int lengthPass;
    printf("Enter the length of the password to be Generated: ");
    scanf("%d",&lengthPass);
    char GeneratedPass;
    srand(time(0));
    for(int i=0;i<lengthPass;i++){
        char randomNum = rand()%71;
        printf("%c", charset[randomNum]);
    }
    return 0;
}