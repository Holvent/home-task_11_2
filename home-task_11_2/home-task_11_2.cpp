#include <iostream>
using namespace std;

//Задание 1.
void createArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + rand() % 10;
	}
}
void showArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int lineSearch(int arr[], int key, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key)
			return i;
	}
	return -1;
}
void line() {
	const int size = 10;
	int arr[size];
	int key, index = 0;
	createArr(arr, size);
	showArr(arr, size);
	cout << "Введите число для поиска: ";
	cin >> key;
	index = lineSearch(arr, key, size);
	if (index != -1) cout << "Значение " << key << " находится в ячейке с индексом: " << index << endl << endl;
	else cout << "В массиве нет такого значения" << endl << endl;
}
//Задание 2.
void createArr2(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
}
int binSearch(int arr[], int key, int size) {
	int left = 0, right = size - 1;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (key == arr[mid]) return mid;
		if (key < arr[mid]) right = mid - 1;
		else left = mid + 1;
	}
	return -1;
}
void bin() {
	const int size = 10;
	int arr[size];
	int key, index = 0;
	createArr2(arr, size);
	showArr(arr, size);
	cout << "Введите число для поиска: ";
	cin >> key;
	index = binSearch(arr, key, size);
	if (index != -1) cout << "Значение " << key << " находится в ячейке с индексом: " << index << endl << endl;
	else cout << "В массиве нет такого значения" << endl << endl;
}
//Задание 3.
void decimal() {
	const int size = 5;
	int dec = 0;
	int arr[size]{ 1,1,1,0,1 };//29 (в десятичном представлении) 
	cout << "Дано число -> ";
	for (int i = size - 1, j = 0; i >= 0; i--, j++) {// i-индекс элемента,j-разряд эелемента
		dec += arr[i] * pow(2, j);
		cout << arr[j];
	}
	cout << "\nЭто десятичном представлении -> " << dec << endl << endl;
}

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	//Задание 1. 
	//Написать функцию, реализующую алгоритм
	//линейного поиска заданного ключа в одномерном массиве.
	cout << "Home task #11.2.1\n\n";
	line();
	system("pause");
	system("cls");

	//Задание 2. 
	//Написать функцию, реализующую алгоритм
	//бинарного поиска заданного ключа в одномерном массиве.
	cout << "Home task #11.2.2\n\n";
	bin();
	system("pause");
	system("cls");

	//Задание 3. 
	//Написать функцию для перевода числа, 
	//записанного в двоичном виде, в десятичное представление.
	cout << "Home task #11.2.3\n\n";
	decimal();
}