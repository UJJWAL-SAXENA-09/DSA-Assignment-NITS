/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int digi_check(char *ip_part)
{
    while(*ip_part)
    {
    if(!isdigit(ip_part))
    printf("\nEntered ip is Not Valid\n");
    ip_part++;
    }
    return 1;
}
void check_validity(char ip[])
{
    
    int n,dot=0;
    char *ip_part;
    if(ip==NULL)
    printf("\nEntered ip is Not Valid\n");
    
    ip_part=strtok(ip,".");
    if(ip_part==NULL)
    printf("\nEntered ip is Not Valid\n");
    
    while (ip_part)
    {
    
    if(!digi_check(ip_part))
    printf("\nEntered ip is Not Valid\n");
    n=atoi(ip_part);
    
    if(n>=0 && n<=255)
    {
     ip_part=strtok(ip,".");
     if(ip_part!=NULL)
     {
         dot++;
     }
     else
     {
         printf("\nEntered ip is Not Valid\n");
     }
    }
    }
    
    if(dot!= 3)
    {
        printf("\nEntered ip is Not Valid\n");
    }
    
    
    printf("\nEntered ip is Valid\n");
}
int main()
{
    printf("\nEnter your ip address\n");
    char ip[100];
    fgets(ip, 100, stdin);
    
   
    check_validity(ip);
   

    return 0;
}

