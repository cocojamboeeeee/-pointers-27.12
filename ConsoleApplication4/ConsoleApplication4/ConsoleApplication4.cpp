#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int size = 5;

    // Задание 1: Копировать один массив в другой
    int source[size] = { 1, 2, 3, 4, 5 };
    int destination[size];

    int* srcPtr = source; // указатель на исходный массив
    int* destPtr = destination; // указатель на целевой массив

    // Копирование с использованием разыменования
    for (int i = 0; i < size; i++) {
        *(destPtr + i) = *(srcPtr + i);
    }

    cout << "Скопированный массив (Задание 1): ";
    for (int i = 0; i < size; i++) {
        cout << destination[i] << " ";
    }
    cout << endl;

    // Задание 2: Изменить порядок следования элементов массива на противоположный
    int arr[size] = { 1, 2, 3, 4, 5 };

    int* ptr = arr; // указатель на массив
    int* endPtr = arr + size - 1; // указатель на последний элемент

    // Меняем элементы местами
    for (int i = 0; i < size / 2; i++) {
        int temp = *(ptr + i);
        *(ptr + i) = *(endPtr - i);
        *(endPtr - i) = temp;
    }

    cout << "Перевернутый массив (Задание 2): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Задание 3: Скопировать один массив в другой в обратном порядке
    int source2[size] = { 1, 2, 3, 4, 5 };
    int destination2[size];

    int* srcPtr2 = source2; // указатель на исходный массив
    int* destPtr2 = destination2; // указатель на целевой массив
    int* revPtr = destination2 + size - 1; // указатель на последний элемент целевого массива

    // Копирование в обратном порядке
    for (int i = 0; i < size; i++) {
        *(revPtr - i) = *(srcPtr2 + i);
    }

    cout << "Скопированный массив в обратном порядке (Задание 3): ";
    for (int i = 0; i < size; i++) {
        cout << destination2[i] << " ";
    }
    cout << endl;

    return 0;
}
