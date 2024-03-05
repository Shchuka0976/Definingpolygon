// Definingpolygon.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <limits>
#include <Windows.h>


bool FixFlow()
{
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore();
        fflush(stdin);
        return true;
        //        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else
    {
        return false;
    }
}


template <typename T>
void Input(T side1)
{
    do
    {
        std::cin >> side1;
    } while (FixFlow());
}





void DifineTriangle(double a, double b, double c)
{
    if (a >= b + c || b >= a + c || c >= a + b || a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "Треугольник не существует\n";
    }
    else if ( fabs(a  - b ) < std::numeric_limits<double>::epsilon()
        && fabs(c - b) < std::numeric_limits<double>::epsilon())
    {
        std::cout << "Треугольник равностороний\n";
    }
    else if ( fabs(a - b) < std::numeric_limits<double>::epsilon()
        || fabs(c - b) < std::numeric_limits<double>::epsilon()
        || fabs(a - c) < std::numeric_limits<double>::epsilon())
    {
        std::cout << "Треугольник равнобедренный\n";
    }
    else if (fabs(a * a - (b * b + c * c)) < std::numeric_limits<double>::epsilon()
        || fabs(c * c - (b * b + a * a)) < std::numeric_limits<double>::epsilon()
        || fabs(b * b - (a * a + c * c)) < std::numeric_limits<double>::epsilon())
    {
        std::cout << "Треугольник прямоугольный\n";
    }
    else
    {
        std::cout << "Треугольник обычный\n";
    }
}

int main()
{
#ifdef _WIN32
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#endif
    double side1 = 0, side2 = 0, side3 = 0;
    char h;
    std::cout << "Введите стороны треугольника\n";

    Input(side1);
    Input(side2);
    Input(side3);




    DifineTriangle(side1, side2, side3);

    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
