#include <cstdlib>
#include <string>
#include<iostream>
using std::cout;
using std::cin;
using std::getline;

#include "Pessoa.h"
 
using namespace std;

  
// implementação da classe Pessoa
bool Pessoa::isCPFValido(string cpf){
  // alguns cálculos aqui
  return true;
}
 
int main(int argc, char *argv[]){


  Pessoa pessoa1( "Magia" );
  Pessoa pessoa2( "Ciência" );

   cout << "Suas habilidade é: " << pessoa1.getPessoaName( ) << " e " << pessoa2.getPessoaName( ) << '\n';
   
pessoa1.displayMessage( );

  if(Pessoa::isCPFValido("12345")){
    cout << "CPF Válido" << endl;
  }
  else{
    cout << "CPF inVálido" << endl;
  }
     
  system("PAUSE");
  return EXIT_SUCCESS;
}
