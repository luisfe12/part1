#include <iostream>

using namespace std;

template<typename T>
class victor
{
private:
	int tam;
	T *data;
	void resize(int nuevotam);
public:
	victor();
	void insertar_final(T dato);
	void insertar_pos(T dato, int pos);
	void borrar_final();
	void borrar_pos(int pos);
	void mostrar();
	T operator[](int dato);
	
	
};

template<typename T>
victor<T>::victor()
{
	tam = 0;
	data = new T[tam];
}

template<typename T>
void victor<T>::resize(int nuevotam)
{
	T *aux = new T[nuevotam];
	int nimimo = (nuevotam > tam)? tam : nuevotam;
	for (int i = 0; i < nimimo; ++i)
	{
		aux[i]=data[i];
	}
	delete [] data;
	tam = nuevotam;
	data = aux;

}

template<typename T>
void victor<T>::insertar_final(T dato)
{
	resize(tam+1);
	data[tam-1] = dato;
}

template<typename T>
void victor<T>::borrar_final()
{
	resize(tam-1);
}


template<typename T>
void victor<T>::borrar_pos(int pos)
{
	if(pos == tam-1)
	{
		borrar_final();
	}
	else
	{
		for (int i = pos; i < tam-1; ++i)
		{
			data[i] = data[i+1];
		}
		resize(tam-1);
	}
}


template<typename T>
void victor<T>::mostrar()
{
	for (int i = 0; i < tam; ++i)
	{
		cout<<data[i]<<" ";
	}
}

template<typename T>
T victor<T>::operator[](int pos)
{
	return (data[pos]);
}

int main(int argc, char const *argv[])
{
	victor<int> vec;
	vec.insertar_final(50);
	vec.insertar_final(51);
	vec.insertar_final(52);
	vec.insertar_final(53);
	vec.insertar_final(54);
	cout<<vec[2];
	cout<<endl;

	vec.borrar_pos(4);
	vec.mostrar();

	return 0;
}