#include <iostream>

//#include "array.h"
#include "array.cpp"

#include "array_exception.h"

using namespace std;

int main() {
	Array<int> arr(10);
	int n;
	try {
		cout << arr[arr.getSize()];
		throw "Out of bounds exception not thrown";
	} catch (ArrayException e) {
		cout << "Caught expected ArrayException: " << e << endl;
	}

	for (int i = 0; i < 7; i++)
		arr += i;

	cout << "arr:\n" << arr << endl;
	
	Array<int> arrI = arr;
	cout << "arrI:\n" << arrI << endl;
	
	arr += 9;
	cout << "arrI:\n" << arrI << endl;
	
	arrI += 2;
	cout << "arr:\n" << arr << endl;
	
	Array<int> arrG(10);
	for (int i = 0; i < 6; i++)
		arrG += i;
	cout << "arrG:\n" << arrG << endl;
		
	arrI = arrG;
	cout << "arrI:\n" << arrI << endl;
	arrG += 14;
	cout << "arrI:\n" << arrI << endl;	
	
	Array<int> arrK(10);	
	for (int i = 19; i < 25; i++)
		arrK += i;
	
	cout << "arrG:\n" << arrG << endl;
	cout << "arrK:\n" << arrK << endl;
	arr = arrK + arrG;
	cout << "arr:\n" << arr << endl;
	
	arrI = arrI+7;
	cout << "arrI + 7 :\n" << arrI << endl;

	cout << "arrI + arrG:\n" << arrI + arrG << endl;
	
	Array<int> arrO;
	if(arrO.isEmpty())
	cout << "Array is empty\n";
	else
	cout << "Array is Not empty\n";
	
	cout << "Enter an int to look up in the array: ";
	cin >> n;
	if(arr.contains(n)==true)
	cout << "Array contains " << n << endl;
	else
	cout << "Array does not contain " << n << endl; 
	
	cout << "Enter an int to look up it's location in the array: ";
	cin >> n;
	if(arr.find(n) >= 0)
	cout << "The int is located at position: " << arr.find(n)  << " in the array" << endl;
	else
	cout << "Array does not contain " << n << endl; 
	
	
	
	Array<string> strArr;
	string str;
	strArr += "nike";
	strArr += "adidas";
	strArr += "puma";
	strArr += "armani";
	cout << "strArr:\n" << strArr << endl;
	
	cout << "Enter a string to look up in the array: ";
	cin >> str;
	if(strArr.contains(str))
	cout << "Array contains " << str << endl;
	else
	cout << "Array does not contain " << str << endl; 
	
	cout << "Enter a string to look up it's location in the array: ";
	cin >> str;
	if(strArr.find(str) >= 0)
	cout << "The string is located at position: " << strArr.find(str)  << " in the array" << endl;
	else
	cout << "Array does not contain " << str << endl; 
	
	Array<double> dblArr;
	double d;
	for (int i = 0; i < 10; i++)
        dblArr += i + 0.1 ;
	
	cout << "\ndblArr:\n" << dblArr << endl;
	
	dblArr += 5.1;
	dblArr += 9.7;
	
	Array<double> dbl2Arr = dblArr;
	cout << "\ndbl2Arr:\n" << dblArr << endl;
	
	cout << "Enter a double to look up in the array: ";
	cin >> d;
	if(dblArr.contains(d))
	cout << "Array contains " << d << endl;
	else
	cout << "Array does not contain " << d << endl; 
	
	cout << "Enter a double to look up it's location in the array: ";
	cin >> d;
	if(dblArr.find(d) >= 0)
	cout << "The double is located at position: " << dblArr.find(d)  << " in the array" << endl;
	else
	cout << "Array does not contain " << d << endl; 
	

	return 0;
}


