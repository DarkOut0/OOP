#include <iostream>
#include "Header.hpp"
#include "SecondFile.cpp"
#include "ThirdFile.cpp"
 
using namespace std;		
void PrintRef(int* ArrayVlad);
void IncMas();
void MinusMassiv();
 
int main(int argc, char** argv) {
	int Array[5] = {1, 2, 3, 4, 5};
	int choise;
	while(true){
		cout << "choise function: 0 - exit | 1 - enterprise array | 2 - change elements" << endl;
		cout << " enter the number: ";
		cin >> choise;
		switch(choise){
			case 0:{
				cout << "Exit" << endl;
				return 0;
		} 
		case 1:{
			cout << " Enterprise arrai: "<< endl;
			for (int i = 0; i < 5; i++){
				cout << Array[i] << " ";
			}
			cout << " " << endl;
			break;
		} 
		case 2:{
			cout << "First number - count element | Second number - new Value: ";
			int numberEL;
			cin >> numberEL;
			int numberValue;
			cin >> numberValue;
			Array[numberEL] = numberValue;
			cout << " " << endl;
			break;
			}		
		}
	}
	system("pause");
	return 0;		
}
