/*  AUTHOR: CRISTIANO 
 *  data:31/03/2023
 *  limite de linhas 60
 *  identação 2 espaços e apartir da linha 30
 *  variaveis e cast
 */
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;         // para usar nome
using std::cout;

int main(int argc, char *argv[])
{
  int a;                     // declara variaveis
  char muda;

  cout << "digite a" << endl;
  cin >> a;                  // le variaveis
  muda = (char)a;            // cast muda tipo
  cout << "cast: " << muda  << endl;

  system("Pause");
  return 0;
}
