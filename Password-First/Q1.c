#include <stdio.h>
#include <string.h>

int main(){
    char *UserName[] = {"Test","test","TeSt","tEsT","TEST"};
    char *UserPass[] = {"Test","test","TeSt","tEsT","TEST"};
    char InputUser[10],InputPass[10];
    printf("Enter username: ");
    scanf("%s",&InputUser);
    printf("Enter password: ");
    scanf("%s",&InputPass);
    for(int i=0;i<2;i++){
        if(strcmp(InputUser, UserName[i]) == 0){
            if(strcmp(InputPass, UserPass[i]) == 0){
                printf("Login Sucess\n");
                break;
            }else{
             printf("Username or password is wrong\n");
             break;
            }
        }else{
             printf("Username or password is wrong\n");
             break;
        }
    }
}
