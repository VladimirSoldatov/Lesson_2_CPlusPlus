// Lesson_2_CPlusPlus.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <consoleapi2.h>
#include <WinBase.h>
#include "conio.h"

using namespace std;
void myYear();
int main()
{
    setlocale(0,"");
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 0; i < 5; i++)
    {
  
        SetConsoleTextAttribute(hConsole, 10);
        int name = 0;
        cout << "Enter number between 1 and 3: ";
        cin >> name;
        if (name == NULL) {
            _cprintf("Введено не число %i", name);
            return 1;
        }
        switch (name)
        {
        case 1:
            cout << "Number one\n";
            _cprintf("Number %i\n", name);
            break;
        case 2:
            cout << "Number two\n";
            break;
        case 3:
            cout << "Number three\n";
            break;
        default:
            cout << "Unknown number\n";
            break;
        }
    }
    SetConsoleTextAttribute(hConsole, 12);
    int s;
    cout << "Введите цифру";
    scanf_s("%i", &s);
    printf("%i", s);
    
    myYear();
    

}
void myYear()
{
    int day;
    int month;
    int year;
    int last; // 1, если текущий день последний день месяца
    int r; // если год високосный, то остаток от
    // деления year на 4 равен нулю
    printf("Введите в одной строке (цифрами) ");
    printf("сегодняшнюю дату\n");
    printf("(число месяц год) -> ");
    scanf_s("%i.%i.%i", &day, &month, &year);
    last = 0;
    if (month == 2) {
        if (!(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && day == 28) last = 1;
        if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && day == 29) last = 1;
    }
    else if ((month == 4 || month == 6 ||
        month == 9 || month == 11)
        && (day == 31))
        last = 1;
    else if (day == 31)
        last = 1;
    if (last == 1) {
        printf("Последний день месяца!\n");
        day = 1;
        if (month == 12) {
            month = 1;
            year++;
            printf("С наступающим Новым годом!\n");
        }
        else month++;
    }
    else day++;
    printf("Завтра %i %i %i", day, month, year);
    printf("\nДля завершения нажмите <Enter>");
    cout <<_getch();
}