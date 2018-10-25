#include <iostream>
using namespace std;

int main()
{
    int panjang, lebar;
    float luas, keliling;

    cout<<"Masukkan nilai panjang   :";
    cin>>panjang;
    cout<<"Masukkan nilai lebar     :";
    cin>>lebar;

    luas=panjang*lebar;
    keliling=panjang+lebar+panjang+lebar;

    cout<<"Luas persegi panjang adalah       :"<<luas<<endl;
    cout<<"Keliling persegi panjang adalah   :"<<keliling;
    return 0;
}
