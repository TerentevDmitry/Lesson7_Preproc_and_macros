//Задача 1. Препроцессорные директивы
#include <iostream>


#define MODE 2
#if !defined MODE
#error "сообщение о необходимости определить MODE"
#endif // !MODE

double numSum(double num1, double num2)
    {
        return num1 + num2;
    }

    double numEnter(double numX, int count)
    {
    
        std::cout << "Введите число " << count << ": ";
        std::cin >> numX;

        return numX;
    }

    int main()
    {
        setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
        system("chcp 1251");

#ifdef MODE

#if MODE == 1
        std::cout << std::endl << "«Работаю в режиме тренировки»" << std::endl;

#elif MODE == 2
        std::cout << std::endl << "«Работаю в боевом режиме»" << std::endl;
        double num1 = 0;
        double num2 = 0;
        int count = 0;
        bool numMode = true;

        ++count;
        num1 = numEnter(num1, count);
        ++count;
        num2 = numEnter(num2, count);
        std::cout << std::endl << "Результат сложения: " << numSum(num1, num2) << std::endl;
#else MODE
        std::cout << std::endl << "«Неизвестный режим.Завершение работы»" << std::endl;
#endif 
#endif

#ifndef MODE
        std::cout << std::endl << "Не включен #error и не определён #define MODE." << std::endl;
#endif
    }





    






