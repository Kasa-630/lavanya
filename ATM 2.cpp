// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int amount, x1,x2,x3,x4,x5, x6, x7, x8;
    printf("enter amount:");
    scanf("%d",&amount);
    if(0<=amount<=1000000)
     {
         if(amount>2000)
         {
             x1=amount/2000;
             amount=amount%2000;
             printf("no of 2000 notes=%d\n",x1);
         }
         if(amount>500)
         {
             x2=amount/500;
            amount=amount%500;
            printf("no of 500 notes=%d\n",x2);
         }
         if(amount>200)
         {
             x3=amount/200;
             amount=amount%200;
             printf("200=%d\n",x3);
         }         
         if(amount>100)
         {
             x4=amount/100;
             amount=amount%100;
             printf("100=%d\n",x4);
         }
         if(amount>50)
         {
             x5=amount/50;
             amount=amount%50;
             printf("50:%d\n",x5);
         }
         if(amount>20)
         {
             x6=amount/20;
             amount=amount%20;
             printf("20:%d\n",x6);
         }
         if(amount>10)
         {
             x7=amount/10;
             amount=amount%10;
             printf("10:%d\n",x7);
         }
         if(amount>5)
         {
             x8=amount/5;
             amount=amount%5;
             printf("5:%d\n",x8);
             printf("change:%d",amount);
         }
         //if(amount<5&&amount>0)
        // {
         //    printf("change:%d\n", amount);
        // }
    }
    return 0;
}    
