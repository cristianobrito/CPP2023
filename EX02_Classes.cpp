///////////////////////////////////////////////////////
/* 
 * author: nano data 31/03/2023
 * limite de linhas 55 identação 2 espaços              
 * criando classes e funções menbros
 * criando objetos e funções menbros
 * if variaveis e cast
 *
 */
#include <iostream>

using namespace std;   // ou using std::cout;

class Book
{
  public:
  int a;
  char b;

  void mudaTipo(void)
  {
    cout << "digite o numero " << endl;
    cin >> a;
    b = (char)a;
    cout << "cast feito " << b << endl;
  }
};

int main()
{
  Book meuBook;
  meuBook.mudaTipo();

  system("Pause");
  return 0;
}
