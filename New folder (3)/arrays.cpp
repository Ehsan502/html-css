#include<iostream>
using namespace std;

int main () {
	int marks[5]={50,60,35,40,75,};
//	cout<<marks[0]<<endl;
//	cout<<marks[1]<<endl;
//	cout<<marks[2]<<endl;
//	cout<<marks[3]<<endl;
//	cout<<marks[4]<<endl;
	
	
	
//	for (int i=0; i<5; i++)
//	{
//		cout<<marks[i]<<endl;
//	}

	
//	int i=0;
//	while(i<5){
//		cout<<marks[i]<<endl;
//		i++;
//	}

    int i=0;
    do {
    	cout<<marks[i]<<endl;
    	i++;
	} while (i<5);
    
	
	return 0;
}
