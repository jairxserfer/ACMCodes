#include <iostream>
#define MAX 500000

using namespace std;


void llenarArreglo(int mv[], int n){
  for(int i = 0; i < n; i++ ){
    cout<<"Ingrese el alumno: "<< i+1<<endl;
    cin>>mv[i];
  }
}
void mostrarArreglo(int mv[], int n){
  for(int i = 0; i < n; i++ )
    cout<<mv[i]<<" ";

  cout<<endl;
}


int main() {
  int numero1;
  std::cout << "Ingrese la cantidad de alumnos del salon1" << std::endl;
  cin>>numero1;
  int salon1[numero1];
  int numero2;
  std::cout << "Ingrese la cantidad de alumnos del salon2" << std::endl;
  cin>>numero2;
  int salon2[numero2];

  cout<<"SALON 1"<<endl;
  llenarArreglo(salon1,numero1);
  mostrarArreglo(salon1,numero1);
  cout<<"SALON 2"<<endl;
  llenarArreglo(salon2,numero2);
  mostrarArreglo(salon2,numero2);
    return 0;
}
