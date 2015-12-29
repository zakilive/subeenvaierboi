#include<stdio.h>
#include<string.h>
int main()
{
    char str1[15];
    char str2[15];
    int retur;

    strcpy(str1,"Zaki!s");
    strcpy(str2,"Live");

    retur=strcmp(str1,str2);

    if(retur<0)
    {
        printf("str1 is less than str2");
    }
    else if(retur>0)
    {
        printf("str2 is greater than str1\n");
        printf("%d",retur);
    }else
    {
        printf("str1 is equal to str2");
    }

    return (0);
}
