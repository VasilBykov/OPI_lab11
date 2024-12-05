#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const int MAX = 100;
    int arrayA[MAX], arrayB[MAX], array_size_A, array_size_B;
    int rmn = 0, rmx = 99;
    int e_min = 100;

    cout << "Введите размер массива 'A' (max = 100): ";
    cin >> array_size_A;

    cout << "Введите размер массива 'B' (max = 100): ";
    cin >> array_size_B;

    srand((unsigned)time(NULL));

    for (int i = 0; i < array_size_A; ++i)
    {
        arrayA[i] = (int)(((double)rand() / (double)RAND_MAX) * rmx);
    }

    for (int i = 0; i < array_size_B; ++i)
    {
        arrayB[i] = (int)(((double)rand() / (double)RAND_MAX) * rmx);
    }

    for (int i = 0; i < array_size_A; ++i)
    {
        int matches = 0;
        for (int j = 0; j < array_size_B; ++j)
        {
            if (arrayA[i] == arrayB[j])
            {
                matches++;
                break;
            }
        }

        if (matches == 0 && arrayA[i] < e_min)
        {
            e_min = arrayA[i];
        }
    }

    cout << "Наименьший среди элементов первого массива, что не входят во второй массив: " << e_min << endl;

    return 0;
}