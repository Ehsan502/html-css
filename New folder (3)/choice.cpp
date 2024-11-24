#include<iostream>
using namespace std;
int main () {
	int num1 ,num2 ,choice;
	
	cout << "Enter first number:"<<endl;
	cin >> num1;
	cout << "Enter second number:"<<endl;
	cin >> num2;
	
	cout << "Chose an Operation:"<<endl;
	cout << "1:Addition"<<endl;
	cout << "2:Multipplication"<<endl;
	cout << "3:subtraction"<<endl;
	cout << "4:Division"<<endl;
	cin >> choice;
	
	switch (choice) {
		case 1:
			cout <<"Result:"<< num1+num2 <<endl;
			break;
		case 2:
			cout <<"Result:"<< num1*num2 <<endl;
			break;
		case 3:
			cout <<"Result:"<< num1/num2 <<endl;
			break;
		case 4:
			cout <<"Result:"<< num1-num2 <<endl;
			break;
		default :
			cout<<"Invalid choice:"<<endl;
	}
return 0;	
	
}
