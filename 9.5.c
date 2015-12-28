#include<stdio.h>
int main()
{
    char country[100];
    int length;
    while(1==scanf("%s",country))
    {
        length=string_length(country);
        printf("lenght:%d\n",length);
    }
    return 0;
}

int string_length(char str[])
{
    int i,length=0;
for(i=0;str[i]!='\0';i++)
{
    length++;

}

return length;
}
