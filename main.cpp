#include "mainwindow.h"
#include <QApplication>
#include "traductorservidor.h"
#include "Socket.h"
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();
//    int a[10][10]={{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10}};
//    traductorServidor*test1=new traductorServidor();
//    int b[9]={11,12,13,14,15,16,17,18,19};
//    int c[9]={11,12,13,14,15,16,17,18,19};
//    //char ruta[] = "hola sahid guapo ";
//    string ruta="11-22-33-44-55-66-77-88-99";
//    string obstaculos="11-22-33-44-55-66-790907-88-99";
//    string json1=test1->SerializarInformacion(obstaculos,b,c,ruta,false,50);
//    int z[10][10];
//    int x[9];
//    int y[9];
//    int AvanceGenetico;
//    bool finalizacion;
//    string rutaJSON;
//    string obstaculosJSON;
//    test1->DeserializarInfoDeSimulacion(json1,&obstaculosJSON,x,y,&finalizacion,&AvanceGenetico,&rutaJSON);
//    cout<<obstaculosJSON<<"hola loco"<<endl;
    Socket  *canal= &Socket::getInstance();
    canal->escuchar_sala2(8080);

   return 0;
}
