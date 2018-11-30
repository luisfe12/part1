#include <iostream>
#include <fstream>
using namespace std;

template<typename T>
class ArrayD{
protected:
    int size;
    T *arr;
    void resize(int newsize);
public:
    ArrayD();
    ArrayD(const T p[], const int size);
    ArrayD(const ArrayD& );
    ~ArrayD();
    void push_back(const T p);
    void insert(const T p, int pos);
    void remove(int pos);
    int getSize();
    ArrayD<T> operator = ( const ArrayD<T>&);
    friend ArrayD<T>operator+(ArrayD<T>&a,ArrayD<T>&b){
        ArrayD<T> temp=a;
        for(int i=0;i<b.size;i++)
            temp.push_back(b.arr[i]);
        return temp;

    }
    friend ostream& operator<<(ostream &output,ArrayD<T> &o){
	for(int i=0;i<o.getSize();i++)
		output<<o.arr[i]<<" ";
	return output;
    }
};
template<typename T>
ArrayD<T>::ArrayD()
{
    size = 0;
    arr= new T[size];
}

template<typename T>
ArrayD<T>::ArrayD(const T p[],  int s) {
    size = s;
    arr = new T[s];
    for(int i = 0; i < s; i++)
        arr[i] = p[i];
}

template<typename T>
ArrayD<T>::ArrayD(const ArrayD<T> &o){
    size = o.size;
    arr = new T[size];
    for(int i = 0; i < size; i++)
        arr[i] = o.arr[i];
}

template<typename T>
void ArrayD<T>::resize(int newSize){
	T *tmp = new T[newSize];
	int minsize = (newSize > size) ? size : newSize;
	for(int i = 0; i < minsize; i++)
		tmp[i] = arr[i];
	delete[] arr;
	size = newSize;
	arr = tmp;
}

/*PArray::~PArray()
{
   delete[] arr;
}*/
template<typename T>
void ArrayD<T>::push_back(const T p) {
	resize(size+1);
	arr[size-1] = p;

}

template<typename T>
void ArrayD<T>::insert(const T p, int pos) {
	resize(size + 1);
	for(int i = size -1; i < pos; i--)
		arr[i] = arr[i-1];
	arr[pos] = p;
}

template<typename T>
void ArrayD<T>::remove( int pos) {
for(int i=pos; i<size-1;i++)
    arr[pos]=arr[pos+1];
    resize(size -1);
}

template<typename T>
int ArrayD<T>::getSize(){
return size;

}

template<typename T>
ArrayD<T>::~ArrayD()
{
   delete[] arr;
}




template <class T>
ArrayD<T> ArrayD<T>::operator = ( const ArrayD<T>& p){
	this->size=p.size;
	T *temp=new T[p.size];
	for(int i=0;i<this->size;i++)
		temp[i]=p.arr[i];
	delete[] this->arr;
	this->arr=temp;
	return *this;
}
int main(){
	int arr[]={5,2,3};
	int arr2[]={4,6,6};
	ArrayD<int> datos(arr,3);
	ArrayD<int> datos2(arr2,3);
	ArrayD<int> suma;
	suma=datos+datos2;
	cout<<datos<<endl;
	string arr3[]={"pri","seg","ter"};
	ArrayD<string> stgs(arr3,3);
	cout<<stgs<<endl;
	cout<<suma;
	ofstream source("texto.txt");
	source << suma;
}
