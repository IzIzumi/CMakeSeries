#include "Animal.h"
#include <iostream>

Animal::Animal(int id, string name):_id(id),_name(name){};
void  Animal::show_inf(){
    cout << "Infor : " << _id << "-" << _name << endl;
}