#include <iostream>
using namespace std;
int quicksort(int array[], int size, int lower, int upper);
int partion(int array[], int size, int lower, int upper);
int main()
{
  int size;
  cout << "number of elements you want to take : ";
  cin >> size;
  int array[size];
  cout << "enter the elements : " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  int upper=size-1;
  int lower=0;
  quicksort(array, size, lower, upper);
  cout<<"\nafter sorting \n";
  for(int i=0;i<size;i++)
  {
    cout<<array[i]<<endl;
  }
}


int quicksort(int array[], int size, int lower, int upper)
{
  if (lower < upper)
  {
    int cen = partion(array, size, lower, upper);
    //cout<<"\ncen   "<<cen<<endl;
    quicksort(array, size, lower, cen - 1);
    quicksort(array, size, cen + 1, upper);
  }
}

int partion(int array[], int size, int lower, int upper)
{
  int pivot = array[lower];
  int start = lower;
  int end = upper;
  //cout<<"\nlower "<<lower;
  //cout<<"\nupper  "<<upper<<"   ";
  cout<<"\n\n";
  while (start < end)
  {
    cout<<"\n";
    while (array[start] <= pivot)
    {
      start++;
      cout<<"\nstart : "<<start;
    }
    while (array[end] > pivot)
    {
      end--;
      cout<<"\nend : "<<end;
    }
    if (start < end)
    {
      int temp = array[start];
      array[start] = array[end];
      array[end] = temp;
      cout<<"\narray[end] and array[start] "<<array[start]<<"   "<<array[end]<<endl;
    }
  }
//swaped lower value=value of end |||| the end value=value of pivot
  array[lower] = array[end];
  array[end] = pivot;

  return end;
}