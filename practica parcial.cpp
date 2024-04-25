//ejercicio 1
/* [] declaro variables
// [] averiguar la cuenta del celsius a fahrenhei (grados centígrados × 9/5 +32.)
// [] pedir que el usuario ingrese los grados centigrados
// [] con una variable el calculo de los grados
#include <iostream>

using namespace std;

int main()
{
    float cen;
    float faren;
    cout<<"ingrese los grados centigrados"<<endl;
    cin>>cen;
    faren = (cen*9/5)+32;
    cout<<"el resultado es:"<< faren <<endl;
    return 0;
} */

// ejercicio 3
//[]declaramos variables.
//[] pedimos que ingrese un numero.
//[] en el do while definimos una variable (num)de tipo entero.
//[] por ultimo pusimos un while diciendo que num tenia que ser distinto de 0 para que cuando llegue al mismo cortara.


/*#include <iostream>

using namespace std;

int main()
{
     int num;
     int i;

     cout << "ingrese un numero: ";
     cin >> num;

     do{
      cout<< ("%d \n", num) << endl;
      num--;
     }
        while(num != 0);

  return 0;
} */


//[] declaramos las variables.
//[] pusimos un cout y cin para que el usuario ingrese un limite de la suma.
//[] usamos un acumulador.
//[] usamos un for para que vaya sumando los numeros.
//[] por ultimo mostramos la suma.


// ejercicio 4
/* #include <iostream>

using namespace std;

int main()
{
    int  num;
    int suma = 0;
    cout<<"ingrese el limite de la suma: "<<endl;
    cin>> num;

    for(int i = 1; i <= num; i++){
        suma = suma + i;
        cout<< i << " + ";
    }
    cout<<"la suma es igual a: " << suma;

    return 0;
} */

//[] declaramos las variables.
//[] se penso como en pseudo codigo y se utilizo un v o f.
//[] se escribio las condiciones de verdadero o falso.
//[] despues se uso un fin para mostrar si el numero es primo o no.
ejercicio 2
#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout<<"ingrese un numero" << endl;
    cin>> numero;
    bool esPrimo = true;

    if(numero <= 1){
        esPrimo = false;
    }
    else{
    for( int i = 2; i*i<=numero;i++)
        if(numero % i == 0){
            esPrimo = false;
          }
        }
     if(esPrimo){
        cout<< numero<< " es un numero primo";
     }
      else{
        cout << numero << " no es un numero primo";
      }

    return 0;
}






