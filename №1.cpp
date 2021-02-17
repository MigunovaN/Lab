#include <iostream>
#include <cstdlib>
#include <cmath>
#define PI 3.14159265
using namespace std;


//Функция вывода массива
void Array_out(int* Mass, int Length)
{
    cout << "\n\n  |  ";
    for (int i = 0; i < Length; i++)
    {
        cout << Mass[i] << " | ";
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");

    //Создание статического одномерного массива длиной 10 элем. 
    const int Length = 10;
    int Mass[Length];
    //Цикл рандомного заполнения массива в диапазоне [-100; 100]
    for (int i = 0; i < Length; i++)
    {
        Mass[i] = (rand() % 201) - 100;
    }
    //Вввод массива на кансоль
    cout << " Исходный массив: ";
    Array_out(Mass, Length);
    

    //Удаление элементы массива, индекс которых кратен 3
    int k = 3;
    for (int i = 0; i < Length; i++)
    {
        if (i % 3 == 0) //Проверка на кратность
        {
            k = k + 3;
            //Замена удалённых элементов последующими
            for (i; i < k; i++)
            {
                Mass[i] = Mass[i + 1];
            }
        }
    }
    cout << "\n\n Массив без элементов, индексы которых кратны 3: ";
    Array_out(Mass, Length);

    //Добавление после каждого отрицательного элемента элемента равного 10
    for (int i = 0; i < Length; i++)
    {
        if (Mass[i] < 0)
        {
            Mass[i + 1] = 10;
        }
    }
    cout << "\n\n Массив с добавлением 10 после каждого отрицательного элемента массива: ";
    Array_out(Mass, Length);
    cout << endl;

    system("pause");
    return 0;
}
