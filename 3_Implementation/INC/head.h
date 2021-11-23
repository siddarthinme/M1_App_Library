#ifndef _head_H
#define _head_H
#include <stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
    char bk_name[30];
    char author[30];
    int pages;
    float price;
};

    struct library l[100];
    char ar_nm[30],bk_nm[30];
    int i,j, keepcount;


    void addbook();
    void displayinfo();
    void listbooks();
    void searchbook();
    void countbook();
#endif
