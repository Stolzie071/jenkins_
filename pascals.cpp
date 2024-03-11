#include <iostream>
using namespace std;

// Функция для перевода давления из паскалей в атмосферы
double pascalToAtm(double pascals) {
    return pascals / 101325;
}

int main() {
    double pascals;
    cout << "Введите давление в паскалях: ";
    cin >> pascals; // Получение ввода от пользователя

    double atmospheres = pascalToAtm(pascals); // Вызов функции для конвертации
    cout << "Давление в атмосферах: " << atmospheres << " атм" << endl;

    return 0;
}
