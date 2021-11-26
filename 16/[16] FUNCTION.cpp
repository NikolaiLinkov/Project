#include <iostream>
using namespace std;

void clear() {
    system("cls");
}

void colorfone() {
    setlocale(0, "");
    system("cls");
    string text;
    cout << "Введите любой текст: ";
    cin >> text;
    system("color 20");
    cout << "Вы ввели: " << text << ", а мы поменяли фон консоли" << endl;
}

void colortext() {
    setlocale(0, "");
    string text;
    system("cls");
    cout << "Введите любой текст: ";
    cin >> text;
    cout << "\x1b[33m" << text << "\x1b[0m" << endl;
}
void INT() {
    system("cls");
    cout << "Тип данных INT равняется 8 байтам" << endl;
}
void CHAR() {
    system("cls");
    cout << "Тип данных CHAR равняется 1 байту" << endl;
}
void DOUBLE() {
    system("cls");
    cout << "Тип данных DOUBLE равняется 8 байтам" << endl;
}
void FLOAT() {
    system("cls");
    cout << "Тип данных FLOAT равняется 4 байтам" << endl;
}
void BOOL() {
    system("cls");
    cout << "Тип данных BOOL ранвяется 1 байту" << endl;
}
void HELLO() {
    system("cls");
    cout << " Привет, я функция *_*" << endl;
}
void kvadrat() {
    system("cls");
    cout << " Квадрат 5х5 ""\n" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "\t";
        for (int j = 0; j < 5; j++)
        {
            cout << "*" << ' ';
        }
        cout << endl;
    }
    system("pause");
    //int a, b;
    //cin >> a;
    //cin >> b;
    //for (int c = 1; c <= a; c++)
    //{
    //    cout << " ";
    //
    //    for (int i = 1; i <= b; i++)
    //    {
    //        cout << "*" << endl;
    //
    //    }
    //}
    //cout << "\n\n";
}

int main()
{
    setlocale(0, "");

    cout << "[+] Программа - \"Функции\"\n\n";
    cout << "[1] Очищение консоли \n";
    cout << "[2] Изменение цвета фона консоли \n";
    cout << "[3] Изменение цвета текста в консоли \n";
    cout << "[4] Вывод размера типа данных INT \n";
    cout << "[5] Вывод размера типа данных CHAR \n";
    cout << "[6] Вывод размера типа данных DOUBLE \n";
    cout << "[7] Вывод размера типа данных FLOAT \n";
    cout << "[8] Вывод размера типа данных BOOL \n";
    cout << "[9] Вывод сообщения \"Привет, я функция *_*\"\n";
    cout << "[10] Вывод квадрата 5x5 \n";
    cout << "Введите вариант: ";
    int value;
    cin >> value;
    switch (value)
    {
    case 1:
        clear();
        break;
    case 2:
        colorfone();
        break;
    case 3:
        colortext();
        break;
    case 4:
        INT();
        break;
    case 5:
        CHAR();
        break;
    case 6:
        DOUBLE();
        break;
    case 7:
        FLOAT();
        break;
    case 8:
        BOOL();
        break;
    case 9:
        HELLO();
        break;
    case 10:
        kvadrat();
        break;
    default:
        cout << "Нет такого значения!";
        break;
    }
    int _; cin >> _;
    //return 0;
}