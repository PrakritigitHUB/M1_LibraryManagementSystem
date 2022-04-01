#include "Library_Management.h"
#include <stdlib.h>
#include <conio.h>
int main()
{
    int id, choice, success;
    char name[20], authorname[20];

    while (1)
    {
        system("cls");
        printf("\n\t\t\t\t\t\t*************** MAIN MENU ***************\n");
        printf("\n\t\t\t\t\t\t1. Add Books");
        printf("\n\t\t\t\t\t\t2. Delete books");
        printf("\n\t\t\t\t\t\t3. View Books");
        printf("\n\t\t\t\t\t\t4. Search book");
        printf("\n\t\t\t\t\t\t5. Issue books");
        printf("\n\t\t\t\t\t\t6. Close Application");
        printf("\n\t\t\t\t\t\t******************************************\n");
        printf("\n\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nBookId: ");
            scanf("%d", &id);
            fflush(stdin);
            printf("\nBook name:");
            gets(name);
            printf("Authorname: ");
            fflush(stdin);
            gets(authorname);
            success = insertBook(id, name, authorname);
            break;
        case 2:
            printf("\nBookId: ");
            scanf("%d", &id);
            success = deleteBookById(id);
            break;
        case 3:
            success = viewBook();
            break;
        case 4:
            printf("\nBookId:");
            scanf("%d", &id);
            success = searchBookById(id);
            break;
        case 5:
            printf("\nBookId: ");
            scanf("%d", &id);
            success = issueBook(id);
            break;
        case 6:
            printf("\n\n\n");
            exit(1);
        default:
            printf("\n\t\t\t\t\t\tInvalid input");
            break;
        }
        if (success == pass)
        {
            printf("\nSuccessful\n");
        }
        else if (success == fail)
        {
            printf("\nUnsuccessful\n");
        }
        else
        {
            printf("\nError\n");
        }
        printf("\nPress any key to continue...");
        getch();
    }
    return 0;
}