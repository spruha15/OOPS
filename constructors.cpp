#include<iostream>
#include<string>
using namespace std;
class spruha
{
    private:
    int age;
    string name;
    int height;
    
    public:

    spruha () // non parameterized constructor
    {
        age=13;
        name = "Null";
        height = 0;
    }

    spruha(int x, string y, int z) // parameterized constructor
    {
        age =x;
        name = y;
        height = z;
    }

    spruha (spruha&s1) //copy constructor
    {
        age = s1.age;
        name =  s1.name;
        height = s1.height;
    }

    int getData()
    {
        cout<< age <<endl;
        cout<<name<< endl;
        cout<< height<< endl;
       // return age;
    }


};

int main()
{
    spruha s1; // calling default constructor.
    spruha s2(8,"aabha",7); // parameterized constructor
    spruha s3(s2); // copy constructor
    s1.getData();
    s2.getData();
    s3.getData();
    return 0;

}