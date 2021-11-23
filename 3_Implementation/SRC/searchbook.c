#include "head.h"
void searchbook()
{
    printf ("Enter book name : ");
    scanf ("%s",bk_nm);
    for (i=0; i<keepcount; i++)
    {
        if (strcmp(bk_nm, l[i].bk_name) == 0)
        printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
    }
    
}