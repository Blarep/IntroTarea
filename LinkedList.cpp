#include <iostream>

using namespace std;

struct node
{
    int value; //valor del nodo
    node *next; //puntero al siguiente nodo
};


void add_node( node *ptr, int value  ) // anadir nodo
{
    node *new_node = new node; //Puntero al nuevo nodo
    new_node -> value =  value; //valor del nuevo nodo, es con "->"
    new_node -> next = (ptr -> next); //ptr->next es la direccion del nodo futuro, se reemplaza el nodo al que apunta el primero para que el nodo creado apunte a este
    ptr -> next = new_node; // ahora el nodo anterior apunta al nodo creado
}
void recorrer_lista(node *ptr, int value)
{
	
}

int main()
{
    node *ptr; //el primero
    ptr = new node; //se genera la estructura nodo
    ptr -> value = 1; //valor del primer nodo, es con flechita por el puntero
    ptr -> next = NULL; //el siguiente nodo apunta a null ya que no hay nodo
    add_node(ptr, 2); //se añade un nodo 
    cout << ptr <<"-"<< ptr->next <<"-"<<ptr->next->next<<endl;
    cout << ptr->value << ptr->next->value<<endl; //se imprimen los valores de ambos nodos
    return 0;
}
