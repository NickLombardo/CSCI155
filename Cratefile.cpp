#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
  //Constants for cost and amount charged
  const double COST_PER_CUBIC_FOOT = 0.23;
  const double CHARGE_PER_CUBIC_FOOT = 0.5;
  ofstream outputFile;
  
  //variables 
  double length, // the crate's length
  width, // the crates's width
  height, // the crate's height
  volume, // the crate's volume
  cost, // the cost to build the crate
  charge, // the customer charge for the crate
  profit; // the profit made on the crate
  
  // Set the desired output formatting for numbers
  cout << setprecision(2) << fixed << showpoint;
  
  // Prompt the user for the length, width, and height
  cout << "Enter the dimensions of the crate (in feet):\n";
  cout << "Length: ";
  cin >> length;
  cout << "Width: ";
  cin >> width; 
  cout << "Height: ";
  cin >> height;
  
  // open the file
  outputFile.open("Crate.txt");

 
  // calculate the crates volume, the cost to produce it,
  // the charge to the customer
  volume = length * width * height;
  cost = volume * COST_PER_CUBIC_FOOT;
  charge = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;
  
  // display the calculated data
  cout << "The volume of the crate is ";
  cout << volume << " cubic feet. \n";
  cout << "Cost to build: $" << cost << endl;
  cout << "Charge to customer: $" << charge << endl;
  cout << "Profit: $" << profit << endl;
  
  // Write to the file
  outputFile << profit << endl;
    
  // close the file
  outputFile.close();
  return 0;
}

  
    
    