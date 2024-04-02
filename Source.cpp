#include <iostream>
#include <string>

using namespace std;

//template <typename T, typename I>//шаблонный тип данных T - название, обязаны использовать в аргументах
//T Sum(T first, I second) {
//	return first+second;
//}


template <typename M>


M Mass(M number[], int size) {
	float summ = 0;
	for (int i = 0; i < size; i++)
	{

		summ += number[i];
	}
	return summ / size;

}




int main() {
	const int Size = 5;

	int mass[Size]{1,2,3,4,5};
	float arr[Size]{1.2,3.4,5.6,7.8,9.0};
	short int ar[Size]{2,34,56,78,90};

	cout << Mass(ar, Size)<<endl;
	cout << Mass(arr, Size)<<endl;
	cout << Mass(mass, Size)<<endl;

	string login = "admin";
	string enter;
	string pass;
	int number;

	getline(cin,enter);
	cout << enter<<endl;
	cin.ignore(1000, '\n');

	cin >> number;
	cout << number<<endl;
	cin.ignore(100, '\n');

	getline(cin, pass);
	cout << pass << endl;


	setlocale(LC_ALL, "ru");
	


	return 0;
}