#include "ListaDoble.h"

int main()
{
    VideoType uno ("Jhon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType dos("pon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType tres("pon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType cuatro("pon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType cinco("pon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType seis("pon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType siete("pon","sdx","sdxds","sdxs","xsdx","sxsx",1 );
    VideoType ocho("Jyun","sdx","sdxds","sdxs","xsdx","sxsx",1 );
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
    
    return 0;
}