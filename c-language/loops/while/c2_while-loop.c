#include<stdio.h>
int main()
{
    int n,nfac;
    printf("enter a positive number:");
    scanf("%d",&n);
    printf("\n %d! = ",n);
    nfac=1;
    while(n>0){
        nfac =nfac * n;
        n -= 1;
    }
    printf(" %d",nfac);

}