// This progam calculates the user's pay. 
#include <iostream>
#include <fstream>
using namespace std;

 
int main() { 
//setting up variables
double hours, rate, grosspay, netpay, ftax, stax; 
ofstream outputFile;
 
// Get the number of hours worked. 
cout << "How many hours did you work? "; 
cin >> hours; 
 
// Get the hourly pay rate. 
cout << "How much do you get paid per hour? "; 
cin >> rate; 
  
// Get the percent paid to federal tax.
cout << "What perecnt do you pay to federal tax? ";
cin >> ftax;
  
// Get the percent paid to state tax.
cout << "What percent to you pay to state tax? ";
cin >> stax;

// Open a file
outputFile.open("Payroll.txt");

// Calculate the gross pay. 
grosspay = hours * rate; 

// Calculate the net pay.
netpay = (hours * rate) * ((100-ftax)/100) * ((100-stax)/100);
  
// Write to the file
outputFile << grosspay << endl;
 
// Display the pay. 
cout << "Your gross pay is $" << grosspay << endl;
cout << "Your net pay is $" << netpay << endl;

// close the file
outputFile.close();
return 0; 
}