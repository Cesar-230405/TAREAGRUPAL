//suma de dos numeros
#include<iostream>
using namespace std;
class Calculadora {
	public: 
	void calculadora(){
		int opcion=0;
        float num1, num2;
        float sum=0, res=0, mul=0, div=0;
        
        cout<<"1 - Suma"<<endl;
        cout<<"2 - Resta"<<endl;
        cout<<"3 - Multiplicacion"<<endl;
        cout<<"4 - Division"<<endl;
        cout<<"Coloca la opcion que deseas realizar: "; cin>>opcion;
        cout<<"-------------------------------------------"<<endl;
        
        switch(opcion){
        case 1: cout<<"Escribe el primer numero: "; cin>>num1;
                cout<<"Escribe el segundo numero: "; cin>>num2;
                sum=num1+num2;
                cout<<"EL total de la suma de "<<num1<<"+"<<num2<<" es: "<<sum<<endl;
                break;
        case 2: cout<<"Escribe el primer numero: "; cin>>num1;
                cout<<"Escribe el segundo numero: "; cin>>num2;
                res=num1-num2;
                cout<<"EL total de la resta de "<<num1<<"-"<<num2<<" es: "<<res<<endl;
                break;
        case 3: cout<<"Escribe el primer numero: "; cin>>num1;
                cout<<"Escribe el segundo numero: "; cin>>num2;
                mul=num1*num2;
                cout<<"EL total de la multiplicacion de "<<num1<<"x"<<num2<<" es: "<<mul<<endl;
                break;
        case 4: cout<<"Escribe el primer nuero: "; cin>>num1;
                cout<<"Escribe el segundo numero: "; cin>>num2;
                div=num1/num2;
                cout<<"EL total de la division de "<<num1<<"/"<<num2<<" es: "<<div<<endl;
                break;
        }     
       
		
	}
        
       
};
