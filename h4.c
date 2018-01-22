#include <stdio.h>
#include<math.h>
int main()
{
    int a,i;
    printf("enter the no");
    scanf("%d",&a);
    for(i=2;i<=100;i++)
    {
        if(a%i==0)
        {
            printf("not prime");
            break;
        }
        else
        {
            printf(" prime");
            break;
        }
    }

    return 0;
}
