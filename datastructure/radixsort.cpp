/*the sorting techniques are:
1. bubble sort
2. insertion sort
3. selection sort
4. quick sort
5. merge sort
6. heap sort
7. radix sort
8. shell sort
9. counting sort
radix sort--------------------
*/

#include <iostream>
using namespace std;
void count_sort(int array[], int size, int pos, int max);
void display(int array[], int size);
int main()
{
    int size;
    cout << "Enter the number of elements : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element : " << i + 1 << "   ";
        cin >> array[i];
    }

    int max;
    max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    for (int pos = 1; max / pos > 0; pos = pos * 10)
    {
        count_sort(array, size, pos, max);
    }

    display(array, size);
}
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
void count_sort(int array[], int size, int pos, int max)
{
    int count[10];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        ++count[(array[i] / pos) % 10];
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    int tem_array[size];
    for (int i = size - 1; i >= 0; i--)
    {
        tem_array[--count[((array[i] / pos) % 10)]] = array[i];
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = tem_array[i];
    }
}
