#include "head.h"
#include<stdio.h>

    
int main()
{
    i=j=keepcount = 0;

while(j!=6)
{
    printf("\n\n1. Add book information\n2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the title of specified book\n");
    printf("5. List the count of books in the library\n");
    printf("6. Exit");

    printf ("\n\nEnter one of the above : ");
    scanf("%d",&j);
}

switch (j)
{
    case 1: addbook();
    break;
    case 2: displayinfo();
    break;
    case 3: listbooks();
    break;
    case 4: searchbook();
    break;
    case 5: countbook();
    break;
    case 6: exit (0); 

}
return 0;
}