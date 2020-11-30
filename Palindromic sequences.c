#include <stdio.h>

int main()
{
    char c[100];
    scanf("%s",&c);
    int l =0;
    while(c[l]!= NULL)
    l++;
    for(int i=0,j=l-1;i<l;i++,j--)
    {
        //printf( "%s \t %d %d",c,i,j);
        if(c[i]==c[j] && i<j)
        {continue;}
        else if(c[i]!=c[j]){ printf("NO");
        return 0;}
    }
    printf("YES");
    return 0;
}
