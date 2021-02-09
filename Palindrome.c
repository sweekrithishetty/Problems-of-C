#include<stdio.h>
int main()
{
    int n,result =0,q,remainder;
    printf("please enter the number: ");
    scanf("%d",&n);

    q=n;
    while(q!=0)
        {
        remainder=q%10;
        result = result*10 + remainder;
        q = q/10;
        }
    if(result == n)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");
    return 0;
}
