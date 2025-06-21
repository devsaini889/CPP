// Pointer to Derived Classes 



#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void Display()
    {
        cout << "The variable of base class: " << var_base << endl;
    }
};

class Derived : public BaseClass
{
public:
    int var_derived;
    void Display()
    {
        cout << "The variable of base class is: " << var_base << endl;
        cout<<" The variable of derived class is: "<<var_derived<<endl;
    }
};
int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 55;  This will give an error
    base_class_pointer->Display();


    Derived * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base= 5600;
    derived_class_pointer->var_derived = 1100;
    derived_class_pointer->Display();

    return 0;
}