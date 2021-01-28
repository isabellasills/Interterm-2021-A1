#include <iostream>

using namespace std;

//This program reads in a maximum room capacity & the number of people attending
//a meeting to determine if fire regulations are violated. If the number of people
//attending a meeting do not exceed the maximum capacity, the program outputs how
//many additional people can still attend. If the number of people attending a
//meeting exceed the maximum capacity, the program outputs how many people must
//leave to maintain fire regulation.

int main (){
  //declare variables needed for user input and calculations
  int numPeople;
  int maxCapacity;
  int extraPeople;
  //collect user input for room capacity and number of people attending the meeting
  cout << "The maximum room capacity: " << endl;
  cin >> maxCapacity;
  cout << "Total number of people attending this meeting: " << endl;
  cin >> numPeople;

  //if number of people does not exceed max capacity
  if(numPeople <= maxCapacity){
    //output how many people may still attend before limit is reached
    extraPeople = maxCapacity - numPeople;
    cout << "It is legal to hold this meeting by fire law regulation and " << extraPeople << " additional people may attend." << endl;

    //else if number of people exceeds max capacity
  } else {
    //output by how many people the limit is exceeded
    extraPeople = numPeople - maxCapacity;
    cout << "This meeting cannot be held by fire law regulation and " << extraPeople << " people must leave in order to meet fire regulations." << endl;
  }

  return 0;
}
