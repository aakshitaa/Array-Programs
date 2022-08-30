#include <stdio.h>
int main()
{
    char str[500];
    printf("Enter the string in upper case: \n");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("Lower case string: %s\n", str);
    return 0;
}
