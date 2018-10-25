#include <iostream>
using namespace std;
int main (){
    int r,d;
    float phi=3.14,luas,keliling;

    cout<<"masukan jari jari lingkaran : ";
    cin>>r;

    luas=phi*r*r;
    d=r+r;
    keliling=phi*d;
    cout<<"luas lingkaran adalah     : "<<luas<<endl;;
    cout<<"Keliling Lingkaran adalah : "<<keliling;
    return 0;
}
