#include <iostream>
#include <stdlib.h>

using namespace std;
void cifrado_tabla(string& cifrado, string palabra)
{
 system("cls");
  cout << "Cifrado alfabeto invertido" << endl;
   cout << "Ingrese una palabra para decifrar" << endl;
  cin.ignore();
  getline(cin, palabra);
  int i;
  for(i=0; i<palabra.length(); i++)
  {
      if (palabra[i]==' '){cifrado[i]=' ';}
 if ((palabra[i]=='a') || (palabra[i]=='A')){cifrado[i]='z';}
 if ((palabra[i]=='b') || (palabra[i]=='B')){cifrado[i]='y';}
 if ((palabra[i]=='c') || (palabra[i]=='C')){cifrado[i]='x';}
 if ((palabra[i]=='d') || (palabra[i]=='D')){cifrado[i]='w';}
 if ((palabra[i]=='e') || (palabra[i]=='E')){cifrado[i]='v';}
 if ((palabra[i]=='f') || (palabra[i]=='F')){cifrado[i]='u';}
 if ((palabra[i]=='g') || (palabra[i]=='G')){cifrado[i]='t';}
 if ((palabra[i]=='h') || (palabra[i]=='H')){cifrado[i]='s';}
 if ((palabra[i]=='i') || (palabra[i]=='I')){cifrado[i]='r';}
 if ((palabra[i]=='j') || (palabra[i]=='J')){cifrado[i]='q';}
 if ((palabra[i]=='k') || (palabra[i]=='K')){cifrado[i]='p';}
 if ((palabra[i]=='l') || (palabra[i]=='L')){cifrado[i]='o';}
 if ((palabra[i]=='m') || (palabra[i]=='M')){cifrado[i]='ñ';}
 if ((palabra[i]=='n') || (palabra[i]=='N')){cifrado[i]='n';}
 if ((palabra[i]=='ñ') || (palabra[i]=='Ñ')){cifrado[i]='m';}
 if ((palabra[i]=='o') || (palabra[i]=='O')){cifrado[i]='l';}
 if ((palabra[i]=='p') || (palabra[i]=='P')){cifrado[i]='k';}
 if ((palabra[i]=='q') || (palabra[i]=='Q')){cifrado[i]='j';}
 if ((palabra[i]=='r') || (palabra[i]=='R')){cifrado[i]='i';}
 if ((palabra[i]=='s') || (palabra[i]=='S')){cifrado[i]='h';}
 if ((palabra[i]=='t') || (palabra[i]=='T')){cifrado[i]='g';}
 if ((palabra[i]=='u') || (palabra[i]=='U')){cifrado[i]='f';}
 if ((palabra[i]=='v') || (palabra[i]=='V')){cifrado[i]='e';}
 if ((palabra[i]=='w') || (palabra[i]=='W')){cifrado[i]='d';}
 if ((palabra[i]=='x') || (palabra[i]=='X')){cifrado[i]='c';}
 if ((palabra[i]=='y') || (palabra[i]=='Y')){cifrado[i]='b';}
 if ((palabra[i]=='z') || (palabra[i]=='Z')){cifrado[i]='a';}
      if (palabra[i]=='.'){cifrado[i]='.';}
  }
  cout <<"La palabra ingresada fue: " << palabra << endl;
  cout <<"La palabra en cifrado es: ";
  for (int k=0; k<=i; k++)
  {
  cout << cifrado[k];
  }
  cout << endl;
  system ("pause");
}

int main()
{
    int op;
    string palabra, cifrado;
    do
    {
        cout << "1. Ingresar una palabra" << endl;
        cout << "2. Ver la tabla del cifrado" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion (numeros)" << endl;
        cin >>op;
        switch (op)
        {
            case 1: cifrado_tabla(cifrado, palabra); break;
            case 2:  cout << "a-A = z" << endl; cout << "b-B = y" << endl; cout << "c-C = x" << endl;
            cout << "d-D = w" << endl; cout << "e-E = v" << endl; cout << "f-F = u" << endl; cout << "g-G = t" << endl;
            cout << "h-H = s" << endl; cout << "i-I = r" << endl; cout << "j-J = q" << endl; cout << "k-K = p" << endl;
            cout << "l-L = o" << endl; cout << "m-M = ñ" << endl; cout << "n-N = n" << endl; cout << "ñ-Ñ = m" << endl;
            cout << "o-O = l" << endl; cout << "p-P = k" << endl; cout << "q-Q = j" << endl; cout << "r-R = i" << endl;
            cout << "s-S = h" << endl; cout << "t-T = g" << endl; cout << "u-U = f" << endl; cout << "v-V = e" << endl;
            cout << "W-w = d" << endl; cout << "x-X = c" << endl; cout << "y-Y = b" << endl; cout << "z-Z = a" << endl;
            system ("pause"); system ("cls");
            break;
            case 3: cout << "SALIENDO..." << endl; break;
        }
    }
    while (op!=3);

    return 0;
}
