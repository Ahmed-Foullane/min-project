#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct 
{
    char firstName[30], lastName[30], emailAdress[30], phoneNumer[30];
} Contacts;

Contacts AllContacts[200];
int currentIndex = 0;

void add() {
    printf("\nEnter your first name: ");
    scanf("%s", AllContacts[currentIndex].firstName);
    printf("Enter your last name: ");
    scanf("%s", AllContacts[currentIndex].lastName);
    printf("\nEnter your email: ");
    scanf("%s", AllContacts[currentIndex].emailAdress);
    printf("Enter your phone number: ");
    scanf("%s", AllContacts[currentIndex].phoneNumer);
    currentIndex++;
}

void read() {
    for (int i = 0; i < currentIndex; i++) {
        printf("\nUser: %d", i + 1);
        printf("\nFirst name: %s", AllContacts[i].firstName);
        printf("\nLast name: %s", AllContacts[i].lastName);
        printf("\nPhone number: %s", AllContacts[i].phoneNumer);
        printf("\nEmail address: %s", AllContacts[i].emailAdress);
        printf("\n-------------------------------------------");
    }
}

void delet() {
    char firstName[30], lastName[30];
    printf("\nEnter the first name: ");
    scanf("%s", firstName);
    printf("\nEnter the last name: ");
    scanf("%s", lastName);

    for (int i = 0; i < currentIndex; i++) {
        if (strcmp(AllContacts[i].firstName, firstName) == 0 && strcmp(AllContacts[i].lastName, lastName) == 0) {
            for (int j = i; j < currentIndex - 1; j++) {
                AllContacts[j] = AllContacts[j + 1];
            }
            currentIndex--;
            printf("\nUser deleted successfully.\n");
            return;
        }
    }
    printf("\nUser not found.\n");
}

void edit(){
  char firstName[30], lastName[30];
    printf("\nEnter the first name: ");
    scanf("%s", firstName);
    printf("\nEnter the last name: ");
    scanf("%s", lastName);
    for (int i = 0; i < currentIndex; i++)
    {
      if (strcmp(AllContacts[i].firstName, firstName) == 0 && strcmp(AllContacts[i].lastName, lastName) == 0) {
        printf("\nenter the new first name: ");
        scanf("%s",&AllContacts[i].firstName);
        printf("\nenter the new last name: ");
        scanf("%s",&AllContacts[i].lastName);
        printf("\nenter the new phone number: ");
        scanf("%s",&AllContacts[i].phoneNumer);
        printf("\nenter the new email adress: ");
        scanf("%s",&AllContacts[i].emailAdress);
            return;
        }
    }
}

void search(){
  char firstName[30], lastName[30];
    printf("\nEnter the first name: ");
    scanf("%s", firstName);
    printf("\nEnter the last name: ");
    scanf("%s", lastName);
    for (int i = 0; i < currentIndex; i++)
    {
      if (strcmp(AllContacts[i].firstName, firstName) == 0 && strcmp(AllContacts[i].lastName, lastName) == 0) {
        
        printf("\nUser: %d", i + 1);
        printf("\nFirst name: %s", AllContacts[i].firstName);
        printf("\nLast name: %s", AllContacts[i].lastName);
        printf("\nPhone number: %s", AllContacts[i].phoneNumer);
        printf("\nEmail address: %s", AllContacts[i].emailAdress);
        printf("\n-------------------------------------------");
            return;
        }
    }
}

int main() {
  
    int choice = 10;
    while (choice != 0) {
        printf("\n1. Add user");
        printf("\n2. Show all users");
        printf("\n3. Delete user");
        printf("\n4. edit user");
        printf("\n5. serach for user");
        printf("\n0. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

       system("@cls||clear");

        switch (choice) {
            case 1: 
                add();
                break;
            case 2: 
                read();
                break;
            case 3: 
                delet();
                break;
            case 4: 
                edit();
                break;
            case 5: 
                search();
                break;
            case 0: 
                printf("\nExiting the program...\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }
    return 0;
}
