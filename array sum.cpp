#include <iostream>
using namespace std;

int main() 
{
  
  int arr[] = {5,4,2,3,1};
  int size = 5;

  long sum = 0;

  for(int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }

  cout << sum;
}
