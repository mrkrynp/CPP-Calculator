#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int operation(string select, int fnum, int snum) {
	if(select == "1"){
		return fnum+snum;
	}
	else if(select == "2"){
		return fnum - snum;
	}
	else if(select == "3"){
		return fnum * snum;
	}
	else if(select == "4"){
		return fnum/snum;
	}
}

int main() {
	int fnum;
	int snum;
	bool willLoop;
	string select;
	string ask;
	string uBBorder = "o=======================================o"; // up and bottom border
	do {
		willLoop = false;
		ask = "";
		system("cls");
		cout << uBBorder << endl;
		cout << "| - Enter first number: ";
		cin >> fnum;
		cout << "| - Enter second number: ";
		cin >> snum;
		fflush(stdin);
		cout << uBBorder << endl;
		cout << "|     Select arithmetic operation:      |"<< endl;
		cout << uBBorder << endl;
		cout << "| (1) Addition                          |" << endl;
		cout << "| (2) Subtraction                       |" << endl;
		cout << "| (3) Multiplication                    |" << endl;
		cout << "| (4) Division                          |" << endl;
		cout << uBBorder << endl;
		cout << "|->> ";
		getline(cin,select);
		cout << uBBorder << endl;
		cout << "| - Result: " << operation(select,fnum,snum) << endl;
		cout << uBBorder << endl;
		cout << "| - Try again [y/n]?: ";
		getline(cin, ask);
		if(ask == "Yes" || ask == "yes" || ask == "y" || ask == "Y"){
			willLoop = true;
		}
	} while(willLoop == true);
	system("cls");
	cout << uBBorder << endl;
	cout << " EXITING . . . PLEASE WAIT " << endl;
	cout << uBBorder << endl;
	Sleep(3000);
	exit(0);
}
