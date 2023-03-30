/*  Todo programa começa comentado
 *  identaçao 2 espaços
 *  limite de linhas 50
 *  author: cristiano
 *  data: 30/03/2023
 *  escreve ola mundo
 *  para compilar digite:
 *  g++ EX00_HelloWorld.cpp -o EX00_HelloWorld
 */
#include <iostream>

using namespace std;  // em caso de usar alguma lib
using std::cout;      // em caso especifico

int main(int argc, char *argv[])
{
  // system("chcp 1252 > nul");  
  int a,b,maior;              // variaveis
  cout << "digite o numero" << endl;
  cin >> a >> b;              // lendo variaveis 

  if(a > b)                   // condiçao
  {
    cout << "maior " << a << endl;
  };
  if(a < b)
  {
    cout << "maior " << b << endl;
  };

  maior = a + b;
  cout << "soma " <<  maior << endl;

  system("Pause");
  return 0;
}
