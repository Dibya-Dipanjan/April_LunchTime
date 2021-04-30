#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,s;
        scanf("%d %d", &m,&s);
        int z;
        z = m/s;
        printf("%d\n",z);
    }
    return 0;
}
