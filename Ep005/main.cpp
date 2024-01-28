#include <iostream>
#include "Animal.h"
#include "add_func.h"
using namespace std;

int main(){
  Animal cat(1,"Tom");
  cat.show_inf();
  cout << "--------->" << add_(3,5) << endl;
  return 0;
}
