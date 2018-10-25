#include<iostream>
using namespace std;

int main()
{
double d1,d2,A,B;
double Keliling;
double Luas;

cout<<"\t\t\tMENGHITUNG KELILING DAN LUAS segitiga"<<endl;
cout<<"Masukkan Diagonal 1    : ";
cin>>d1;
cout<<"Masukkan Diagonal 2    : ";
cin>>d2;
cout<<"Masukan sisi A        : ";
cin>>A;
cout<<"Masukan sisi B         : ";
cin>>B;



cout<<"\=========================="<<endl;
Keliling=2*(A+B);
cout<<"Keliling : "<<Keliling<<endl;
Luas=d1*d2/2;
cout<<"Luas     : "<<Luas<<endl;


}
