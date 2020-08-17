#include <iostream>
void Ingresar(int Numero[]);
int busqueda(int Numero[],int num);
using namespace std;

int main() {
  int Numero[10]={0,0,0,0,0,0,0,0,0,0}, num , opcion;
  cout << "Bienvenido\n";
  do{
    cout << "Que desea realizar?\n1.-Ingresar\n2.-Buscar\n3.-Salir\n";
    cin >> opcion;
  switch (opcion)
  {    
    case 1:
    cout << "Ingrese los numeros de la lista\n";
    Ingresar(Numero);
    break;
    case 2:
    cout << "Que numero Desea buscar?: \n";
    cin >> num ;
    if(busqueda(Numero,num)==-1)
    {
      cout << "Numero no encontrado\n";

    }else{
    cout << "El numero se encuentra en la posicion: " << busqueda(Numero,num) << endl;
    }
    break;    
  }
  
  } while(opcion!=3);

  return 0;

}

void Ingresar(int Numero[])
{
  for (int i=0;i<10;i++)
  {
    cout << "Ingrese el numero " << i+1 << ": ";
    cin >> Numero[i];
  }
} 

int busqueda(int Numero[],int num)
{
  for(int i=0;i<10;i++)
  {
    if(Numero[i]==num)
    {
      return i;
    }

  }
  return -1;
}