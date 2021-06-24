#include <iostream>
#include <cassert>
using namespace std;
int mesAnio(int, int);
bool bisesto (int);
int main(){
	assert(31 == mesAnio(5,1816));
	assert(31 == mesAnio(7,1800));
	assert(31 == mesAnio(8,2000));
	assert(31 == mesAnio(10,1960));
	assert(30 == mesAnio(6,2080));
	assert(30 == mesAnio(4,1800));
	assert(30 == mesAnio(9,1700));
	assert(30 == mesAnio(11,1600));
	assert(29 == mesAnio(2,2024));
	assert(28 == mesAnio(2,2019));
	int mes,anio;
	int mesAnio(int, int);
	cout<<"ingrese un mes:";
	cin>>mes;
	cout<<"ingrese un anio:";
	cin>>anio;
	cout<<"el mes tiene:"<<mesAnio(mes,anio);

}
int mesAnio(int m, int a){
	
 	bool bisiesto (int);
 	return
	(m == 1||m==3||m==5||m==7||m==8||m==10||m==12)and a>1582 ? 31 :
	(m == 4||m==6||m==9||m==11) and a>1582 ? 30:
 	m == 2 and  a>1582 and bisiesto(a)==true ?29:
 	m == 2 and  a>1582 and bisiesto(a)==false?28:
 	0;}
 
 bool bisiesto(int year){return
 	year%4==0 and year%100!=0 or year%400==0 ? true :
	false; 	
 } 
