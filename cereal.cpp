// Isabella Sills
// 2343865
// sills@chapman.edu
// CPSC 298-09
// Assignment 1: The Basics

#include <iostream>

using namespace std;

//This program collects user input for the weight of breakfast cereal in ounces.
//It then calculates & outputs the given weight from ounces to metric tons
//as well as the number of boxes needed to yield one metric ton of cereal.

int main (){
  const double ton = 35273.92;
  double cerealInOunces;
  double weightCalculatedInTons;
  double numBoxesForTon;

//user input collecting the weight of cereal in ounces
  cout << "Input weight of a package of breakfast cereal (in ounces): ";
  cin >> cerealInOunces;

//converting & outputting weight from ounces to tons
  weightCalculatedInTons = cerealInOunces / ton;
  cout << "The weight of cereal given in ounces converted to metric tons is: " << weightCalculatedInTons << endl;

//calculating & outputting number of boxes needed to amount to one metric ton of cereal
  numBoxesForTon = ton / cerealInOunces;
  cout << "The number of boxes needed for one metric ton of cereal is: " << numBoxesForTon << endl;

  return 0;
}
