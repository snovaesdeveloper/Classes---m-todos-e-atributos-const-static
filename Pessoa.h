#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using std::cout;

#include <string>
using std::string;


class Pessoa
{
 public:  
   Pessoa ( string name )
    {
        setPessoaNome( name );
    }
   void setPessoaNome( string name )
    {
        nomePessoa = name;
    }

    string getPessoaName(  )
    {
        return nomePessoa;
    }

    void displayMessage( ) const
    {
        cout << "Bem vindo, " << nomePessoa << '\n';
    }

    // um método estático que permite verificar a validade
    // de um número de CPF
    static bool isCPFValido(string);
   
  private:
    string nome;
    int idade;
    string nomePessoa;
};

#endif // PESSOA_H
