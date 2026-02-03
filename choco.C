#include <stdio.h>
void main()
{
    int big;
    int small;
    int goal;
    printf("enter the no of brick big\n");
    scanf("%d",&big);
    printf("enter the no of brick small\n");
    scanf("%d",&small);
    printf("enter the goal length\n");
    scanf("%d",&goal);
    int req=goal/5;
    if(req<=big)
    {
        int rem=goal-(req*5);
        if(rem<=small)
        {
           printf("true");
        }
        else
        {
            printf("flase");
        }
    }
    else
    {
        int rem=goal-(big*5);
        
          if(rem<=small)
            {
                printf("true");
            }
            else
            {
                printf("flase");
            }
    }
}
       