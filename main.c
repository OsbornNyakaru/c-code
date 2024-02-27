// OSBORN NYAKARU
// EB1/62583/22
// ***************************************************************************
/*A program calculating the net pay of an employee given a gross pay of 20000
  Tax rate is 16% of the gross pay, NHIF is 2% of gross pay, housing levy of 3% of gross pay*/
// ***************************************************************************
#include <stdio.h>
#define gross_pay 20000.0

int main() {
    // Declaration and initialisation
    float net_tax = 0.16 * gross_pay;
    float net_nhif = 0.02 * gross_pay;
    float levy = 0.03 * gross_pay;
    float net_deductions, net_pay;
    // Computation 
    net_deductions = net_tax + net_nhif + levy;
    // Computing the net pay 
    net_pay = gross_pay-net_deductions;

    // Displaying output  
    printf("The net pay of an employee with a gross pay of %.1f is %.1f\n", gross_pay, net_pay);

    return 0;
}