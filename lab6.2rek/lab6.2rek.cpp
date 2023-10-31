#include <iostream>
#include <iomanip>
#include <time.h> 

using namespace std;
void Create(int* r, const int size, int i)
{
       r[i] = rand();
       if (i < size - 1)
           Create(r, size, i + 1);
}
int Sum(int* r, const int size, int& minIndex, int& maxIndex, int i)
{
    if (i >= size) {
        return minIndex + maxIndex;
    }

    if (r[i] > r[maxIndex]) {
        maxIndex = i;
    }

    if (r[i] < r[minIndex]) {
        minIndex = i;
    }
    return Sum(r, size, minIndex, maxIndex, i + 1);
}
void Print(int* r, const int size, int i)
{
    cout << setw(4) << r[i] << " ";
    if (i < size - 1)
        Print(r, size, i + 1);
    else
        cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int r[n];
    int minIndex = 0;
    int maxIndex = 0;
    Create(r, n, 0);
    Print(r, n, 0);
    cout << "Sum: " << Sum(r, n, minIndex, maxIndex, 0) << endl;

    return 0;
}
