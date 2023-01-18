#include <iostream>
using namespace std; 

  int main() { /*
	int i = 0;
	string username = "masha", u1;
	do {
		i++;
		cin >> u1;
		cout << u1;
		if (u1 == username) {
			exit(0);
		}
	} while (i < 5);
	cout << "out of attemps"; 
	int i = 0; 
	do {
		i++;
		cout << i << "" << i * i * i;
	} while (i < 10); */
	
	// Local variable declaration:
	  string myname;


	  // do loop execution
	  do {
		  cout << "Enter my name" << endl;
		  cin >> myname;
		  if (myname == "no") {
			  cout << "yes!"; };
	  } while (myname != "Marija");

	return 0;
}
