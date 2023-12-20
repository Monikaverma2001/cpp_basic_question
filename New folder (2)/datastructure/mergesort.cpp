#include <iostream>
using namespace std;
void display(int *array, int size);
void m_sort(int *array, int left, int right);
void merge(int *array, int left, int mid, int right);
int main()
{
    int size;
    cout << "enter the number of elements";
    cin >> size;
    int array[size];
    cout << "enter the values : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    m_sort(array, 0, size - 1);
    cout << "after sorting " << endl;
    display(array, size);
}
void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
void m_sort(int *array, int left, int right)
{
    int midle;
    if (left < right)
    {
        midle = (left + right) / 2;
        m_sort(array, left, midle);
        m_sort(array, midle + 1, right);
        merge(array, left, midle, right);
    }
}
void merge(int *array, int left, int mid, int right)
{
    int i, j, k;
    int left_size = mid - left + 1;
    int right_size = right - mid;
    int left_array[left_size];
    int right_array[right_size];
    for (int i = 0; i < left_size; i++)
    {
        left_array[i] = array[left + i];
    }
    for (int j = 0; j < right_size; j++)
    {
        right_array[j] = array[mid + 1 + j];
    }
    i = 0, j = 0;
    k = left;
    while (i < left_size && j < right_size)
    {
        if (left_array[i] <= right_array[j])
        {
            array[k] = left_array[i];
            i = i + 1;
        }
        else
        {
            array[k] = right_array[j];
            j = j + 1;
        }
        k = k + 1;
    }
    while (i < left_size)
    {
        array[k] = left_array[i];
        i++;
        k++;
    }
    while (j < right_size)
    {
        array[k] = right_array[j];
        j++;
        k++;
    }
}