//EB1/66812/23
// Denis Joshua
/*A program that calculates the net pay of an employee given that the gross pay is 20000,
tax rateis 16% of gross pay ,NHIF is 2% of gross pay,housing levy 3% of gross pay*/
#include <stdio.h>
#define gross_pay 20000

int main() {
    // declaration
    float tax_rate = 0.16;
    float NHIF_rate = 0.02;
    float housing_levy = 0.03;
    float net_pay, tax_deduction, NHIF_deduction, levy_deduction, total_deduction;
    // calculation
    tax_deduction = tax_rate * gross_pay;
    NHIF_deduction = NHIF_rate * gross_pay;
    levy_deduction = housing_levy * gross_pay;
    total_deduction = tax_deduction + NHIF_deduction + levy_deduction;

    net_pay = gross_pay - total_deduction;
    // display
    printf("The net pay of the employer = %.1f", net_pay);
    return 0;
}