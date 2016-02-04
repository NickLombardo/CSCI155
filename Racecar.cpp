// RACECARRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// Setting up variables
double distance, time, speed, laps;
  
// Get the time
cout << "For how much time, in minutes, was the car moving? ";
cin >> time;
  
// Get the average speed
cout << "What was the average speed of the car? ";
cin >> speed;

// Calculate the distance traveled
distance = speed * (time / 60);

// Calculate the number of laps traveled
laps = distance / 2.5;

// Display the distance
cout << "The number of miles traveled is " << distance << endl;
cout << "The number of laps traveled is " << laps << endl;
return 0;
}