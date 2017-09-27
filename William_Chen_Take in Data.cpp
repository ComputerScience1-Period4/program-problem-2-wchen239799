/*
William Chen
Assignment Name: Take in Data
Introduction to C++ Visual Studios
Print Statements to console from coding
*/

//Libraries
#include <iostream> // cout, cin, endl;
#include <conio.h> // pause() fun access to _getch() and _kbhit()
#include <string>



//Namespace
using namespace std;


string name;
string personality;
string period;
string color;

//Functions
void pause() {
	cout << "Press any key to continue!";
	while (!_kbhit());
	_getch();
	cout << '\n';

}

//Main
void main() {
	int pets;
	bool dog;
	double money;
	bool color1;
	string color2 = "red";
	char H = 'H';
	char E = 'e';
	char L = 'l';
	char O = 'o';
	char W = 'W';
	char R = 'r';
	char D = 'd';
	color1 = color != color2;
	cout << H << E << L << L << O << " " << W << O << R << L << D << "!" << endl;
	cout << " " << endl;
	cout << "Please enter your name!" << endl;
	cout << " " << endl;
	cout << "Name : " << endl;
	cout << " " << endl;
	cin >> name;
	cout << " " << endl;
	cout << "Hello " << name << "!" << endl;
	cout << " " << endl;
	cout << "Describe yourself with an adjective!" << endl;
	cout << " " << endl;
	cout << "Adjective: " << endl;
	cout << " " << endl;
	cin >> personality;
	cout << " " << endl;
	cout << "Hello " << personality << " " << name << "!" << endl;
	cout << " " << endl;
	cout << "Please enter your class period!" << endl;
	cout << " " << endl;
	cout << "Class Period: " << endl;
	cout << " " << endl;
	cin >> period;
	cout << " " << endl;
	cout << "Hello " << personality << " " << name << " " << "from period " << period << "!" << endl;
	cout << " " << endl;
	cout << "How many pets do you have?" << endl;
	cin >> pets;
	cout << " " << endl;
	if (pets < 1) {
		cout << "Aw shucks you're a bonobo!" << endl;
		cout << " " << endl;
	} 
	else {
		cout << "You'll never get into a relationship..." << endl;
		cout << " " << endl;
	}
	cout << "How much money(include cents pls) do you spend on sustenance for you pitiufl life every year?" << endl;
	cin >> money;
	cout << " " << endl;
	if (money > 1) {
		cout << "You're lying! You're not even worth a single penny!" << endl;
		cout << " " << endl;
	}
	else {
		cout << "You should see a therapist..." << endl;
		cout << " " << endl;
	}
	cout << "Final Question: What is your favorite color?" << endl;
	cin >> color;
	cout << " " << endl;
	if (color1) {
		cout << "You have the most awful taste in aesthetics smh..." << endl;
	}
	else {
		cout << "Such a passionate and fiery taste" << endl;
		cout << " " << endl;
	}


	pause();
	return;


}