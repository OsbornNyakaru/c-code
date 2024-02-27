// LAMECK JUMA 
// EB1/61391/22

//  A C program that calculates the net pay of an employee given that the gross 
//     pay is 20000, tax rate is 16% of gross pay, NHIF is 2% of gross pay housing levy 3% of gross pay 

#include <stdio.h>
#define gross_pay 20000.0

int main() {
    // Declaration
    float tax_rate = 0.16;
    float nhif_rate = 0.02;
    float housing_levy = 0.03;
    float net_pay, tax_deduction, nhif_deduction, levy_deduction, total_deduction;
    // Calculating 
    tax_deduction = tax_rate * gross_pay;
    nhif_deduction = nhif_rate * gross_pay;
    levy_deduction = housing_levy * gross_pay;
    total_deduction = tax_deduction + nhif_deduction + levy_deduction;
    net_pay = gross_pay - total_deduction;
    // Display results
    printf("The net pay of the employee = %.1f", net_pay);
    return 0;
}