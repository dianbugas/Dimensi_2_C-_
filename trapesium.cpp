#include <iostream>
using namespace std;

int main()
{
    int d1, d2, t, m;
    float luas,keliling;

    cout<<"Masukan nilai diagonal 1 :";
    cin>>d1;
    cout<<"Masukan nilai diagonal 2 :";
    cin>>d2;
    cout<<"Masukkkan nilai tinggi   :";
    cin>>t;
    cout<<"Masukkan nilai sisi miring   :";
    cin>>m;

    luas=(d1+d2)*0.5*t;
    keliling=(2*m)+d1+d2;

    cout <<"Nilai luas Trapesium adalah     :"<<luas<<endl;
    cout <<"Nilai keliling Trapesium adalah :"<<keliling;
    return 0;
}
