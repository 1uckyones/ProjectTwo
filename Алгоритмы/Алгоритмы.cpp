﻿//#include <iostream>
//#include <ctime>
//using namespace std;
//int i, N;
////линейный поиск
//int LineSearch(int A[], int key)
//{
//	for (i = 0; i < N; i++)
//		if (A[i] == key) return i;
//	return -1;
//}
////главная функция
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int key, A[1000];
//	srand(time(NULL));
//	cout << "Размер массива > "; cin >> N;
//	cout << "Искомый элемент > "; cin >> key;
//	cout << "Исходный массив: ";
//	for (i = 0; i < N; i++)
//	{
//		A[i] = rand() % 10;
//		cout << A[i] << " ";
//	}
//	if (LineSearch(A, key) == -1) cout << "\nЭлемент не найден";
//	else cout << "\nНомер элемента: " << LineSearch(A, key) + 1;
//	system("pause>>void");
//}


//#define _CRT_SECURE_NO_WARNINGS // для корректной работы scanf()
//#include <stdio.h>
//#include <stdlib.h> // для использования функций system()
//#include <iostream>
//int main()
//{
//    int k[20]; // массив ключей основной таблицы
//    int r[20]; // массив записей основной таблицы
//    int i, j, ind_size;
//    int key;
//    int kindex[3]; // массив ключей индексной таблицы
//    int pindex[3]; // массив индексов индексной таблицы
//    setlocale(0, " "); // перевод русского языка в консоли
//    system("cls");     // очистка окна консоли
//    // Инициализация ключевых полей упорядоченными значениями
//    k[0] = 8;  k[1] = 14;
//    k[2] = 26;  k[3] = 28;
//    k[4] = 38;  k[5] = 47;
//    k[6] = 56;  k[7] = 60;
//    k[8] = 64;  k[9] = 69;
//    k[10] = 70; k[11] = 78;
//    k[12] = 80; k[13] = 82;
//    k[14] = 84; k[15] = 87;
//    k[16] = 90; k[17] = 92;
//    k[18] = 98; k[19] = 108;
//    // Ввод записей
//    for (i = 0; i < 20; i++)
//    {
//        printf_s("%2d. k[%2d]=%3d: r[%2d]= ", i, i, k[i], i);
//        scanf_s("%d", &r[i]);
//    }
//    // Формирование индексной таблицы
//    for (i = 0, j = 0; i < 20; i = i + 8, j++)
//    {
//        kindex[j] = k[i]; // переносим каждый 8-й ключ в индексную таблицу
//        pindex[j] = i;    // запоминаем текущий индекс
//    }
//    ind_size = j;  // запоминаем размер индексной таблицы
//    pindex[j] = 20; // последний индекс равен 20
//    // Поиск
//    printf("Введите key: "); // вводим ключевое поле
//    scanf("%d", &key);
//    // Просматриваем элементы индексной таблицы
//    for (j = 0; j < ind_size; j++)
//    {
//        if (key < kindex[j]) // если находим ключ меньше введенного,
//            break;           // выходим из цикла - мы нашли нужную область основной таблицы
//    }
//    if (j == 0)  i = 0;      // присваиваем i начальный индекс диапазона поиска в основной таблице
//    else  i = pindex[j - 1];
//    for (i; i < pindex[j]; i++) // осуществляем поиск в основной таблице
//    {                         //до следующего индекса индексной таблицы
//        if (k[i] == key)  // если найдено введенное значение, выводим его
//            printf("%2d. key=%3d. r[%2d]=%3d", i, k[i], i, r[i]);
//    }
//    getchar(); getchar();
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    int arr[10]; // создали массив на 10 элементов
//    int key; // создали переменную в которой будет находиться ключ
//
//    cout << "Введите 10 чисел для заполнения массива: " << endl;
//
//    for (int i = 0; i < 10; i++) {
//        cin >> arr[i]; // считываем элементы массива
//    }
//
//    sort(arr, arr + 10); // сортируем с помощью функции sort (быстрая сортировка)
//
//    cout << endl << "Введите ключ: ";
//
//    cin >> key; // считываем ключ
//
//    bool flag = false;
//    int l = 0; // левая граница
//    int r = 9; // правая граница
//    int mid;
//
//    while ((l <= r) && (flag != true)) {
//        mid = (l + r) / 2; // считываем срединный индекс отрезка [l,r]
//
//        if (arr[mid] == key) flag = true; //проверяем ключ со серединным элементом
//        if (arr[mid] > key) r = mid - 1; // проверяем, какую часть нужно отбросить
//        else l = mid + 1;
//    }
//
//    if (flag) cout << "Индекс элемента " << key << " в массиве равен: " << mid;
//    else cout << "Извините, но такого элемента в массиве нет";
//
//    system("pause");
//    return 0;
//}

