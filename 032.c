#include<stdio.h>

/*
Basic Salary
Definition: The core component of an employee's salary, fixed and agreed upon in the employment contract. It forms the foundation for calculating most allowances and deductions. 

Dearness Allowance (DA)
Definition: A percentage of the basic salary provided to employees to offset the impact of inflation on their cost of living.

House Rent Allowance (HRA)
Definition: A financial benefit provided to employees to cover part of their rental expenses for accommodation.

Travel Allowance (TA)
Definition: A fixed amount or reimbursement provided to employees for daily travel expenses incurred while commuting to work.

Provident Fund (PF): 
A mandatory retirement savings scheme where both the employee and employer contribute a fixed percentage of the basic salary.

Income Tax (IT): Tax levied by the government based on the employee's gross income.
*/

int main(){
	float salary,dearness_allowance,house_rent_allowance,travel_allowance,provident_fund,income_tax;
	printf("Enter your salary,dearness allowance,house rent allowance,travel allowance,provident fund and income tax:");
	scanf("%f%f%f%f%f%f",&salary,&dearness_allowance,&house_rent_allowance,&travel_allowance,&provident_fund,&income_tax);
    printf("Net salary:%.2f",salary+dearness_allowance+house_rent_allowance+travel_allowance-provident_fund-income_tax);
    return 0;
}

