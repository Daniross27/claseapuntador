#include <iostream>
using namespace std;
int main(int argc , char * argv[]){

    int x;
    int *apuntador =&x;
cout<<"ingrese un su edad: ";
 cin>>*apuntador;

 if (*apuntador <= 17)
 {
    cout<<"es menor de edad"<<endl;
 }else
 {
    cout<<"usted es mayor de edad"<<endl;
 }
  delete[] apuntador;
 apuntador= NULL; delete[] apuntador;
 
    cout<<"ustede ingreso el numero "<<x<<endl;
    cout<<"espacio de memoria"<<&apuntador<<endl;
    return 0;
}