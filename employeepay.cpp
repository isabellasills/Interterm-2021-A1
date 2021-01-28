// Isabella Sills
// 2343865
// sills@chapman.edu
// CPSC 298-09
// Assignment 1: The Basics

#include <iostream>
#include <iomanip>

using namespace std;
//This program will read in the number of hours worked in a week, then output the
//employee's gross pay, each withholding amount, and the net take-home pay. The program
//will also account for overtime, hours worked outside of the regular 40 hours per week.

int main (){
  //declaring input variable
  int hoursWorked;
  //declaring constants for the given contraints
  const int regularHours = 40;
  const double hrlyPayRate = 16.00;
  const double socialSecurity = 0.06;
  const double fedIncomeTax = 0.14;
  const double stateIncomeTax = 0.05;
  const double medicalInsuranceFee = 10.00;

  //declaring output variables
  double grossPay;
  double totalPay;
  double otPay;
  double socialSecurityFee;
  double fedIncomeTaxFee;
  double stateIncomeTaxFee;
  //double witheldPay;
  double netPay;

  cout << "Enter the number of hours worked in a week: ";
  cin >> hoursWorked;

  //if the hours worked exceed the regular hours
  if(hoursWorked > regularHours){
    //subtract hours worked from the regular hours, then multiply the hourly pay rate times 1.5
    otPay = (hoursWorked - regularHours) * (hrlyPayRate * (1.5));
    //calculate gross pay for regular hours plus overtime hours worked
    grossPay = hrlyPayRate * regularHours + otPay;

    cout << "Gross pay including overtime: $" << grossPay << endl;

  //else if hours worked do not exceed regular hours
  }else{
    //multiply hourly pay times the number of hours worked for gross pay
    grossPay = hrlyPayRate * hoursWorked;
    cout << "Gross pay (no overtime worked): $" << grossPay << endl;
  }
  //calculate & output how much social security tax deducted from gross pay
  socialSecurityFee = grossPay * 0.06;
  cout << "Social Security Tax: -$" << fixed << setprecision(2) << socialSecurityFee << endl;

  //calculate & output how much federal income tax deducted from gross pay
  fedIncomeTaxFee = grossPay * fedIncomeTax;
  cout << "Federal Income Tax: -$" << fixed << setprecision(2) << fedIncomeTaxFee << endl;

  //calculate & output how much state income tax deducted from gross pay
  stateIncomeTaxFee = grossPay * stateIncomeTax;
  cout << "State Income Tax: -$" << fixed << setprecision(2) << stateIncomeTaxFee << endl;

  //output how much medical insurance deducted from gross pay
  cout << "Medical Insurance: -$" << fixed << setprecision(2) << medicalInsuranceFee << endl;

  //calculate & output overall net pay
  netPay = grossPay - (socialSecurityFee + fedIncomeTaxFee + stateIncomeTaxFee + medicalInsuranceFee);
  cout << "Net Pay: $" << netPay << endl;

  return 0;
}
