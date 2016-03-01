#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()

{

// here is the datastring Length=1&Width=2&Height=3

	string str = "";

	cin >> str;

	string str1 = str.substr(7,1);

	string str2 = str.substr(15,1);
      
  string str3 = str.substr(24,1);

	double Number1, Number2, Number3, Number4, cost, charge, profit;

	stringstream(str1) >> Number1;

	stringstream(str2) >> Number2;

	stringstream(str3) >> Number3;

	const double COST_PER_CUBIC_FOOT = 0.23;
  const double CHARGE_PER_CUBIC_FOOT = 0.5;
	
	Number4 = Number1 * Number2 * Number3;
	
	
	Number4 = Number1 * Number2 * Number3;
  cost = Number4 * COST_PER_CUBIC_FOOT;
  charge = Number4 * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;


	cout << "Content-type: text/html" << endl << endl;

        cout << "<html><head><title>customer order</title></head><body>" << endl;
        
        cout << "Data received: "  << str << endl << "<br>";
	
	cout << "Length: "  << Number1 << endl << "<br>";

	cout << "Width: "  << Number2 << endl << "<br>";

	cout << "Height: "  << Number3 << endl << "<br>" ;

	cout << "Volume: " <<  Number4 << endl << "<br>";
	
	cout << "Cost: " << cost << endl << "<br>";
	
	cout << "Charge: " << charge << endl << "<br>";
	
	cout << "Profit: " << profit << endl << "<br>";
	
  cout << "</body></html>" << endl;

	return 0;

}