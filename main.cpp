#include<iostream>
#include<cmath>
using namespace std;
long double Calcular_Distancia(const pair<long double,long double>p1,const pair<long double,long double>p2){
    long double distancia=sqrt(pow(p1.first-p2.first,2)+pow(p1.second-p2.second,2));
    return distancia;
}


int main(){
    cout.precision(4); cout << fixed;
    int numero_de_puntos;
    long double distancia_minima;
    pair<long double ,long double>puntos[10000];

    while(cin>>numero_de_puntos && numero_de_puntos!=0){
        distancia_minima = 10000;
        for(unsigned i=0;i<numero_de_puntos;i++){
            cin >> puntos[i].first >> puntos[i].second;}

        for(unsigned i=0;i<numero_de_puntos;i++){
            for(unsigned j=i+1;j<numero_de_puntos;j++){
                distancia_minima = min(Calcular_Distancia(puntos[i],puntos[j]),distancia_minima);
            }
        }
        if(distancia_minima>=10000){
            cout << "INFINITY" << endl;}
        else{
            cout << distancia_minima<< endl;}
    }
}