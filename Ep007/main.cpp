#include <iostream>
#include "Animal.h"
#include "add_func.h"
#include "log.h"
using namespace std;

int main(){
  Animal cat(1,"Tom");
  cat.show_inf();
  cout << "--------->" << add_(333,555) << endl;
  log_data("Hello there",LogType::FATAL_ERROR);
  return 0;
}
