#include <iostream>

using namespace std;

int main()
{
  int num;
  int sum=0;
  cout << "How many numbers?" << endl;
  cin >> num;
  for (int i=1; i<num; i++)
  {
    if (i%3==0 && i%5==0)
    {
      cout << "fizzbuzz ";
    }
    else if (i%3==0)
    {
      cout << "fizz ";
    }
    else if (i%5==0)
    {
      cout << "buzz ";
    }
    cout << i << endl;
  }
  
  for (int j=0; j<num; j++)
  {  
    if (j%3==0 || j%5==0)
      sum+=j;
  }
  
  cout << "Sum: " << sum << endl;
  
  return 0;
}