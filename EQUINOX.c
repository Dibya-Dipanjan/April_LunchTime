#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      long long int n,a,b;
    long long  int sar = 0;
    long long  int anu = 0;
        scanf("%lld %lld %lld",&n,&a,&b);
        char s[100000];
        while(n--)
        {
            scanf("%s",s);
        
        if(s[0]=='E'||s[0]== 'Q'|| s[0]=='U'||s[0]=='O'||s[0]=='I'|| s[0]=='N'||s[0]=='X')
            sar=sar+a;
        else
            anu=anu+b;
        }
        if(sar>anu)
            printf("SARTHAK\n");
        if(sar<anu)
            printf("ANURADHA\n");
        if(sar == anu)
            printf("DRAW\n");
    }
    

return 0;
}