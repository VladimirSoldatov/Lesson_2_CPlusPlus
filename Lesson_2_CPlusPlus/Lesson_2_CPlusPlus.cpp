// Lesson_2_CPlusPlus.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <consoleapi2.h>
#include <WinBase.h>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        int name = 0;
        cout << "Enter number between 1 and 3: ";
        cin >> name;
        switch (name)
        {
        case 1:
            cout << "Number one\n";
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
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole, 10);
 
    

    

}
