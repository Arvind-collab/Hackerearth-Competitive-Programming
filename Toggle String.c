#include <stdio.h>
#include <ctype.h>
int main()
{
    char c[100];
    scanf("%s",&c);
    for(int i=0;i<sizeof(c);i++)
    if(islower(c[i])) c[i]=toupper(c[i]);
    else if (isupper(c[i])) c[i]=tolower(c[i]);
    printf("%s",c);
    
    return 0;
}
