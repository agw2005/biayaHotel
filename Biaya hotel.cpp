#include <iostream>
using namespace std;

int main(){

    double biayaA, biayaS,hari;
    string bulan;
    cout<<"Pada bulan apa anda akan menginap?"<<endl;
    cin>>bulan;
    cout<<"Berapa hari anda akan menginap?"<<endl;
    cin>>hari;
    if(bulan == "Mei" || bulan == "Oktober"){
        if(hari > 7 && hari <= 14){
            biayaS = hari*50*19/20;
            biayaA = hari*65;
        }
        else if(hari > 14){
            biayaS = hari*50*7/10;
            biayaA = hari*65*9/10;
        }
        else{
            biayaS = hari*50;
            biayaA = hari*65;
        }
    }
    else if(bulan == "Juni" || bulan == "September"){
        if(hari > 14){
            biayaS = 75.2*hari*4/5;
            biayaA = hari*68.7*9/10;
        }
        else{
            biayaS = hari*75.2;
            biayaA = hari*68.7;
        }
    }
    else if(bulan == "Juli" || bulan == "Agustus"){
        biayaS = 76*hari;
        if(hari > 14){
            biayaA = 77*hari*9/10;
        }
        else{
            biayaA = 77*hari;
        }
    }
    else{
        cout<<"Bulan yang dimasukan tidak sesuai";
    }
    cout<<"Apartemen: "<<biayaA<<" USD"<<endl;
    cout<<"Studio: "<<biayaS<<" USD"<<endl;
    return 0;
}