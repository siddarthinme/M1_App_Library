#include "head.h"
void displayinfo()
{
    
    printf("you have entered the following information\n");
    for(i=0; i<keepcount; i++)
    {
        printf ("book name = %s",l[i].bk_name);

        printf ("\t author name = %s",l[i].author);

        printf ("\t  pages = %d",l[i].pages);

        printf ("\t  price = %f",l[i].price);
    }
}