#include <iostream>
using namespace std;

int main()
{
    int alas, tinggi, sisi;
    float luas,keliling;

    cout<<"Masukkan nilai alas  :";
    cin>>alas;
    cout<<"Masukan nilai tinggi :";
    cin>>tinggi;
    cout<<"Masukkan nilai sisi  :";
    cin>>sisi;

    luas=alas*tinggi;
    keliling=sisi+sisi+sisi+sisi;

    cout <<"Luas jajar genjang adalah     :"<<luas<<endl;
    cout <<"Keliling jajar genjang adalah :"<<keliling;
    return 0;
}
