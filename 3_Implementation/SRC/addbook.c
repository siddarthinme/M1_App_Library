#include "head.h"
void addbook()
{
    
    printf ("Enter book name = ");
    scanf ("%s",l[i].bk_name);

    printf ("Enter author name = ");
    scanf ("%s",l[i].author);

    printf ("Enter pages = ");
    scanf ("%d",&l[i].pages);

    printf ("Enter price = ");
    scanf ("%f",&l[i].price);
    keepcount++;
}