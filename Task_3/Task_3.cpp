#include <iostream>

using namespace std;

/*
ФИБОНАЧЧИ. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946
Знаменитый ряд итальянского математика, который много где используется, в том числе, в целью экономии энергии,
в ряде биологических процессов(в том числе и нашем ухе)).
Не подсматривая в инете, найдите зависимость и разработайте функцию, вычисляющую n - ый член ряда.
*/

int fibonacci(int number);

int main()
{
    int n = 0;

    cout << "Enter the term of the Fibonacci series (n): ";
    cin >> n;
    cout << endl;

    if (n <= 0)
    {
        cout << "Error! There is no such member of the series." << endl;

        return -1;
    }
    else {}

    cout << "The value of the " << n << " term of the Fibonacci series: " << fibonacci(n) << endl;

    return 0;
}

int fibonacci(int rowMember)
{
    int number = 2, meaning = 1, mediator = 0, before = 0;

    if (rowMember == 1)
    {
        return before;
    }
    else
    {
        while (number < rowMember)
        {
            mediator = meaning;

            meaning += before;

            before = mediator;

            number++;
        }
    }

    return meaning;
}