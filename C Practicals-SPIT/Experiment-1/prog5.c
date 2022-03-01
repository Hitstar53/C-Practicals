#include<stdio.h>
#include<math.h>
int main()
{
    double amt = 500000,rate = 3.5,yrs = 10;
    double si,ci1,ci2,ci3,ci4,ci5;

    si = amt * rate * yrs / 100;
    ci1 = amt*pow((1+rate/100),yrs) - amt;
    ci2 = amt*pow((1+(rate/2)/100),2*yrs) - amt;
    ci3 = amt*pow((1+(rate/4)/100),4.0*yrs) - amt;
    ci4 = amt*pow((1+(rate/12)/100),12*yrs) - amt;
    ci5 = amt*pow((1+(rate/365)/100),365*yrs) - amt;

    printf("Simple interest on Rs. 500000.00 in 10 years = Rs. %.2f\n", si);
    printf("Compound interest on Rs. 500000.00 in 10 years annually = Rs. %.2f\n", ci1);
    printf("Compound interest on Rs. 500000.00 in 10 years semi-annually = Rs. %.2f\n", ci2);
    printf("Compound interest on Rs. 500000.00 in 10 years quarterly = Rs. %.2f\n", ci3);
    printf("Compound interest on Rs. 500000.00 in 10 years monthly = Rs. %.2f\n", ci4);
    printf("Compound interest on Rs. 500000.00 in 10 years daily = Rs. %.2f\n", ci5);
    
    return 0;
}