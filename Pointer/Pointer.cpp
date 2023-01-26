#include <iostream>
using namespace std;

template<typename Type> Type theLargestNumber(Type *pNum1, Type *pNum2) {
	if (*pNum1 > *pNum2) {
		cout << "The largest number is the first: " << *pNum1 << "\n";
	}
	else if (*pNum1 < *pNum2) {
		cout << "The largest number is the second: " << *pNum2 << "\n";
	}
	else {
		cout << "You have entered equivalent numbers!" << "\n";;
	}
	cout << "\n";
	return *pNum1, *pNum2;
}

int copyArray(int *pArr, int *pTempArr2) {
	for (int i = 0; i < 10; i++)
	{
		if (i >= 10) {
			cout << "Going beyond the boundaries of the array" << "\n";
		} else { 
			cout << "arr [" << i << "] - " << *(pArr + i) << " " << endl; 
		}
	}
	cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		if (i >= 10) {
			cout << "Going beyond the boundaries of the array" << "\n";
		}
		pTempArr2 = pArr;
		cout << "arr2[" << i << "] - " << *(pTempArr2 + i) << " " << endl;
	}
	cout << "\n";
	return 0;
}

int reverseArray(int* pArr) {
	int i = 10 - 1;
	while (i >= 0)
	{
		cout << "arr [" << i << "] - " << *(pArr + i) << " " << endl;
		i--;
	}
	return 0;
}

int copyAndReverseArray(int* pArr,int* pTempArr2) {
	int i = 0;
	while (i < 10)
	{
		if (i >= 10) {
			cout << "Going beyond the boundaries of the array" << "\n";
		}
		else {
			cout << "arr [" << i << "] - " << *(pArr + i) << " " << endl;
		}
		i++;
	}
	cout << "\n";
	
	int j = 10 - 1;
	while (j >= 0)
	{
		pTempArr2 = pArr;
		cout << "arr2[" << j << "] - " << *(pTempArr2 + j) << " " << endl;
		j--;
	}
	cout << "\n";
	return 0;
}

template<typename T> T positiveOrNegative(T* pNum) {
	if (*pNum > 0) {
		cout << "Number " << *pNum << " is positive, with a sign (+)!\n";
	}
	else {
		cout << "Number " << *pNum << " is negative, with a sign (-)!\n";

	}
	cout << "\n";
	return *pNum;
}

template<typename T> T swappingTheValues(T* pNum01, T* pNum02, T* pTempNum) {
	*pTempNum = *pNum01;
	*pNum01 = *pNum02;
	*pNum02 = *pTempNum;
	cout << "Swapping the values of variables num01 and num02!" << "\n";
	cout << "pNum01 = " << *pNum01 << "\n";
	cout << "pNum02 = " << *pNum02 << "\n";
	return 0;
}

int calculater(int* pNumber1, int* pNumber2, int* pResult) {
	if (*pNumber1 + *pNumber2) {
		*pResult = *pNumber1 + *pNumber2;
		cout << *pNumber1 << " + " << *pNumber2 << " = " << *pResult << "\n";
	}
	if (*pNumber1 - *pNumber2) {
		*pResult = *pNumber1 - *pNumber2;
		cout << *pNumber1 << " - " << *pNumber2 << " = " << *pResult << "\n";
	}
	if (*pNumber1 * *pNumber2) {
		*pResult = *pNumber1 * *pNumber2;
		cout << *pNumber1 << " * " << *pNumber2 << " = " << *pResult << "\n";
	}
	if (*pNumber1 / *pNumber2) {
		*pResult = *pNumber1 / *pNumber2;
		cout << *pNumber1 << " / " << *pNumber2 << " = " << *pResult << "\n";
	}
	return 0;
}

template<typename T> T arraySum(T* pArr1) {
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		*(pArr1 + i) = rand() % 100;
		cout << "arr[" << i << "]" << *(pArr1 + i) << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		if (i >= 10) {
			cout << "Going beyond the boundaries of the array" << "\n";
		}
		else {
			sum += *(pArr1 + i);
		}
	}
	cout << "The sum of the array elements is equal to: " << sum << endl;
	return 0;
}


int main() {
	int arr[10] = { 10, 20, 15, 63, 12, 78, 51, 98, 2, 99 };
	int arr2[10];
	int* pArr = arr;
	int* pTempArr2 = arr2;
	copyArray(pArr, pTempArr2);
	
	cout << "\n==========================================================================\n";

	reverseArray(pArr);

	cout << "\n==========================================================================\n";

	copyAndReverseArray(pArr, pTempArr2);

	cout << "\n==========================================================================\n";

	float num1;
	cout << "Input first number: ";
	cin >> num1;
	cout << "\n";
	float num2;
	cout << "Input second number: ";
	cin >> num2;
	cout << "\n";
	float*pNum1 = &num1;
	float*pNum2 = &num2;
	theLargestNumber<float>(&num1, &num2);

	cout << "\n==========================================================================\n";
	
	double num;
	double* pNum = &num;
	cout << "Enter any number: ";
	cin >> *pNum;
	positiveOrNegative<double>(pNum);

	cout << "\n==========================================================================\n";
	
	int num01 = 4;
	int num02 = 7;
	cout << "pNum01 = " << num01 << "\n";
	cout << "pNum02 = " << num02 << "\n";
	int tempNum = 0;
	int *pNum01 = &num01;
	int *pNum02 = &num02;
	int *pTempNum = &tempNum;
	swappingTheValues(pNum01, pNum02, pTempNum);

	cout << "\n==========================================================================\n";

	int number1;
	cout << "Enter first number: ";
	cin >> number1;
	int number2;
	cout << "Enter second number: ";
	cin >> number2;
	int result;
	int *pNumber1 = &number1;
	int *pNumber2 = &number2;
	int *pResult = &result;
	calculater(pNumber1, pNumber2, pResult);

	cout << "\n==========================================================================\n";

	srand(time(0));
	int arr1[10];
	int* pArr1 = arr1;
	arraySum(pArr1);
}