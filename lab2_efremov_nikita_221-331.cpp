#include <iostream>

using std::cin;
using std::cout;

void task1()
{
    int sqw;
    std::cout << "Enter number of Numerical triangle: ";
    std::cin >> sqw;
    for (
        int i = 0; 
        i <= sqw;
        i++
        )
    {
        for (
            int j = 0; 
            j <= i; 
            j++
            )
        {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
}

void task2()
{
    int n, c;
    cin >> n;
    c = n;
    for (
        int k = 0;
        k <= n;
        k++
        )
    {
        cout << k << ' ' << c << "\n";
        c *= (n - k);
        c /= (k + 1);
    }
}

void task3()
{
    int num, k = 0, sum = 0;
    while (cin >> num, num != 0)
    {
        k++;
        sum = sum + num;
    }
    std::cout << (double)sum / k << "\n";
}


int main()
{
    int choice = 0;
    while (true)
    {
        std::cout << "What do you want to accomplish?\n"
            << "1. task1(Numerical triangle)\n" // числовой треугольник
            << "2. task2(Finding binomial coefficients)\n" // Нахождение биномиальных коэффициентов
            << "3. task3(sredny arifm)\n" // Сред.арифм введенных точек
            << "4. task4(end)\n"; // конец
        std::cin >> choice;
        switch (choice)
        {
            case 1:
            {
                task1();
                break;
            }

            case 2:
            {
                task2();
                break;
            }

            case 3:
            {
                task3();
                break;
            }

            case 4:
            {
                std::cout << "Good bye";
            }
            default:
            {
                return 0;
            }
        }
    }
}