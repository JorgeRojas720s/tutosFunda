#include <iostream>

using namespace std;

int maxVal(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int compare(int a, int b)
{
    if (a == b)
        return 0;
    else if (a > b)
        return 1;
    else
        return -1;
}
int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int i = 5;
    do
    {
        cout << i << " ";
        i--;
    } while (i > 0);
}

int main()
{

    for (int i = 0; i <= 10; i += 2)
    {
        cout << i << " ";
    }

    int i = 10;
    while (i > 0)
    {
        cout << i << " ";
        i -= 2;
    }

    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << i << " ";
    }

    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << i << " ";
    }

    int i = 10;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 10);


        int i = 0;
        while (i < 5 && i != 3)
        {
            cout << i << " ";
            i++;
        }

    // int arr[] = {10, 20, 30};
    // int result = 0;
    // for (int i = 1; i < 2; i++)
    // {
    //     result += arr[i];
    // }
    // cout << result;

    // int arr[5] = {1, 2};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int arr[3] = {1, 2, 3};
    // cout << arr[5];

    // int arr[] = {1, 2, 3, 4, 5};
    // for (int i = 1; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int arr[3] = {1, 2, 3};
    // arr[1] = 10;
    // cout << arr[0] << " " << arr[1] << " " << arr[2];

    // bool perro = true;
    // bool gato = false;

    // if (perro || gato)
    // {
    //     cout << "Si entró";
    // }
    // else
    // {
    //     cout << "No entró";
    // }

    // int a = 10, b = 20;
    // if (a > b)
    //     cout << "a es mayor";
    // else
    //     cout << "b es mayor";

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << i << " ";
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << i << j << " ";
    //     }
    // }

    // int arr[] = {1, 2, 3, 4};
    // cout << arr[2];

    return 0;
}