#include <string>
using namespace std;

string Encode(const string &str) //vowel to int
{
  string temp;
  temp = str;  //copy param to later return modified
  for (int i=0; i<str.size(); i++)  //loop through str
  {
    switch (str[i])  //change each letter as appropriate 
    {
      case 'a':
        temp[i] = '1';
        break;
      case 'e':
        temp[i] = '2';
        break;
      case 'i':
        temp[i] = '3';
        break;
      case 'o':
        temp[i] = '4';
        break;
      case 'u':
        temp[i] = '5';
        break;
    }
  }
  return temp;    //return modified copy of str
}

string Decode(const string &str) //int to vowel
{
  string temp;
  temp = str;  //copy of encoded str
  for (int i=0; i<str.size(); i++)
  {
    switch (str[i])
    {
      case '1':
        temp[i] = 'a';
        break;
      case '2':
        temp[i] = 'e';
        break;
      case '3':
        temp[i] = 'i';
        break;
      case '4':
        temp[i] = 'o';
        break;
      case '5':
        temp[i] = 'u';
        break;
    }
  }
  return temp;
}
