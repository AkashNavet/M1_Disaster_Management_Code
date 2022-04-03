#include <stdio.h>
#include <limits.h>
int add(int a,int b)
{   
    int sum = a+b;
    if (sum > INT_MAX  )
    {
        return(-1);
    }
    else if(sum < INT_MIN )
    {
        return(-2);
    }
    else
    {
        return(sum);
    }
}

int main()
{
    int a,b,s;
    printf("Enter the no to be added");
    scanf("%d %d",&a,&b);
    s=add(a,b);
    printf("Sum is %d",s);
}