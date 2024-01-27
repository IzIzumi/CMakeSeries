#include <iostream>
using namespace std;

template<typename T> T add(T,T);

int main(){
  cout << "Wellcome to C++ with Cmake!" << endl;
  cout << add(3,3) << endl;
  return 0;
}

template<typename T> T add(T x,T y){
  return x + y;
}