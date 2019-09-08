#include "ListaDoble.h"

int main()
{
    VideoType uno ("zhon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType dos("Von","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType tres("pon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType cuatro("oon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType cinco("mon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType seis("lon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType siete("bon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType ocho("jyun","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType nueve("abra","sdx","sdxds","sdxs","xsdx","sxsx",1 );
        VideoType diez("huhu","sdx","sdxds","sdxs","xsdx","sxsx",1 );
         VideoType once("luis","sdx","sdxds","sdxs","xsdx","sxsx",1 );



    ListaDoble video;
    video.insertar_Valor(uno);
     video.insertar_Valor(dos);
      video.insertar_Valor(dos);
       video.insertar_Valor(tres);
        video.insertar_Valor(cuatro);
         video.insertar_Valor(cinco);
          video.insertar_Valor(seis);
           video.insertar_Valor(siete);
            video.insertar_Valor(ocho);
             video.insertar_Valor(nueve);
    video.mostrar();
    cout<<"-----------------------------------------------------"<<endl;
    video.Borrar_valor(dos);
   video.mostrar();
    return 0;
}