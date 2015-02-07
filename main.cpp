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
 while (!mi_cola.empty())//recorre la cola hasta que este vacia
        {
            if(mi_cola.front()%2 != 0)// si el residuo es diferente de cero no es par
                {
                    return false;
                }
                mi_cola.pop();//saca elemento de la cola
        }
    return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    while (!mi_lista.empty())//recorre la lista
            {
                if(mi_lista.front()%2 != 0)//si el residup es diferente de cero no es par
                    {
                        return false;
                    }
                    mi_lista.remove(mi_lista.front());//elimina el primer elemento de la lista
            }
    return true;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
        while (!mi_cola.empty())//recorre la cola
        {
            if(mi_cola.front() == str)//ver si el elemnto de enfrente de la cola es lo que buscamos srt
                {
                    return true;
                }
                mi_cola.pop();//saca elemento de la cola
        }
    return false;
}

//devuelve true si str es un elemento de mi_lista, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
     while (!mi_lista.empty())//recprre la lista
            {
                if(mi_lista.front() == str)//busca str en el primer elemento de la lista
                    {
                        return true;
                    }
                    mi_lista.remove(mi_lista.front());//remueve el primer elemento de la lista
            }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int suma=0;//variable para gusrdar la suma
    while (!mi_cola.empty())//recorre la cola
        {
           suma +=mi_cola.front();//acumula la suma
                mi_cola.pop();//saca elemento de la cola
        }
    return suma;//retorma suma
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
    int suma = 0;//variable que almacena la suma
    string cadena = "";//variable para hacer una sola cadena de string con elementos de la lista
    while (!mi_lista.empty())//*************************************
    {
    cadena =  cadena + mi_lista.front();//va creando la cadena
    mi_lista.pop_front();//saca elemento de la lista
    }
    suma = cadena.size();//pasa a suma el tamaño de caracteres de la cadena
    //*************************************************************
    return suma;//retorna suma con la cantidad de letras de las cadenas en la lista
}
//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    list<char>temp = mi_lista;//lista temporal = a lista original
    temp.sort();//ordena la lista tem
    for(list<char>::iterator i = temp.begin(); i == temp.end(); i++)//recorre la lista temp con un iterador
        {
        if(*i == mi_lista.front())//compara elemento de lista temp vrs lista Original
            {
                return true;//estan en orden alfabetico
            }
            else
                return false;//no estan en orden alfabetico
            mi_lista.pop_front();//saca elemento de mi_lista
        }
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
