#include <iostream>

using namespace std;

class person{
    int age;
    public:
    person()
    {
        age=20;
        cout<<"default constructor"<<endl;
    }
    person(int age1)
    {
        cout<<"parameterised constructor"<<endl;
        age=age1;
    }
    person(person &p1)
    {
        cout<<"copy constructor"<<endl;
        age=p1.age;
    }
    int printage(){
        return age;
    }
    
};
int main()
{
    person person1,person2(50),person3(person2);
    cout<<person1.printage()<<endl;
    cout<<person2.printage()<<endl;
    cout<<person3.printage()<<endl;
    return 0;
}

// afdghjkl