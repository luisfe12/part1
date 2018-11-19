#include <iostream>

using namespace std;
class polygon{
protected:
   int  width,height;
public:
    polygon(int a=0, int b=0): width(a),height(b){}
     int area();
     /*void printarea(){
     cout<<area.()<<endl;
     }*/
};

class PArray{
protected: 
    polygon *arr;
    int size;
    void resize(int newsize);
public:
    PArray();
    PArray(const polygon p[], int s);
    PArray(PArray &o);
    ~PArray();
    void push_back(const polygon p);
    void insert(const polygon p, int pos);
    void remove(int pos);
};

PArray::PArray()
{
    size = 0;
    arr= new polygon[size];
}
PArray::PArray(const polygon p[],  int s) {
    size = s;
    arr = new polygon[s];
    for(int i = 0; i < s; i++)
        arr[i] = p[i];
}
PArray::PArray(PArray &o){
    size = o.size;
    arr = new polygon[size];
    for(int i = 0; i < size; i++)
        arr[i] = o.arr[i];
}
void PArray::resize(int newSize){
	polygon *tmp = new polygon[newSize];
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
void PArray::push_back(const polygon p) {
	resize(size+1);
	arr[size-1] = p;

}
void PArray::insert(const polygon p, int pos) {
	resize(size + 1);
	for(int i = size -1; i < pos; i--)
		arr[i] = arr[i-1];
	arr[pos] = p;
}
void PArray::remove( int pos) {
for(int i=pos; i<size-1;i++)
    arr[pos]=arr[pos+1];
    resize(size -1);
}
PArray::~PArray()
{
   delete[] arr;
}


int main()
{
    polygon p(1, 3);
    polygon q(3, 3);
    polygon r(3, 1);
    polygon arr[] = {p, q , r};
    int size = sizeof(arr)/sizeof(arr[0]);

    PArray pa2(arr, size);

    PArray pa = pa2;

    //cout << pa.getSize() << endl;

	//pa.clear();

    //cout << pa.getSize() << endl;

	pa.push_back(p);

    //cout << pa.getSize() << endl;

}