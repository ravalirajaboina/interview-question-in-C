#include <stdio.h>
void main()
{
    int a=10;
    printf("a=%d\n",a);
    int *admin=&a;
    printf("*admin=%d \t admin=%d\n",*admin,admin);
    *admin=0;
   printf("after report a=%d\n",a);
}
    
