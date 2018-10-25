#include <iostream>
using namespace std;

int main()
{
    int alas, tinggi, sisi;
    float luas,keliling;

    cout <<"Masukkan nilai alas     :";
    cin>>alas;
    cout <<"Masukkan nilai tinggi   :";
    cin>>tinggi;
    cout <<"Masukkan nilai sisi     :";
    cin>>sisi;

    luas=0.5*alas*tinggi;
    keliling=sisi+sisi+sisi;

    cout <<"Luas dari segitiga adalah     :"<<luas<<endl;
    cout <<"Keliling dari segitiga adalah :"<<keliling;
    return 0;
}
