#include <iostream>
#include <string>
#include <fstream> 
using namespace std;
 
int main ()
{
   // local variable declaration:
 char grade;
 ofstream outputFile;
  
 outputFile.open("Grade.txt"); 
  
  
  cout << "What is your grade? ";
  cin >> grade;
 
   switch(grade)
   {
   case 'A' :
     case 'a' :
      cout << "Excellent!" << endl;
      cout << "Your grade is an A" << endl;
      break;
   case 'B' :
     case 'b' :
       cout << "Well done" << endl;
       cout << "Your grade is a B" << endl;
       break;
   case 'C' :
     case 'c' :
      cout << "Well done" << endl;
      cout << "Your grade is a C" << endl;
      break;
   case 'D' :
     case 'd':
      cout << "You passed" << endl;
       cout << "Your grade is a D" << endl; 
      break;
   case 'F' :
     case 'f' :
      cout << "Better try again" << endl;
        cout << "Your grade is an F" << endl;
      break;
   default :
      cout << "Invalid grade" << endl;
   }
   
  
  outputFile << grade << endl;
  
  outputFile.close();
 
   return 0;
}