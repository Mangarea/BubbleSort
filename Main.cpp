#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<stdio.h>
#include <algorithm> 

using namespace std;


void BubbleSort(int* array, int begin, int end){
	bool sorted = true;
	do{
		sorted = true;
		for (int i = begin; i < end - 1; i++){
			if (array[i]>array[i + 1]){
				swap(array[i], array[i + 1]);
				sorted = false;
			}
		}
	} while (sorted != true);
}

int main(){
	int n;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++){
		array[i] = rand() % n;
	}

	BubbleSort(array, 0, n);

	system("pause");

	delete[]array;

	return 0;
}