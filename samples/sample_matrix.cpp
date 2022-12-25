// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
//---------------------------------------------------------------------------

void rand_matrix(TDynamicMatrix<int>& Matrix)
{
    for (size_t i = 0; i < Matrix.size(); i++)
    {
        for (size_t j = 0; j < Matrix.size(); j++)
        {
            Matrix[i][j] = rand() % 100;
        }
    }
}

void main()
{
    int size, choice, operation;
    setlocale(LC_ALL, "Russian");
    cout << "Работа с матрицами" << endl;
    cout << "Выберите размер матрицы - ";
    cin >> size;
    TDynamicMatrix<int> Matrix1(size);
    cout << "1. Заполнение матрицы вручную,\n 2. Заполнение матрицы случайными числами" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Выберите операцию:\n1 - Произведение матриц\n2 - Сумма матриц\n3 - Разность матриц\n4 - Умножение матрицы на скаляр\n";
        cin >> operation;
        switch (operation)
        {
        case 1:
        {
            cout << "Введите первую матрицу\n";
            cin >> Matrix1;
            TDynamicMatrix<int> Matrix2(size);
            cout << "Введите вторую матрицу\n";
            cin >> Matrix2;
            cout << "Результат\n";
            cout << Matrix1 * Matrix2;
            break;
        }
        case 2:
        {
            cout << "Введите первую матрицу\n";
            cin >> Matrix1;
            TDynamicMatrix<int> Matrix2(size);
            cout << "Введите вторую матрицу\n";
            cin >> Matrix2;
            cout << "Результат\n";
            cout << Matrix1 + Matrix2;
            break;
        }
        case 3:
        {
            cout << "Введите первую матрицу\n";
            cin >> Matrix1;
            TDynamicMatrix<int> Matrix2(size);
            cout << "Введите вторую матрицу\n";
            cin >> Matrix2;
            cout << "Результат\n";
            cout << Matrix1 - Matrix2;
            break;
        }
        case 4:
        {
            cout << "Введите матрицу\n";
            cin >> Matrix1;
            int value;
            cout << "Введите вектор\n";
            cin >> value;
            cout << "Результат\n";
            cout << Matrix1 * value;
            break;
        }
        default:
        {
            cout << "Неверный выбор операции\n";
            break;
        }
        }
        break;
    case 2:
        cout << "Выберите операцию:\n1 - Произведение матриц\n2 - Сумма матриц\n3 - Разность матриц\n4 - Умножение матрицы на скаляр\n";
        cin >> operation;
        switch (operation)
        {
        case 1:
        {
            rand_matrix(Matrix1);
            cout << "Первая матрица\n";
            cout << Matrix1;
            TDynamicMatrix<int> Matrix2(size);
            rand_matrix(Matrix2);
            cout << "Второая матрица\n";
            cout << Matrix2;
            cout << "Результат\n";
            cout << Matrix1 * Matrix2;
            break;
        }
        case 2:
        {
            rand_matrix(Matrix1);
            cout << "Первая матрица\n";
            cout << Matrix1;
            TDynamicMatrix<int> Matrix2(size);
            rand_matrix(Matrix2);
            cout << "Второая матрица\n";
            cout << Matrix2;
            cout << "Результат\n";
            cout << Matrix1 + Matrix2;
            break;
        }
        case 3:
        {
            rand_matrix(Matrix1);
            cout << "Первая матрица\n";
            cout << Matrix1;
            TDynamicMatrix<int> Matrix2(size);
            rand_matrix(Matrix2);
            cout << "Второая матрица\n";
            cout << Matrix2;
            cout << "Результат\n";
            cout << Matrix1 - Matrix2;
            break;
        }
        case 4:
        {
            rand_matrix(Matrix1);
            cout << "Первая матрица\n";
            cout << Matrix1;
            int value;
            cout << "Введите вектор\n";
            cin >> value;
            cout << "Результат\n";
            cout << Matrix1 * value;
            break;
        }
        default:
        {
            cout << "Неверный выбор операции\n";
            break;
        }
        }
        break;
    default:
        cout << "Неверный выбор операции\n";
        break;
    }
}
//---------------------------------------------------------------------------
