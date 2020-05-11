#include<stdio.h>
#include<stdlib.h>

int main()
{
    int floor=0,ceil=0,max=0,count=0,n=0,i=0,tmp=0; 

    while(scanf("%d %d", &floor, &ceil)!=EOF)
    {
        printf("%d %d ", floor, ceil);

        if(floor>ceil)
        {
            tmp = floor;
            floor = ceil;
            ceil = tmp;
        }

        max=0;

        for(i=floor;i<=ceil;i++)
        {
            n=i;
            count=1;
            while(n!=1)
            {
                if(n%2==0) n = n/2;
                else n = 3*n+1;
                count++;
            }

            if(max<count) max = count;
        }

        printf("%d\n",max);
    }

    return 0;
}