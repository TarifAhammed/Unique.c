#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
 char a[n];
 scanf("%s",a);
 int f[26]={0};
 for(int i=0;i<n;i++)

{
    int index=a[i]-'a';
    f[index]=1;
}
for(int i=0;i<26;i++)
{
    if(f[i]==1)
    {
        printf("%c",i+'a');
    }
}
}