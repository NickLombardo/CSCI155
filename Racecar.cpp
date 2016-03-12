// RACECARRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
// Setting up variables
double distance, time, speed, laps;
ofstream outputFile;
  
// Get the time
cout << "For how much time, in minutes, was the car moving? ";
cin >> time;
  
// Get the average speed
cout << "What was the average speed of the car? ";
cin >> speed;

// open a file
outputFile.open("Miles.txt");
  
// Calculate the distance traveled
distance = speed * (time / 60);

// Calculate the number of laps traveled
laps = distance / 2.5;

// write to the file 
outputFile << distance << endl;

// Display the distance
cout << "The number of miles traveled is " << distance << endl;
cout << "The number of laps traveled is " << laps << endl;

// close the file
outputFile.close();
return 0;
}