#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal{
    private:
        int _id;
        string _name;
    public:
        Animal(int id,string name);
        void show_inf();
};
#endif