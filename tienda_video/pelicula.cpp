#include<iostream>
#include<string>
using namespace std;

class VideoType
{
private:
    friend ostream& operator << (ostream& o,const VideoType& video);
    string MovieTitle;
    string MovieStar1;
    string MovieStar2;
    string MovieProducer;
    string MovieDirector;
    string MovieProductionCo;
    int copiesInStock;
    
public:
    VideoType(string title = "", string star1 = "",
              string star2 = "", string producer = "",
              string director = "", string productionCo = "",
              int setInStock = 0);
    void setVideoInfo(string title,string star1, string star2,string producer, string director, string companyPo, int setstore);
    int getNoCopyStore()const;
    void checOut();
    void checkInt();
    void printTitle()const;
    void printInfo()const;
    bool checkTtle(string title);
    void UpdateinStock(int num);// tam=tam+1del mismo numero de peliculas
    void setCopiesInStock(int num);
    string getTitle()const;
    bool operator==(const VideoType&)const;
    bool operator !=(const VideoType&)const;


};

VideoType::VideoType(string title , string star1 ,
                     string star2 , string producer,
                     string director , string productionCo,
                     int setInStock)
{
    setVideoInfo(title, star1, star2, producer, director, productionCo, setInStock);
}



void VideoType::setVideoInfo(string title,string star1, string star2,string producer, string director, string companyPo, int setstore)
{
    MovieTitle = title;
    MovieStar1 = star1;
    MovieStar2 = star2;
    MovieProducer = producer;
    MovieDirector = director;
    MovieProductionCo = companyPo;
    copiesInStock = setstore;
}

void VideoType::checOut()
{
    if(getNoCopyStore()>0) copiesInStock--;
    else cout<<"no hay video en la tienda"<<endl;
}

void VideoType::checkInt()
{
    copiesInStock++;
}

int VideoType::getNoCopyStore()const//obtiene numero de copias
{
    return copiesInStock;
}

void VideoType::printTitle()const
{
    cout<<"el nombre del video: "<<MovieTitle<<endl;
}

void VideoType::printInfo()const
{
    cout<<"titulo de pelicula"<<MovieTitle<<endl;
    cout<<"estrellas: " << MovieStar1 << " and "<< MovieStar2 << endl;
    cout<<"productor: "<<MovieProducer<<endl;
    cout<<"director: "<<MovieDirector<<endl;
    cout<<"compañia productora: "<<MovieProductionCo<<endl;
    cout<<"numero de copias: "<<copiesInStock<<endl;
}

bool VideoType::checkTtle(string title)
{
    if(MovieTitle == title) return true;
    else
    {
         return false;
    }
    
}

void VideoType::setCopiesInStock(int num)
{
        copiesInStock = num;
}


string VideoType::getTitle()const
{
    return MovieTitle;
}

bool VideoType::operator == (const VideoType& other) const
{
    return (MovieTitle == other.MovieTitle);
}

bool VideoType::operator!=(const VideoType& video) const
{
    return (MovieTitle!=video.MovieTitle);
}

ostream& operator << (ostream& o, const VideoType& video)
{
    o<<endl;
    o<<"Pelicula"<<video.MovieTitle<<endl;
    o<<"estrellas: "<<video.MovieStar1<<" y "<<video.MovieStar2<<endl;
    o<<"productor: "<<video.MovieProducer<<endl;
    o<<"director: "<<video.MovieDirector<<endl;
    o<<"compañia productora: "<<video.MovieProductionCo<<endl;
    o<<"numero de copias: "<<video.copiesInStock<<endl;
    o<< "_____________________________________" << endl;
    return o;
}

int main()
{
    return 0;
}