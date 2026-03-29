#include <stdio.h>
int main ()
{
    //Declaration
    int Password_set = 2843 ;
    int Password;
    int e = 0;
    int i = 12;
    int u = 5;
    int y = 0;
    int user_choice;
    int user_ID = 451155889;
    int user_ID_Password = 159632 ;
    int user_ID_Password_to_enter;
    int new_password;
    //Normal Input and output
    printf("Password :");
    scanf("%d",&Password);
    if(Password == Password_set && Password > 0)
    {
        printf("Welcome");
    }
    //Backup Input and out using Loop
    for( e=0; Password != Password_set ; e++)
    {
        printf(" %d attempt remaining: wrong Password , Re enter :",i-e);
        scanf("%d",&Password);
        if(e>10)
        {
            printf("too many attempts");
            break;
        }
        if(Password == Password_set)
        {
            printf("\nCorrect password \nWelcome");
            break;
        }
        //user Choice
    }
    if(e>10)
    {
        printf("\nEither change your password or try after some time ");
        printf("\nSay '1' to change your password using your Android ID  and Android ID password \nSay '0' to try after some time [Not recommended time is unpredicatable]\n");
        scanf("%d",&user_choice);
    }
    if(user_choice == 1){
        printf("\nTells as your user ID,%d Password Correctly :",user_ID);
        scanf("%d",&user_ID_Password_to_enter);
        if(user_ID_Password_to_enter == user_ID_Password){
            printf("\nCorrect password");
            printf("\nEnter your new password which you might remember for next time :");
            scanf("%d",&new_password);
              Password_set=new_password;
            printf("Your new password is %d",Password_set);
            printf("Welcome");
        }
        for(y=0;user_ID_Password_to_enter!=user_ID_Password;y++){
                printf("%d attempts remainging Wrong Android ID password ",u-y);
                printf("\n WARNING - IF YOU ENTER YOUR ANDROID PASSWORD WRONG %d YOU DEVICE MIGHT LOCK AND YOU HAVE TO SHOP OR PAY HUGE AMOUNT \n",u-y);
                printf("\nTells as your user ID,%d Password Correctly again :",user_ID);
        scanf("%d",&user_ID_Password_to_enter);
                if(y>4){
                    printf("\nyour device has been locked permanently considering you as an Thread to privacy of this phone user");
                    break;

                }
                if(user_ID_Password_to_enter==user_ID_Password){
                    printf("\nCorrect password");
            printf("\nEnter your new password which you might remember for next time :");
            scanf("%d",&new_password);
              Password_set=new_password;
            printf("Your new password is %d",Password_set);
            printf("\nWelcome");
                    break;
                }


        }

    }
    if(user_choice == 0){
        printf("Have a good day come after sometime");
    }
    return 0;
}
