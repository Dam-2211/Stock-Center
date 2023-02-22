#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
#include "datos.h"

using namespace std;

int main(){
    datos objoper;
    int opcion = 0;

    while(opcion != 51){
        char copcion;
        cout<<"------------------------------------------------"<<endl;
        cout<<"            Bienvenido a hot sale               "<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"1-Administrador"<<endl;
        cout<<"2-Cliente"<<endl;
        cout<<"3-Salir"<<endl;
        cin>>copcion;
        opcion = (int)copcion;

        if(opcion == 49){
            cout<<"Ingrese contraseña"<<endl;
            cin.ignore();
            getline(cin,objoper.contrasena);

            if(objoper.contrasena == "1234"){
                int adm=0;
                while(adm != 53){
                    char coadm;
                    cout<<endl;
                    cout<<"1-Productos"<<endl;
                    cout<<"2-Promociones"<<endl;
                    cout<<"3-Lugar"<<endl;
                    cout<<"4-Ver archivos"<<endl;
                    cout<<"5-Salir"<<endl;
                    cin>>coadm;
                    adm = (int)coadm;
                    
                    if(adm == 49){
                        int tipo_producto = 0;
                        char coprodu;
                        cout<<endl;
                        cout<<"Ingrese la clasificacion del producto"<<endl;
                        cout<<"1) Almacen"<<endl;
                        cout<<"2) Desayuno"<<endl;
                        cout<<"3) Bebidas"<<endl;
                        cout<<"4) Frescos"<<endl;
                        cout<<"5) Frutas y Verduras"<<endl;
                        cout<<"6) Congelados"<<endl;
                        cout<<"7) Kiosco"<<endl;
                        cin.ignore();
                        cin>>coprodu;
                        tipo_producto = (int)coprodu;

                        if(tipo_producto == 49){
                            int produc_alma = 0;
                            char coproduc_alma;
                            cout<<endl;
                            cout<<"1-Modificar productos"<<endl;
                            cout<<"2-Agregar productos"<<endl;
                            cout<<"3-Borrar productos"<<endl;
                            cin.ignore();
                            cin>>coproduc_alma;
                            produc_alma = (int)coproduc_alma;

                            if (produc_alma == 49){
                                cout<<endl;
                                cout<<"Ingrese uno de los productos que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.lista_nueva;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.reemplazar;

                                if(objoper.modificar_productos() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(produc_alma == 50){
                                cout<<endl;
                                cout<<"Ingrese el producto"<<endl;
                                cin.ignore();
                                getline(cin,objoper.producto);

                                if(objoper.grabar_productos()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error o el producto ya se encuentra ingresado."<<endl;
                                }
                            }
                            else if(produc_alma == 51){
                                cout<<endl;
                                cout<<"Ingrese el producto que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.producto_borrar;

                                if(objoper.borrar_productos()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto == 50){
                            int produc_desa = 0;
                            char coproduc_desa;
                            cout<<endl;
                            cout<<"1-Modificar productos"<<endl;
                            cout<<"2-Agregar productos"<<endl;
                            cout<<"3-Borrar productos"<<endl;
                            cin.ignore();
                            cin>>coproduc_desa;
                            produc_desa = (int)coproduc_desa;

                            if (produc_desa == 49){
                                cout<<endl;
                                cout<<"Ingrese uno de los productos que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.lista_nueva_desa;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.reemplazar_desa;

                                if(objoper.modificar_productos_desa() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(produc_desa == 50){
                                cout<<endl;
                                cout<<"Ingrese el producto"<<endl;
                                cin.ignore();
                                getline(cin,objoper.producto_desa);

                                if(objoper.grabar_productos_desa()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error o el producto ya se encuentra ingresado."<<endl;
                                }
                            }
                            else if(produc_desa == 51){
                                cout<<endl;
                                cout<<"Ingrese el producto que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.producto_borrar_desa;

                                if(objoper.borrar_productos_desa()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto == 51){
                            int produc_bebi = 0;
                            char coproduc_bebi;
                            cout<<endl;
                            cout<<"1-Modificar productos"<<endl;
                            cout<<"2-Agregar productos"<<endl;
                            cout<<"3-Borrar productos"<<endl;
                            cin.ignore();
                            cin>>coproduc_bebi;
                            produc_bebi = (int)coproduc_bebi;

                            if (produc_bebi == 49){
                                cout<<endl;
                                cout<<"Ingrese uno de los productos que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.lista_nueva_bebi;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.reemplazar_bebi;

                                if(objoper.modificar_productos_bebi() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(produc_bebi == 50){
                                cout<<endl;
                                cout<<"Ingrese el producto"<<endl;
                                cin.ignore();
                                getline(cin,objoper.producto_bebi);

                                if(objoper.grabar_productos_bebi()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error o el producto ya se encuentra ingresado."<<endl;
                                }
                            }
                            else if(produc_bebi == 51){
                                cout<<endl;
                                cout<<"Ingrese el producto que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.producto_borrar_bebi;

                                if(objoper.borrar_productos_bebi()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto == 52){
                            int produc_fre = 0;
                            char coproduc_fre;
                            cout<<endl;
                            cout<<"1-Modificar productos"<<endl;
                            cout<<"2-Agregar productos"<<endl;
                            cout<<"3-Borrar productos"<<endl;
                            cin.ignore();
                            cin>>coproduc_fre;
                            produc_fre = (int)coproduc_fre;

                            if (produc_fre == 49){
                                cout<<endl;
                                cout<<"Ingrese uno de los productos que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.lista_nueva_fre;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.reemplazar_fre;

                                if(objoper.modificar_productos_fre() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(produc_fre == 50){
                                cout<<endl;
                                cout<<"Ingrese el producto"<<endl;
                                cin.ignore();
                                getline(cin,objoper.producto_fre);

                                if(objoper.grabar_productos_fre()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error o el producto ya se encuentra ingresado."<<endl;
                                }
                            }
                            else if(produc_fre == 51){
                                cout<<endl;
                                cout<<"Ingrese el producto que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.producto_borrar_fre;

                                if(objoper.borrar_productos_fre()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto == 53){
                            int produc_fyv = 0;
                            char coproduc_fyv;
                            cout<<endl;
                            cout<<"1-Modificar productos"<<endl;
                            cout<<"2-Agregar productos"<<endl;
                            cout<<"3-Borrar productos"<<endl;
                            cin.ignore();
                            cin>>coproduc_fyv;
                            produc_fyv = (int)coproduc_fyv;

                            if (produc_fyv == 49){
                                cout<<endl;
                                cout<<"Ingrese uno de los productos que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.lista_nueva_fyv;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.reemplazar_fyv;

                                if(objoper.modificar_productos_fyv() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(produc_fyv == 50){
                                cout<<endl;
                                cout<<"Ingrese el producto"<<endl;
                                cin.ignore();
                                getline(cin,objoper.producto_fyv);

                                if(objoper.grabar_productos_fyv()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error o el producto ya se encuentra ingresado."<<endl;
                                }
                            }
                            else if(produc_fyv == 51){
                                cout<<endl;
                                cout<<"Ingrese el producto que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.producto_borrar_fyv;

                                if(objoper.borrar_productos_fyv()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto == 54){
                            int produc_con = 0;
                            char coproduc_con;
                            cout<<endl;
                            cout<<"1-Modificar productos"<<endl;
                            cout<<"2-Agregar productos"<<endl;
                            cout<<"3-Borrar productos"<<endl;
                            cin.ignore();
                            cin>>coproduc_con;
                            produc_con = (int)coproduc_con;

                            if (produc_con == 49){
                                cout<<endl;
                                cout<<"Ingrese uno de los productos que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.lista_nueva_con;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.reemplazar_con;

                                if(objoper.modificar_productos_con() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(produc_con == 50){
                                cout<<endl;
                                cout<<"Ingrese el producto"<<endl;
                                cin.ignore();
                                getline(cin,objoper.producto_con);

                                if(objoper.grabar_productos_con()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error o el producto ya se encuentra ingresado."<<endl;
                                }
                            }
                            else if(produc_con == 51){
                                cout<<endl;
                                cout<<"Ingrese el producto que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.producto_borrar_con;

                                if(objoper.borrar_productos_con()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto == 55){
                            int produc_kio = 0;
                            char coproduc_kio;
                            cout<<endl;
                            cout<<"1-Modificar productos"<<endl;
                            cout<<"2-Agregar productos"<<endl;
                            cout<<"3-Borrar productos"<<endl;
                            cin.ignore();
                            cin>>coproduc_kio;
                            produc_kio = (int)coproduc_kio;

                            if (produc_kio == 49){
                                cout<<endl;
                                cout<<"Ingrese uno de los productos que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.lista_nueva_kio;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.reemplazar_kio;

                                if(objoper.modificar_productos_kio() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(produc_kio == 50){
                                cout<<endl;
                                cout<<"Ingrese el producto"<<endl;
                                cin.ignore();
                                getline(cin,objoper.producto_kio);

                                if(objoper.grabar_productos_kio()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error o el producto ya se encuentra ingresado."<<endl;
                                }
                            }
                            else if(produc_kio == 51){
                                cout<<endl;
                                cout<<"Ingrese el producto que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.producto_borrar_kio;

                                if(objoper.borrar_productos_kio()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else{
                            cout<<"Ingrese una opcion valida"<<endl;
                        }
                    }
                    else if(adm == 50){
                        int tipo_producto_promo = 0;
                        char cotipo_producto_promo;
                        cout<<endl;
                        cout<<"Ingrese la clasificacion del producto"<<endl;
                        cout<<"1) Almacen"<<endl;
                        cout<<"2) Desayuno"<<endl;
                        cout<<"3) Bebidas"<<endl;
                        cout<<"4) Frescos"<<endl;
                        cout<<"5) Frutas y Verduras"<<endl;
                        cout<<"6) Congelados"<<endl;
                        cout<<"7) Kiosco"<<endl;
                        cin>>cotipo_producto_promo;
                        tipo_producto_promo = (int)cotipo_producto_promo;
                        
                        if(tipo_producto_promo == 49){
                            int promo = 0;
                            char copromo;
                            cout<<endl;
                            cout<<"1-Modificar promociones"<<endl;
                            cout<<"2-Agregar promocion"<<endl;
                            cout<<"3-Borrar promociones"<<endl;
                            cin.ignore();
                            cin>>copromo;
                            promo = (int)copromo;

                            if(promo == 49){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.promo_modi;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.promo_reem;

                                if(objoper.modificar_promociones() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(promo == 50){
                                cout<<endl;
                                cout<<"Ingrese la promocion"<<endl;
                                cin.ignore();
                                getline(cin,objoper.promocion);

                                if(objoper.grabar_promociones()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else if(promo == 51){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.promocion_borrar;

                                if(objoper.borrar_promociones()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto_promo == 50){
                            int promo_desa = 0; 
                            char copromo_desa;
                            cout<<endl;
                            cout<<"1-Modificar promociones"<<endl;
                            cout<<"2-Agregar promocion"<<endl;
                            cout<<"3-Borrar promociones"<<endl;
                            cin.ignore();
                            cin>>copromo_desa;
                            promo_desa = (int)copromo_desa;

                            if(promo_desa == 49){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.promo_modi_desa;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.promo_reem_desa;

                                if(objoper.modificar_promociones_desa() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_desa == 50){
                                cout<<endl;
                                cout<<"Ingrese la promocion"<<endl;
                                cin.ignore();
                                getline(cin,objoper.promocion_desa);

                                if(objoper.grabar_promociones_desa()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_desa == 51){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.promocion_borrar_desa;

                                if(objoper.borrar_promociones_desa()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto_promo == 51){
                            int promo_bebi = 0;
                            char copromo_bebi;
                            cout<<endl;
                            cout<<"1-Modificar promociones"<<endl;
                            cout<<"2-Agregar promocion"<<endl;
                            cout<<"3-Borrar promociones"<<endl;
                            cin.ignore();
                            cin>>copromo_bebi;
                            promo_bebi = (int)copromo_bebi;

                            if(promo_bebi == 49){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.promo_modi_bebi;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.promo_reem_bebi;

                                if(objoper.modificar_promociones_bebi() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_bebi == 50){
                                cout<<endl;
                                cout<<"Ingrese la promocion"<<endl;
                                cin.ignore();
                                getline(cin,objoper.promocion_bebi);

                                if(objoper.grabar_promociones_bebi()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_bebi == 51){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.promocion_borrar_bebi;

                                if(objoper.borrar_promociones_bebi()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto_promo == 52){
                            int promo_fre = 0; 
                            char copromo_fre;
                            cout<<endl;
                            cout<<"1-Modificar promociones"<<endl;
                            cout<<"2-Agregar promocion"<<endl;
                            cout<<"3-Borrar promociones"<<endl;
                            cin.ignore();
                            cin>>copromo_fre;
                            promo_fre = (int)copromo_fre;

                            if(promo_fre == 49){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.promo_modi_fre;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.promo_reem_fre;

                                if(objoper.modificar_promociones_fre() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_fre == 50){
                                cout<<endl;
                                cout<<"Ingrese la promocion"<<endl;
                                cin.ignore();
                                getline(cin,objoper.promocion_fre);

                                if(objoper.grabar_promociones_fre()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_fre == 51){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.promocion_borrar_fre;

                                if(objoper.borrar_promociones_fre()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto_promo == 53){
                            int promo_fyv = 0; 
                            char copromo_fyv;
                            cout<<endl;
                            cout<<"1-Modificar promociones"<<endl;
                            cout<<"2-Agregar promocion"<<endl;
                            cout<<"3-Borrar promociones"<<endl;
                            cin.ignore();
                            cin>>copromo_fyv;
                            promo_fyv = (int)copromo_fyv;

                            if(promo_fyv == 49){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.promo_modi_fyv;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.promo_reem_fyv;

                                if(objoper.modificar_promociones_fyv() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_fyv == 50){
                                cout<<endl;
                                cout<<"Ingrese la promocion"<<endl;
                                cin.ignore();
                                getline(cin,objoper.promocion_fyv);

                                if(objoper.grabar_promociones_fyv()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_fyv == 51){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.promocion_borrar_fyv;

                                if(objoper.borrar_promociones_fyv()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto_promo == 54){
                            int promo_con = 0;
                            char copromo_con;
                            cout<<endl;
                            cout<<"1-Modificar promociones"<<endl;
                            cout<<"2-Agregar promocion"<<endl;
                            cout<<"3-Borrar promociones"<<endl;
                            cin.ignore();
                            cin>>copromo_con;
                            promo_con = (int)copromo_con;

                            if(promo_con == 49){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.promo_modi_con;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.promo_reem_con;

                                if(objoper.modificar_promociones_con() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_con == 50){
                                cout<<endl;
                                cout<<"Ingrese la promocion"<<endl;
                                cin.ignore();
                                getline(cin,objoper.promocion_con);

                                if(objoper.grabar_promociones_con()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_con == 51){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.promocion_borrar_con;

                                if(objoper.borrar_promociones_con()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(tipo_producto_promo == 55){
                            int promo_kio = 0;
                            char copromo_kio;
                            cout<<endl;
                            cout<<"1-Modificar promociones"<<endl;
                            cout<<"2-Agregar promocion"<<endl;
                            cout<<"3-Borrar promociones"<<endl;
                            cin.ignore();
                            cin>>copromo_kio;
                            promo_kio = (int)copromo_kio;

                            if(promo_kio == 49){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea modificar."<<endl;
                                cin.ignore();
                                cin>>objoper.promo_modi_kio;
                                cout<<"Ingrese el reemplazador"<<endl;
                                cin.ignore();
                                cin>>objoper.promo_reem_kio;

                                if(objoper.modificar_promociones_kio() == true){
                                    cout << "El archivo ha sido modificado correctamente" << endl;
                                }
                                else{
                                    cout<<"Ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_kio == 50){
                                cout<<endl;
                                cout<<"Ingrese la promocion"<<endl;
                                cin.ignore();
                                getline(cin,objoper.promocion_kio);

                                if(objoper.grabar_promociones_kio()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else if(promo_kio == 51){
                                cout<<endl;
                                cout<<"Ingrese la promocion que desea borrar"<<endl;
                                cin.ignore();
                                cin>>objoper.promocion_borrar_kio;

                                if(objoper.borrar_promociones_kio()== true){
                                    cout<<"Los datos se guardaron correctamente"<<endl;
                                }
                                else{
                                    cout<<"ocurrio un error."<<endl;
                                }
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                    }
                    else if(adm == 51){
                        int lu=0;
                        char colu;
                        cout<<endl;
                        cout<<"1-Modificar Lugar"<<endl;
                        cout<<"2-Agregar Lugar"<<endl;
                        cout<<"3-Borrar Lugar"<<endl;
                        cin.ignore();
                        cin>>colu;
                        lu = (int)colu;

                        if(lu==49){
                            cout<<endl;
                            cout<<"Ingrese el lugar a reemplazar."<<endl;
                            cin.ignore();
                            cin>>objoper.lugar_areemplazar;
                            cout<<"Ingrese el reemplazante"<<endl;
                            cin.ignore();
                            cin>>objoper.lugar_reemplazo;

                            if(objoper.modificar_lugar() == true){
                                cout << "El archivo ha sido modificado correctamente" << endl;
                            }
                            else{
                                cout<<"Ocurrio un error."<<endl;
                            }
                        }
                        else if(lu==50){
                            cout<<endl;
                            cout<<"Ingrese el lugar"<<endl;
                            cin.ignore();
                            getline(cin,objoper.lugar);

                            if(objoper.grabar_lugar()== true){
                                cout<<"Los datos se guardaron correctamente"<<endl;
                            }
                            else{
                                cout<<"ocurrio un error."<<endl;
                            }
                        }
                        else if(lu==51){
                            cout<<endl;
                            cout<<"Ingrese el lugar que desea borrar"<<endl;
                            cin.ignore();
                            cin>>objoper.lugar_borrar;

                            if(objoper.borrar_lugar()== true){
                                cout<<"Los datos se guardaron correctamente"<<endl;
                            }
                            else{
                                cout<<"ocurrio un error."<<endl;
                            }
                        }
                        else{
                            cout<<"Ingrese una opcion valida"<<endl;
                        }
                    }
                    else if(adm == 52){
                        int ver_tipo;
                        char cover_tipo;
                        cout<<"Ingrese lo que desea ver"<<endl;
                        cout<<"1) Productos"<<endl;
                        cout<<"2) Promociones"<<endl;
                        cout<<"3) lugares"<<endl;
                        cin.ignore();
                        cin>>cover_tipo;
                        ver_tipo = (int)cover_tipo;

                        if(ver_tipo == 49){
                            int ver_produ=0;
                            char cover_produ;
                            cout<<endl;
                            cout<<"Ingrese la clasificacion del producto que desa ver"<<endl;
                            cout<<"1) Almacen"<<endl;
                            cout<<"2) Desayuno"<<endl;
                            cout<<"3) Bebidas"<<endl;
                            cout<<"4) Frescos"<<endl;
                            cout<<"5) Frutas y Verduras"<<endl;
                            cout<<"6) Congelados"<<endl;
                            cout<<"7) Kiosco"<<endl;
                            cin.ignore();
                            cin>>cover_produ;
                            ver_produ = (int)cover_produ;

                            if(ver_produ == 49){
                                cout<<endl;
                                cout<<"Productos de almacen. "<<endl;
                                cout<<objoper.ver_almacen();
                            }
                            else if(ver_produ == 50){
                                cout<<endl;
                                cout<<"Productos de desayuno. "<<endl;
                                cout<<objoper.ver_desayuno();
                            }
                            else if(ver_produ == 51){
                                cout<<endl;
                                cout<<"Productos de bebidas. "<<endl;
                                cout<<objoper.ver_bebidas();
                            }
                            else if(ver_produ == 52){
                                cout<<endl;
                                cout<<"Productos de frescos. "<<endl;
                                cout<<objoper.ver_frescos();
                            }
                            else if(ver_produ == 53){
                                cout<<endl;
                                cout<<"Productos de frutas y verduras. "<<endl;
                                cout<<objoper.ver_fyv();
                            }
                            else if(ver_produ == 54){
                                cout<<endl;
                                cout<<"Productos de congelados. "<<endl;
                                cout<<objoper.ver_congelado();
                            }
                            else if(ver_produ == 55){
                                cout<<endl;
                                cout<<"Productos de kiosco. "<<endl;
                                cout<<objoper.ver_kiosco();
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(ver_tipo == 50){
                            int ver_promo=0;
                            char cover_promo;
                            cout<<endl;
                            cout<<"Ingrese la clasificacion de los productos en base a la promocion que desa ver"<<endl;
                            cout<<"1) Almacen"<<endl;
                            cout<<"2) Desayuno"<<endl;
                            cout<<"3) Bebidas"<<endl;
                            cout<<"4) Frescos"<<endl;
                            cout<<"5) Frutas y Verduras"<<endl;
                            cout<<"6) Congelados"<<endl;
                            cout<<"7) Kiosco"<<endl;
                            cin.ignore();
                            cin>>cover_promo;
                            ver_promo = (int)cover_promo;

                            if(ver_promo == 49){
                                cout<<endl;
                                cout<<"Promociones de almacen. "<<endl;
                                cout<<objoper.ver_promo_almacen();
                            }
                            else if(ver_promo == 50){
                                cout<<endl;
                                cout<<"Promociones de desayuno. "<<endl;
                                cout<<objoper.ver_promo_desa();
                            }
                            else if(ver_promo == 51){
                                cout<<endl;
                                cout<<"Promociones de bebidas. "<<endl;
                                cout<<objoper.ver_promo_bebi();
                            }
                            else if(ver_promo == 52){
                                cout<<endl;
                                cout<<"Promociones de frescos. "<<endl;
                                cout<<objoper.ver_promo_fre();
                            }
                            else if(ver_promo == 53){
                                cout<<endl;
                                cout<<"Promociones de frutas y verduras. "<<endl;
                                cout<<objoper.ver_promo_fyv();
                            }
                            else if(ver_promo == 54){
                                cout<<endl;
                                cout<<"Promociones de congelados. "<<endl;
                                cout<<objoper.ver_promo_con();
                            }
                            else if(ver_promo == 55){
                                cout<<endl;
                                cout<<"Promociones de kiosco. "<<endl;
                                cout<<objoper.ver_promo_kiosco();
                            }
                            else{
                                cout<<"Ingrese una opcion valida"<<endl;
                            }
                        }
                        else if(ver_tipo == 51){
                            cout<<"La lista de lugares es: "<<endl;
                            cout<<objoper.ver_lugares();
                        }
                        else{
                            cout<<"Ingrese una opcion valida"<<endl;
                        }
                    }
                    else if(adm == 53){
                        cout<<"Salio del modo administrador"<<endl;
                    }
                    else{
                        cout<<"Ingrese un opcion valida"<<endl;
                    }
                }
                return 48;
            }
            else{
                cout<<"Contraseña incorrecta"<<endl;
            }
        }
        else if(opcion == 50){
            int tipo_produ_bu=0;
            char cotipo;
            cout<<endl;
            cout<<"Ingrese la clasificacion del producto que desea buscar"<<endl;
            cout<<"1) Almacen"<<endl;
            cout<<"2) Desayuno"<<endl;
            cout<<"3) Bebidas"<<endl;
            cout<<"4) Frescos"<<endl;
            cout<<"5) Frutas y Verduras"<<endl;
            cout<<"6) Congelados"<<endl;
            cout<<"7) Kiosco"<<endl;
            cin.ignore();
            cin>>cotipo;
            tipo_produ_bu = (int)cotipo;
            
            if(tipo_produ_bu == 49){
                cout<<endl;
                cout<<"Ingrese el producto a buscar"<<endl;
                cin.ignore();
                getline(cin, objoper.pro_bus_alma);
                cout<<endl;
                cout<<"Ingrese el dia de hoy:\n1)Lunes\n2)Martes\n3)Miercoles\n4)Jueves\n5)Viernes\n6)Sabado\n7)Domingo"<<endl;
                cin>>objoper.dia;
                cout<<endl;
                cout<<"Ingrese el lugar."<<endl;
                cin.ignore();
                cin>>objoper.lugar_buscar;

                cout<<endl;
                cout<<"Para el producto: "<<objoper.buscar_producto_alma()<<endl;
                cout<<"Para el lugar: "<<objoper.buscar_lugar()<<endl;
                cout<<"Hay estas promociones: "<<endl;
                cout<<objoper.ver_promocion_alma();
                cout<<endl;
            }
            else if(tipo_produ_bu == 50){
                cout<<endl;
                cout<<"Ingrese el producto a buscar"<<endl;
                cin.ignore();
                getline(cin, objoper.pro_bus_desa);

                cout<<"Ingrese el dia de hoy:\n1)Lunes\n2)Martes\n3)Miercoles\n4)Jueves\n5)Viernes\n6)Sabado\n7)Domingo"<<endl;
                cin.ignore();
                cin>>objoper.dia;
                cout<<"Ingrese el lugar."<<endl;
                cin.ignore();
                cin>>objoper.lugar_buscar;

                cout<<endl;
                cout<<"Para el producto: "<<objoper.buscar_producto_desa()<<endl;
                cout<<"Para el lugar: "<<objoper.buscar_lugar()<<endl;
                cout<<"Hay estas promociones: "<<endl;
                cout<<objoper.ver_promocion_desa();
                cout<<endl;
            }
            else if(tipo_produ_bu == 51){
                cout<<endl;
                cout<<"Ingrese el producto a buscar"<<endl;
                cin.ignore();
                getline(cin, objoper.pro_bus_bebi);

                cout<<"Ingrese el dia de hoy:\n1)Lunes\n2)Martes\n3)Miercoles\n4)Jueves\n5)Viernes\n6)Sabado\n7)Domingo"<<endl;
                cin.ignore();
                cin>>objoper.dia;
                cout<<"Ingrese el lugar."<<endl;
                cin.ignore();
                cin>>objoper.lugar_buscar;

                cout<<endl;
                cout<<"Para el producto: "<<objoper.buscar_producto_bebi()<<endl;
                cout<<"Para el lugar: "<<objoper.buscar_lugar()<<endl;
                cout<<"Hay estas promociones: "<<endl;
                cout<<objoper.ver_promocion_bebi();
                cout<<endl;
            }
            else if(tipo_produ_bu == 52){
                cout<<endl;
                cout<<"Ingrese el producto a buscar"<<endl;
                cin.ignore();
                getline(cin, objoper.pro_bus_fre);

                cout<<"Ingrese el dia de hoy:\n1)Lunes\n2)Martes\n3)Miercoles\n4)Jueves\n5)Viernes\n6)Sabado\n7)Domingo"<<endl;
                cin.ignore();
                cin>>objoper.dia;
                cout<<"Ingrese el lugar."<<endl;
                cin.ignore();
                cin>>objoper.lugar_buscar;

                cout<<endl;
                cout<<"Para el producto: "<<objoper.buscar_producto_fre()<<endl;
                cout<<"Para el lugar: "<<objoper.buscar_lugar()<<endl;
                cout<<"Hay estas promociones: "<<endl;
                cout<<objoper.ver_promocion_fre();
                cout<<endl;
            }
            else if(tipo_produ_bu == 53){
                cout<<endl;
                cout<<"Ingrese el producto a buscar"<<endl;
                cin.ignore();
                getline(cin, objoper.pro_bus_fyv);

                cout<<"Ingrese el dia de hoy:\n1)Lunes\n2)Martes\n3)Miercoles\n4)Jueves\n5)Viernes\n6)Sabado\n7)Domingo"<<endl;
                cin.ignore();
                cin>>objoper.dia;
                cout<<"Ingrese el lugar."<<endl;
                cin.ignore();
                cin>>objoper.lugar_buscar;

                cout<<endl;
                cout<<"Para el producto: "<<objoper.buscar_producto_fyv()<<endl;
                cout<<"Para el lugar: "<<objoper.buscar_lugar()<<endl;
                cout<<"Hay estas promociones: "<<endl;
                cout<<objoper.ver_promocion_fyv();
                cout<<endl;
            }
            else if(tipo_produ_bu == 54){
                cout<<endl;
                cout<<"Ingrese el producto a buscar"<<endl;
                cin.ignore();
                getline(cin, objoper.pro_bus_con);

                cout<<"Ingrese el dia de hoy:\n1)Lunes\n2)Martes\n3)Miercoles\n4)Jueves\n5)Viernes\n6)Sabado\n7)Domingo"<<endl;
                cin.ignore();
                cin>>objoper.dia;
                cout<<"Ingrese el lugar."<<endl;
                cin.ignore();
                cin>>objoper.lugar_buscar;

                cout<<endl;
                cout<<"Para el producto: "<<objoper.buscar_producto_con()<<endl;
                cout<<"Para el lugar: "<<objoper.buscar_lugar()<<endl;
                cout<<"Hay estas promociones: "<<endl;
                cout<<objoper.ver_promocion_con();
                cout<<endl;
            }
            else if(tipo_produ_bu == 55){
                cout<<endl;
                cout<<"Ingrese el producto a buscar"<<endl;
                cin.ignore();
                getline(cin, objoper.pro_bus_kio);

                cout<<"Ingrese el dia de hoy:\n1)Lunes\n2)Martes\n3)Miercoles\n4)Jueves\n5)Viernes\n6)Sabado\n7)Domingo"<<endl;
                cin.ignore();
                cin>>objoper.dia;
                cout<<"Ingrese el lugar."<<endl;
                cin.ignore();
                cin>>objoper.lugar_buscar;

                cout<<endl;
                cout<<"Para el producto: "<<objoper.buscar_producto_kio()<<endl;
                cout<<"Para el lugar: "<<objoper.buscar_lugar()<<endl;
                cout<<"Hay estas promociones: "<<endl;
                cout<<objoper.ver_promocion_kio();
                cout<<endl;
            }
            else{
                cout<<"Ingrese una opcion valida"<<endl;
            }
        }
        else if(opcion == 51){
            cout<<"Hasta Luego"<<endl;
        }
        else{
            cout<<"Ingrese una opcion valida"<<endl;
        }
    }
    return 0;
};