#include <iostream>
#include <math.h>

using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }

    print(n - 1);

    cout << n << " ";
}

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int smallOut = power(x, n - 1);

    return smallOut * x;
}

int countDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (countDigits(n / 10) + 1);
}

int sum(int input[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (sum(input + 1, n - 1) + input[0]);
}

bool checkNumber(int input[], int size, int x)
{
    if (size == 0)
    {
        return false;
    }

    if (input[0] == x)
    {
        return true;
    }

    checkNumber(input + 1, size - 1, x);
}

int lastIndex(int input[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }

    int smallOut = lastIndex(input + 1, size - 1, x);

    if (smallOut == -1)
    {
        if (input[0] == x)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }

    return smallOut + 1;
}

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int smallOut = sumOfDigits(n / 10);

    return (smallOut + (n % 10));
}

int multiplyNumbers(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (multiplyNumbers(m, n - 1) + m);
}

int countZeros(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n < 10)
    {
        return 0;
    }

    int smallOut = countZeros(n / 10);

    if (n % 10 == 0)
    {
        return smallOut + 1;
    }

    return smallOut;
}

double geometricSum(int k)
{
    if (k == 0)
    {
        return 1;
    }

    double sum = geometricSum(k - 1);

    return (sum + 1 / (double)pow(2, k));
}

int findDuplicate(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }

    return -1;
}


int main()
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}