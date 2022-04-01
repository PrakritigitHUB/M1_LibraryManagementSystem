#ifndef __LIBRARY_MANAGEMENT_SYSTEM_H__
#define __LIBRARY_MANAGEMENT_SYSTEM_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int book_id;
    char book_name[20];
    char author_name[20];
} book;

typedef enum
{
    pass = 1,
    fail = 0
} boolean;

boolean searchBookById(int id);

boolean insertBook(int id, char name[], char author[]);

boolean deleteBookById(int id);

boolean issueBook(int id);

boolean viewBook(void);

#endif
