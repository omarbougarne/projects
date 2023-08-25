#include <stdio.h>
#include <stdlib.h>

#define MAX_CONTACTS 100 // Define the maximum number of contacts

struct Contact {
    char name[50];
    int age;
    int phoneNumber;
    int dateOfBirth;
    char address[50];
};

int main() {
    struct Contact contacts[MAX_CONTACTS]; // Array to store contacts
    int numContacts = 0; // Counter for the number of contacts

    printf("Welcome to the phone book\n\n");
    printf("Menu\n");
    printf("Press 1 to add contact\n");
    printf("Press 2 to see the entered contacts\n");
    printf("Press 3 to exit the phone book\n");

    int choice;
    printf("Enter: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int numToAdd;
        printf("Enter the number of contacts to add: ");
        scanf("%d", &numToAdd);

        for (int i = 0; i < numToAdd; i++) {
            struct Contact newContact;

            printf("----------\n");
            printf("Name: ");
            scanf("%s", newContact.name);
            printf("Age: ");
            scanf("%d", &newContact.age);
            printf("Phone Number: ");
            scanf("%d", &newContact.phoneNumber);
            printf("Date Of Birth: ");
            scanf("%d", &newContact.dateOfBirth);
            printf("Address: ");
            scanf("%s", newContact.address);
            printf("----------\n");

            contacts[numContacts++] = newContact;
        }
    } else if (choice == 2) {
        printf("Enter the number of the contact to be viewed: ");
        int num;
        scanf("%d", &num);

        if (num >= 1 && num <= numContacts) {
            struct Contact contact = contacts[num - 1];

            printf("----------\n");
            printf("Name: %s\n", contact.name);
            printf("Age: %d\n", contact.age);
            printf("Phone Number: %d\n", contact.phoneNumber);
            printf("Date Of Birth: %d\n", contact.dateOfBirth);
            printf("Address: %s\n", contact.address);
            printf("----------\n");
        } else {
            printf("Invalid contact number\n");
        }
    } else if (choice == 3) {
        printf("Are you sure you want to quit?\n");
        printf("Press 1 if yes\n");
        printf("Press 2 if no\n");

        int ans;
        printf("Enter: ");
        scanf("%d", &ans);

        if (ans == 1) {
            printf("The phone has been closed\n");
            printf("Have a good day\n");
        } else if (ans == 2) {
            printf("The phone book has not been closed\n");
            printf("You can continue\n");
        } else {
            printf("Invalid choice\n");
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
