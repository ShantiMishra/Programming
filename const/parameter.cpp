#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z)
       {
        brand=x;
        model=y;
        year=z;
       }
};
int main()
{
    Car carobj(" BMW "," X5 ", 1998 ); 
    Car carobj2("oodii"," X5", 1990);
    cout<<carobj.brand<<carobj.model<<carobj.year;
    cout<<endl;
    cout<<carobj2.brand<<carobj2.model<<carobj2.year;
    cout<<endl;
    return 0;
}