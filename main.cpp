#include"iostream"
#include<fstream>
using namespace std;

void Escribir(){
  ofstream doc1;
  string nombre;
  string texto;

  cout<<"Ingrese el nombre del archivo "<<endl;
  getline(cin,nombre);

  doc1.open(nombre+".txt",ios::app);

  cout<<"Escriaba texto a agregar"<<endl;
  getline(cin,texto);

  doc1<<texto<<endl;

  doc1.close();
}
void Crear(){
  //--------Definicion de las variables--------------
  ofstream doc;//variable tipo archivo
  string nombre;//variable cadena caracter
  string texto;//variable que almacena texto

//---------Pedir al usuario por el nombre del achivo----------
  cout<<"digita el nombre de archivo"<<endl;
  getline(cin,nombre);
//Se crea un fichero con el nombre pediso mas las extencion .txt predeterminada
  doc.open(nombre+".txt",ios::out);
//Pedir el texto al usuario
  cout<<"Ingrese el texto... "<<endl;
  getline(cin,texto);
//ingresa el texto al fichero
  doc<<texto<<endl;
//Cierra el fichero
  doc.close();
}
void Leer(){
  ofstream doc;

  doc.open("Erley.csv");
  doc<<"NOMBRE, APELLIDO, TELEFONO, DIRECCION"<<endl;
  doc<<"Jose, Murillo, 311 724 7871, Carrera 28 c5 k";
  doc.close();
}
void menu(int opcion){
  opcion;
  switch (opcion){
    case 1: Crear() ;break;
    case 2: cout<<"2) Ver archivos creados"<<endl;break;
    case 3: cout<<"3) agrgar informacion a un ficheero"<<endl;break;
    default: main(); break;
  }
}
int main(){
  int opc;

  cout<<"1) Crear un nuevo archivo"<<endl;
  cout<<"2) Ver archivos creados"<<endl;
  cout<<"3) agrgar informacion a un ficheero"<<endl;
  cout<<"3) Salir"<<endl;
  cin>>opc;

  menu(opc);
  
  //Escribir();
 // Leer();
  return 0;
}