/*Create a registration form application by taking the details like username, address,
phone number, email along with password and confirm password (should be same as
password).Ensure that the password is of 8 characters with only numbers and
alphabets. Take such details for 5 users and display the details. In place of password
display “****”. (Use Structures). */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int n = 5, i = 0;

struct detail
{
    char username[50];
    char address[400];
    char pass[10];
    char email[100];
    int phone;
} d[5];

int main()
{
    int len;
    printf("Enter Details of 5 students\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter your username\n");
        scanf("%s", (d[i]).username);
        printf("Enter your address\n");
        scanf("%s", d[i].address);
        printf("Password\n");
        char temp_pass[10] = "";
        scanf("%s", temp_pass);
        int len = strlen(temp_pass);
        /*while (true)
        {
            if ((len == 8) )
            {
                strcpy(d[i].pass,temp_pass);
                break;
            }
            else
            {
                printf("Invalid password enter again\n");
                scanf("%s", temp_pass);
            }
        */
        printf("Enter email id\n");
        scanf("%s", d[i].email);
        printf("Enter phone number");
        scanf("%d", &d[i].phone);
    }

    for (i = 0; i < n; i++)
    {

        printf("Username of number %d student %s\n", i + 1, d[i].username);
        printf("Address of number %d student %s\n", i + 1, d[i].address);
        printf("Password of number %d student %s\n", i + 1, "********");
        printf("Email of number %d student %s\n", i + 1, d[i].email);
        printf("Phone of number %d student %s\n", i + 1, d[i].phone);
    }

    return 1;
}