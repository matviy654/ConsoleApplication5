#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Завдання 1: Масив, що заповнюється шляхом множення на 2
void task1() {
    int rows, cols, num;
    cout << "Завдання 1: Введіть кількість рядків і стовпців: ";
    cin >> rows >> cols;
    cout << "Введіть число: ";
    cin >> num;

    int array[rows][cols];

    // Заповнення масиву множенням на 2
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 && j == 0)
                array[i][j] = num;
            else if (j == 0)
                array[i][j] = array[i - 1][cols - 1] * 2;
            else
                array[i][j] = array[i][j - 1] * 2;
        }
    }

    // Виведення масиву
    cout << "Масив, заповнений множенням на 2:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

// Завдання 2: Масив, що заповнюється шляхом додавання 1
void task2() {
    int rows, cols, num;
    cout << "Завдання 2: Введіть кількість рядків і стовпців: ";
    cin >> rows >> cols;
    cout << "Введіть число: ";
    cin >> num;

    int array[rows][cols];

    // Заповнення масиву додаванням 1
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 && j == 0)
                array[i][j] = num;
            else if (j == 0)
                array[i][j] = array[i - 1][cols - 1] + 1;
            else
                array[i][j] = array[i][j - 1] + 1;
        }
    }

    // Виведення масиву
    cout << "Масив, заповнений додаванням 1:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

// Завдання 3: Циклічне зрушення масиву
void task3() {
    srand(time(0));

    int rows = 2, cols = 6;
    int array[rows][cols];

    // Заповнення масиву випадковими числами
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 10;
        }
    }

    // Виведення початкового масиву
    cout << "Завдання 3: Початковий масив:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int shift;
    cout << "Введіть кількість зрушень вправо: ";
    cin >> shift;

    // Циклічне зрушення вправо
    for (int i = 0; i < rows; i++) {
        for (int s = 0; s < shift; s++) {
            int temp = array[i][cols - 1];
            for (int j = cols - 1; j > 0; j--) {
                array[i][j] = array[i][j - 1];
            }
            array[i][0] = temp;
        }
    }

    // Виведення масиву після зрушення
    cout << "Масив після зрушення вправо:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    task1();  // Виконання першого завдання
    task2();  // Виконання другого завдання
    task3();  // Виконання третього завдання

    return 0;
}
