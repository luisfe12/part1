#include <iostream>
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
    ArrayD(const ArrayD& o);
    ~ArrayD();
    void push_back(const T p);
    void insert(const T p, int pos);
    void remove(int pos);
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
ArrayD<T>::ArrayD(ArrayD<T> &o){
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
ArrayD<T>::~ArrayD()
{
   delete[] arr;
}
ArrayD<T>& operator = ( const ArrayD<T>&);

friend ArrayD<T> operator+(const ArrayD<T>&a,const ArrayD<T>&b){
 ArrayD<T> temp=a;
 for(int i=0;i<b.getSize();i++)
        temp.push_back(b.getarr(i));
			return temp;
		}
template<class T>
ostream& operator<<(ostream &output,Array<T> &o){
	for(int i=0;i<o.getSize();i++)
		output<<o.getarr(i)<<" ";
	return output;
}

template <class T>
ArrayD<T>& ArrayD<T>::operator = ( const ArrayD<T>& p){
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
	ArrayD<int> numbers(arr,3);
	ArrayD<int> numbers2(arr2,3);
	ArrayD<int> tempo;
	tempo=numbers+numbers2;
	cout<<numbers<<endl;
	string arr3[]={"uno","dos","tres"};
	ArrayD<string> strings(arr3,3);
	cout<<strings<<endl;
	cout<<tempo;
	ofstream source("texto.txt");
	source << tempo;
}
