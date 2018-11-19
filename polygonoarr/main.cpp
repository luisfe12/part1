#include <iostream>

using namespace std;
class polygon{
protected:
   int  width,height;
public:
    polygon(int a, int b): width(a),height(b){}
     int area();
     /*void printarea(){
     cout<<area.()<<endl;
     }*/
};

class PArray{
protected:
    polygon *arr;
    int sizze;
    void resize(int newsize);
public:
    PArray();
    PArray(const polygon p[], int s);
    PArray(PArray &o);
    ~PArray();
    void push_back(const polygon &p);
    void insert(const polygon &p, int pos);
    void remove(int pos);
};

PArray::PArray()
{
    sizze = 0;
    arr= new polygon[sizze];
}
PArray::PArray(const polygon p[],  int s) {
    s = size;
    polygon = new polygon[s];
    for(int i = 0; i < s; i++)
        polygon[i] = p[i];
}
PArray::PArray(PArray &o){
    size = o.size;
    polygon = new polygon[size];
    for(int i = 0; i < size; i++)
        polygon[i] = o.polygon[i];
}
void PArray::resize(int newSize){
	polygon *arr = new polygon[newSize];
	int minsize = (newSize > size) ? size : newSize;
	for(int i = 0; i < minsize; i++)
		arr[i] = polygon[i];
	delete[] polygon;
	size = newSize;
	polygon = arr;
}

/*PArray::~PArray()
{
   delete[] arr;
}*/
void PArray::push_back(const polygon &p) {
	resize(size+1);
	polygon[size-1] = p;

}
void PArray::insert(const polygon &p, int pos) {
	resize(size + 1);
	for(int i = size -1; i < pos; i--)
		polygon[i] = polygon[i-1];
	polygon[pos] = p;
}
void PArray::remove( int pos) {

}
PArray::~PArray()
{
   delete[] arr;
}


int main()
{
    polygon p(1, 3);
    Polygon q(3, 3);
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
