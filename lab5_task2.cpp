/*Даны два массива A и B одинакового размера N.
Сформировать новый массив C того же размера,
каждый элемент которого равен максимальному
из элементов массивов A и B с тем же индексом */

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int N;
    cout << "Введите размер массивов N: ";
    cin >> N;

    if (N <= 0) {
        cerr << "Ошибка: введено некорректное значение N." << endl;
        return 1;
    }
   
    int* A = new int[N];
    int* B = new int[N];
    int* C = new int[N];
   
    cout << "Введите значения для массива A:\n";
    for (int i = 0; i < N; ++i) {
        cout << "A[" << i << "]: "; 
        cin >> A[i];
    }
    cout << "Введите значения для массива B:\n";
    for (int i = 0; i < N; ++i) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    //  C и заполнение его максимальными значениями
    for (int i = 0; i < N; ++i) {
        C[i] = max(A[i], B[i]);
    }
    cout << "Массив C (максимумы A и B):\n";
    for (int i = 0; i < N; ++i) {
        cout << "C[" << i << "]: " << C[i] << "\n";
    }
    delete[] A;
    delete[] B;
    delete[] C;
    system("pause");
    return 0;
}