#include "head.h"
void listbooks()
{
    
    printf ("Enter author name : ");
    scanf ("%s",ar_nm);
    for (i=0; i<keepcount; i++)
    {
        if (strcmp(ar_nm, l[i].author) == 0)
        printf ("%s %s %d %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
    }
}