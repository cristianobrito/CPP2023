#include <iostream>

using std::cout;  // pra usar nomes
using std::cin;
using std::endl;

int main(int argc, char *argv[])
{
  int num1,num2,soma;

  cout << "digite os numeros a e b:\n" << endl;
  cin >> num1 >> num2;

  if (num1 == num2) 
  {
    cout << "numeros iguais\n" << num1 << num2 << endl;
  };
  if (num1 > num2)
  {
      cout << "num1 " << num1 << " maior \n" << endl;
  };
  if(num1 < num2)
  {
    cout << "num2 " << num2 << " maior \n"    << endl;
  };
  
  soma = num1 + num2;
  cout << "soma: " << soma << "\n" << endl;
  return 0;
}
