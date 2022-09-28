#include <iostream>

using std::cin;
using std::cout;

void task1()
{
    
}

void task2()
{

}

void task3()
{

}

int main()
{
    int choice = 0;
    while (true)
    {
        std::cout << "What do you want to accomplish?\n" 
        << "1. task1(Numerical triangle)\n" // числовой треугольник
        << "2. task2(Finding binomial coefficients)\n" // Нахождение биномиальных коэффициентов
        << "3. task3(sredny arifm)\n"; // Сред.арифм введенных точек
        std::cin >> choice;
        switch (choice)
        {
            case 1:
            {
                task1();
                int size;
                std::cout << "Enter number of Numerical triangle: ";
                std::cin >> size;
                for (int i = 0; i <= size; ++i)
                {
                    for (int j = 0; j <= i; ++j)
                    {
                        std::cout << j << " ";
                    }
                    std::cout << "\n";
                }
                break;
            }

            case 2:
            {
                task2();
                int n, c;
                cin >> n;
                c = n;
                for (int k = 1; k <= n; k++)
                {
                    cout << k << ' ' << c << "\n";
                    c *= (n - k);
                    c /= (k + 1);
                }
                break;
            }

            case 3:
            {
                task3();
                int num, k = 0, sum = 0;
                while (cin >> num, num != 0)
                {
                    k++;
                    sum += num;
                }
                std::cout << sum << "\n";
                std::cout << (double)sum/k << "\n";
                break;
            }

            default:
            {
                return 0;
            }
        }
    }
}