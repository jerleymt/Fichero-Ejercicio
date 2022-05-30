//Made by Jose Erley
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<fstream>
using namespace std;
const char limpiar[5]="cls";

//Decalaracion de mis funciones
void menu(),Crear(), Leer(), Escribir();
string extension();

//Inicio de programa
int main(){
  menu();
  return 0;
}
//Me permite escoger la extension de un fichero.
string extension(){
  string ex;
  int est;
  cout<<"\nIngrese la extencion "<<endl;
  cout<<"\n1) txt"<<endl;
  cout<<"2) csv"<<endl;
  cin>>est;
  switch(est){
    case 1: ex =".txt";break;
    case 2: ex = ".csv";break;
    default:break;
  }
  return ex;
}
//Menu principal de mi programa
void menu(){
  system(limpiar);
  int opcion;
  cout<<"\n\n1) Crear un nuevo archivo"<<endl;
  cout<<"2) Ver archivos creados"<<endl;
  cout<<"3) agrgar informacion a un ficheero"<<endl;
  cout<<"4) Salir"<<endl;
  cin>>opcion;
  switch (opcion){
    case 1: Crear();
      break;
    case 2: Leer();
      break;
    case 3:  Escribir();
      break;
    case 4: main();
      break;
    default:
      break;
  }  
}

void Escribir(){
  system(limpiar);
  ofstream doc1;
  string nombre;
  string texto;

  cout<<"Ingrese el nombre del archivo "<<endl;
  cin.ignore();
  getline(cin,nombre);
  doc1.open(nombre+extension(),ios::app);
  
  
  cout<<"Escriaba texto a agregar"<<endl;
  getline(cin,texto);

  doc1<<texto<<endl;

  doc1.close();
  menu();
}
void Crear(){
  system(limpiar);
  ofstream doc;
  string nombre,estencion,texto;

  cout<<"Digita el nombre de archivo"<<endl;
  cin.ignore();
  getline(cin,nombre);  
  doc.open(nombre+extension(),ios::out);

  cout<<"Ingrese el texto... "<<endl;
  cin.ignore();
  getline(cin,texto);

  doc<<texto<<endl;

  doc.close();
  menu();
}
void Leer(){
  system(limpiar);
  ofstream doc;
  cout<<"Esta oopcion aun no esta diponible"<<endl;
  cin.ignore();
  system("pause");
  menu();
}

 