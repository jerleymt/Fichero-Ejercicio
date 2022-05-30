#include"iostream"
#include<fstream>
using namespace std;

int main(){
  ofstream doc;

  doc.open("jose.txt",ios::out);
  doc<<"Hola mi nombre es jose Erley";
  doc.close();

  doc.open("jose.csv");
  doc<<"Hola mi nombre"" es jose Erley";
  doc.close();
  
  return 0;
}