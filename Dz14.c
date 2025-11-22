#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define N 10


int find_first_element(int*,int,int);

int main()
{
	system("chcp 1251");
	setlocale(LC_CTYPE, "RUS");

	printf("Введите значения для переменных массива array \n(Обязательно должено быть хотя бы по одному нулевому, отрицательному и положительному элементу)\n\n");
	int array[N];
	for (int i = 0; i < N; i++)
	{
		int temp;
		printf("Введите значение переменной array[%d]\t", i);
		scanf("%d", &temp);
		array[i] = temp;
	}
	printf("\nИндекс первого отрицательного элемента массива: %d\n", find_first_element(array, N, -1));

	printf("Индекс первого нулевого элемента массива: %d\n", find_first_element(array, N, 0));

	printf("Индекс первого положительного элемента массива: %d\n", find_first_element(array, N, 1));
}


int find_first_element(int* array, int size, int type) {

	for (int i = 0; i < size; i++) {
		if ((type == -1 && array[i] < 0) || (type == 0 && array[i] == 0) || (type == 1 && array[i] > 0)) {
			return i;
			break;
		}
	}
}