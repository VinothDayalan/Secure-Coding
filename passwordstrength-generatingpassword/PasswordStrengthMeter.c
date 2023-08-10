#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    char UserPass[50];
    printf("Enter password to check : ");
    scanf("%s",&UserPass);
    float LowerCase = 0, UpperCase = 0, SpecialChar = 0, Digit = 0;
    float strength=0.00;
    int n = strlen(UserPass);
    if(strlen(UserPass)>7){
        for(int i=0;i<n;i++){
            if (isupper(UserPass[i])) {
                UpperCase = 1;
            }
            if(islower(UserPass[i])){
                LowerCase = 1;
            }
            if (isdigit(UserPass[i])) {
                Digit = 1;
            }
            if (!isalnum(UserPass[i])) {
                SpecialChar = 1;
            }
        } 
    }
    strength = ((UpperCase + LowerCase + Digit + SpecialChar)/4)*100;
    printf("Password strength is %.2f",strength);
}