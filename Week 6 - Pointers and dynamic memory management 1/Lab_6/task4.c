#include <stdio.h>
//declare a structure to return different multiple values
struct sumprod{
int sum;
int prod;
};
struct sumprod calc(int n);
int main(void)
{
    struct sumprod result;
    int n;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    result = calc(n);
    printf("Sum is %d\nProduct is %d\n",result.sum,result.prod);
    return 0;
}

struct sumprod calc(int n)//return type is struct
{
    struct sumprod s;
    s.sum = 0;
    s.prod = 1;
    int values[n];
    for(int i = 0;i < n;i ++)
    {
        scanf("%i", &values[i]);
        s.sum+=values[i];
        s.prod*=values[i];
    }
    return s;
}
