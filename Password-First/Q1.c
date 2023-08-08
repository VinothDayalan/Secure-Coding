#include <stdio.h>
int main(){
    char username[40];
    char Password[40];
    char AuthUser[3][50] = {"Geek", "Geeks", "Geekfor"};
    char AuthPass[3][50] = {"Geek", "Geeks", "Geekfor"};
    int i=0,key,j=0;
    while(i!=3){
        i=i+1;
        printf("Enter the username: ");
        scanf("%s",&username);
        for(j=0;j<3;j++){
            printf("%d\n",j);
            if(username==AuthUser[j]){
                key = j;
                printf("%d",key);
                break;
            }
        }
        
        if(key){
            printf("Enter the password: ");
            scanf("%s",&Password);
            if(Password==AuthPass[key]){
                    printf("Authentication Successful \n");
                    break;
                }else{
                    printf("Authentication failed, try again \n");
                }
        }else{
                printf("Try Again, Username miss match \n");
        }
    }
    }
    // for(int i=0;i<3;i++){
    //     printf("Enter the username: ");
    //     scanf("%s",&username);
    //     if(username==AuthUser[i]){
    //         printf("Enter the password: ");
    //         scanf("%s",&Password);
    //         if(Password==AuthPass[i]){
    //             printf("Authentication Successful");
    //             break;
    //         }else{
    //             printf("Authentication failed, try again");
    //         }
    //     }else{
    //         printf("Try Again, Username miss match");
    //     }
    // }
