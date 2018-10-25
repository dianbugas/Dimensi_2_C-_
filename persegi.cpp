#include <iostream>
using namespace std;

int main()
{
    int sisi;
    float luas,keliling;

    cout <<"Masukkan nilai sisi :";
    cin>>sisi;

    luas=sisi*sisi;
    keliling=sisi+sisi+sisi+sisi;

    cout<<"Nilai luas persegi adalah     :"<<luas<<endl;
    cout<<"Nilai keliling persegi adalah :"<<keliling;
    return 0;
}
