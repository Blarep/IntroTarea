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
void recorrer_lista(node *ptr) //asi recorremos las listas
{
	int contador;
	contador=1; //para saber en que puntero vamos
	while(ptr!=NULL) //mientras el puntero no sea null es que hay mas punteros
	{
		cout<<"Nodo "<<contador<<"="<<ptr->value<<endl; //se imprime la "posicion del puntero" y su valor
		ptr=ptr->next ; //actualizamos la direccion del puntero por la del siguiente para seguir avanzando en la lista
		contador=(contador+1);
	}	
}
void eliminar_nodo(node *ptr)
{
	int n_nodo; //numero de nodo que se eliminara
	int c; //contador para recorrer la lista
	node *ptr_aux; //almacenara el puntero anterior al que queremos eliminar
	node *ptr_aux2; //almacenara el puntero que viene despues del que queremos eliminar
	c=1;
	ptr_aux=ptr;
	ptr_aux2=ptr;
	cout<<"Lista de nodos"<<endl; //se muestran los nodos
	recorrer_lista(ptr);
	cout<<"Que nodo desea eliminar?"<<endl;
	cin>>n_nodo;
	while(c<(n_nodo-1))//aqui se obtiene el puntero al que apunta el nodo que queremos eliminar
	{
		ptr_aux=ptr_aux->next;
		c=c+1;
	}
	while(c<=n_nodo) //aqui obtendremos el puntero del nodo al que apunta el que queremos eliminar
	{
		ptr_aux2=ptr_aux2->next;
		c=c+1;
	}
	ptr_aux->ptr_aux2;
}
void que_hacer(node *ptr)
{
	cout<<"Si desea a�adir nodo ingrese 1"<<endl;
	cout<<"Si desea recorrer la lista ingrese 2"<<endl;
	cout<<"Si desea eliminar un nodo ingrese 3"<<endl;
	cout<<"Si ya no quiere hacer nada ingrese 4"<<endl;
	int opcion;
	int valor;
	cin>>opcion;
	node *ptr_final;
	ptr_final=ptr;
	if(opcion==1)
	{
		while(ptr_final->next!=NULL) //aqui obtenemos el puntero del ultimo nodo para asi poder a�adir el nodo nuevo al final
		{
			ptr_final=ptr_final->next;
		}
		//cout<<ptr_final<<endl; era una linea de testeo para saber cual era el ptr final
		cout<<"Que valor tendra el puntero?"<<endl;
		cin>>valor;
		add_node(ptr_final,valor);
		que_hacer(ptr);
		
	}
	if(opcion==2)
	{
		recorrer_lista(ptr);
		que_hacer(ptr);
	}
	if{opcion==3}
	{
		
	}
	if(opcion==4)
	{
		cout<<"Fin del programa"<<endl;
	}
	
}
int main()
{
    node *ptr; //el primero
    ptr = new node; //se genera la estructura nodo
    ptr -> value = 1; //valor del primer nodo, es con flechita por el puntero
    ptr -> next = NULL; //el siguiente nodo apunta a null ya que no hay nodo
    add_node(ptr, 2); //se a�ade un nodo
	add_node(ptr->next,3);  //otro mas
    cout << ptr <<"-"<< ptr->next <<"-"<<ptr->next->next<<endl;
    cout << ptr->value << ptr->next->value<<ptr->next->next->value<<endl; //se imprimen los valores de ambos nodos
    que_hacer(ptr);
    return 0;
}
