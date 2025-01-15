#include <stdio.h>
#include <string.h>

void welcome_Message();
void head_Message();
void print_Message_in_Center(char title[40]);
void headMessage_andCenter(char title[40]);
void updateCredential();
void login();

int main() {
    char title[40] = "Something";

    headMessage_andCenter(title);
    welcome_Message();
    login();

    return 0;
}

void welcome_Message() {
    printf("         <~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>         \n");
    printf("                                                                           \n");
    printf("               <~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>               \n");
    printf("               <~>                WELCOME                <~>               \n");
    printf("               <~>                  TO                   <~>               \n");
    printf("               <~>                VEHICLE                <~>               \n");
    printf("               <~>              MANAGEMENT               <~>               \n");
    printf("               <~>                SYSTEM                 <~>               \n");
    printf("               <~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>               \n");
    printf("                                                                           \n");
    printf("         <~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>         \n\n\n\n\n\n");

    printf("Enter any key to continue. . . . .\n\n\n\n\n");
}

void headMessage_andCenter(char title[40]) {
    head_Message();
    print_Message_in_Center(title);

}

void head_Message() {
    printf("<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("<~><~><~><~>                                                   <~><~><~><~>\n");
    printf("<~><~><~><~>             Vehicle Management System             <~><~><~><~>\n");
    printf("<~><~><~><~>                                                   <~><~><~><~>\n");
    printf("<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n\n\n");
}

void print_Message_in_Center(char title[40]) {
    int length = strlen(title); // Calculate the length of the title
    int spacing = 42 - length; // Calculate spaces for centering (frame width is 80)

    printf("<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n");
    printf("                                                                           \n");

    // Print spaces for centering
    for (int i = 0; i < spacing; i++) {
        printf(" ");
    }

    printf("%s\n", title); // Print the title
    printf("                                                                           \n");
    printf("<~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~><~>\n\n\n");
}

void updateCredential(){

    char userName[40];
    printf("New Username: ");
    gets(userName);

    char userPassword[40];
    printf("New Password: ");
    gets(userPassword);

    printf("Your password has been changed successfully.");

}


void login(){

    char storedUsername[40], storedPassword[40];


    char userPassword[40];
    char userName[40];

    printf("Enter Username: ");
    gets(storedUsername);
    printf("Enter Password: ");
    gets(storedPassword);


    updateCredential(storedUsername, storedPassword);


    if (strcmp(userName, storedUsername) == 0 && strcmp(userPassword, storedPassword) == 0) {
        printf("Login successful.\n");
    }
}



