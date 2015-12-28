#include<stdio.h>
int main()
{

    char country[200];
    int length;
    while(1==scanf("%s",country))
    {
        length=string_length(country);
        printf("length:%d\n",length);
    }
    return 0;
}

int string_length(char stro[])
{

    int i;
    i=0;

    while(stro[i]!='\0'){
    i++;
}
return i;
}
