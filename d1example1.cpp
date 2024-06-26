#include <iostream>
using namespace std;
 class spruha {
    int length , breadth; 
    public :
    int setData(int x, int y)
    {
        length = x;
        breadth = y;
        return x*y;
       
    }

    int area()
    {
        cout << length*breadth;
    }

   
};

int main() {
    spruha s1;
    s1.setData(3, 40);
    s1.area(); 
    int P = s1.setData(3,40);
    cout <<endl<<  "product :" << P << endl;
    return 0; }

 
