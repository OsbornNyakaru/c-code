/*A program calculating the net pay of an employee given a gross pay of 20000
  Tax rate is 16% of the gross pay
    NHIF is 2% of gross pay
    Housing levy of 3% of gross pay*/

#include <stdio.h>
#define gross_pay 20000.0

int main() {
    // Declaration 
    float tax_rate = 0.16;
    float nhif_rate = 0.02;
    float housing_levy = 0.03;
    float net_pay, tax_deduction, nhif_deduction, levy_deduction, total_deduction;

    // Calculation
    tax_deduction = tax_rate * gross_pay;
    nhif_deduction = nhif_rate * gross_pay;
    levy_deduction = housing_levy * gross_pay;
    total_deduction = tax_deduction + nhif_deduction + levy_deduction;

    // Net pay 
    net_pay = gross_pay - total_deduction;

    // Display result
    printf("The net pay of an employee with a gross pay of %.1f is Ksh. %.0f", gross_pay, net_pay);

    return 0;
}