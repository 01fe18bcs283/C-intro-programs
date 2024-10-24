#include<stdio.h>
int main()
{
    float kgs,lbs;
    printf("enter the weight in kgs:");
    scanf("%f", &kgs);
    while(kgs!=0.0){
        lbs=kgs*2.2;
        printf("\n %6.2f kilograms=%6.2f pounds\n",kgs, lbs);
        printf("enter the weight in kgs(0 for end):");
        scanf("%f", &kgs);

    }
    printf("program ends here");
}