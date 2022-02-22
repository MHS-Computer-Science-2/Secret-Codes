//Secret Codes
#include <iostream>
#include <string>
using namespace std;

string encode(string msg) {
	//Encode msg



	return msg;
}


string decode(string msg) {
	//Decode msg



	return msg;
}


int main()
{
	//TEST ENCODING
	string toEncode;
	cout << "Enter a message to encode:" << endl;
	getline(cin, toEncode); //this inputs a full sentence including spaces 

	string codedMsg = encode(toEncode); //You write this function. 
	cout << "Your coded message is: " << codedMsg << endl;


	//TEST DECODING
	string toDecode;
	cout << "Enter a message to decode:" << endl;
	getline(cin, toDecode); //this inputs a full sentence including spaces 

	string decodedMsg = decode(toDecode); //You write this function. 
	cout << "Your decoded message is: " << decodedMsg << endl;


	system("pause");
}