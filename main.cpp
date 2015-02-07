// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>
#include <string.h> // std::list
#include <set>
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
 while (!mi_cola.empty())
        {
            if(mi_cola.front()%2 != 0)
                {
                    return false;
                }
                mi_cola.pop();
        }
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    while (!mi_lista.empty())
            {
                if(mi_lista.front()%2 != 0)
                    {
                        return false;
                    }
                    mi_lista.remove(mi_lista.front());            }
    return true;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
        while (!mi_cola.empty())
        {
            if(mi_cola.front() == str)
                {
                    return true;
                }
                mi_cola.pop();
        }
    return false;
}

//devuelve true si str es un elemento de mi_lista, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
     while (!mi_lista.empty())
            {
                if(mi_lista.front() == str)
                    {
                        return true;
                    }
                    mi_lista.remove(mi_lista.front());
            }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int suma=0;
    while (!mi_cola.empty())
        {
           suma +=mi_cola.front();
                mi_cola.pop();
        }
    return suma;
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
    int suma = 0;
    string cadena = "";
    while (!mi_lista.empty())//*************************************
    {
    cadena =  cadena + mi_lista.front();
    mi_lista.pop_front();
    }
    suma = cadena.size();
    //*************************************************************
    return suma;
}
//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    list<char>temp = mi_lista;
    temp.sort();
    for(list<char>::iterator i = temp.begin(); i == temp.end(); i++)
        {
        if(*i == mi_lista.front())
            {
                return true;
            }
            else
                return false;
            mi_lista.pop_front();
        }
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
