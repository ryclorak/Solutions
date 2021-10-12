/*
from Codewars https://www.codewars.com/kata/525f50e3b73515a6db000b83
*/

#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string ret = "(";
  
  for (int i=0; i<3; i++) {
    ret += std::to_string(arr[i]);
  }
  ret += ") ";
  for (int i=3; i<6; i++) {
    ret += std::to_string(arr[i]);
  }
  ret += "-";
  for (int i=6; i<10; i++) {
    ret += std::to_string(arr[i]);
  }
  
  return ret;
}
