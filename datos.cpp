#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
#include "datos.h"

using namespace std;

// ---------- Metodos de Los productos ----------
// ---------- ALMACEN ---------
bool datos::grabar_productos(){
    bool resultado=false;
    ofstream archivo;
    string contenido;
    
    ifstream fs("lista_productos.txt");
    archivo.open("lista_productos.txt",ios::app);

    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    while(fs >> contenido){ 
        if(contenido == producto){ 
            resultado = false;
            return resultado;
        }
    }
    archivo<<producto + "\n";

    fs.close();
    archivo.close();
    resultado = true;
    return resultado;
};

bool datos::modificar_productos(){
    bool resultado = false;
    string contenido;
    ifstream fs("lista_productos.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido == lista_nueva){ 
            contenido = reemplazar;
        }
        fstemp << contenido << endl;
        resultado=true;
    }
    fs.close();
    fstemp.close();
    remove("lista_productos.txt");
    rename("lista_productos_temp.txt", "lista_productos.txt");
    return resultado;
};

bool datos::borrar_productos(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_productos.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != producto_borrar){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_productos.txt");
    rename("lista_productos_temp.txt", "lista_productos.txt");
    return resultado;
};

// ---------- DESAYUNO ---------
bool datos::grabar_productos_desa(){
    bool resultado=false;
    ofstream archivo;
    string contenido;
    
    ifstream fs("lista_productos_desa.txt");
    archivo.open("lista_productos_desa.txt",ios::app);

    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    while(fs >> contenido){ 
        if(contenido == producto_desa){ 
            resultado = false;
            return resultado;
        }
    }
    archivo<<producto_desa + "\n";

    fs.close();
    archivo.close();
    resultado = true;
    return resultado;
};

bool datos::modificar_productos_desa(){
    bool resultado = false;
    string contenido;
    ifstream fs("lista_productos_desa.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido == lista_nueva_desa){ 
            contenido = reemplazar_desa;
        }
        fstemp << contenido << endl;
        resultado=true;
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_desa.txt");
    rename("lista_productos_temp.txt", "lista_productos_desa.txt");
    return resultado;
};

bool datos::borrar_productos_desa(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_productos_desa.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != producto_borrar_desa){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_desa.txt");
    rename("lista_productos_temp.txt", "lista_productos_desa.txt");
    return resultado;
};

// ---------- BEBIDAS ---------
bool datos::grabar_productos_bebi(){
    bool resultado=false;
    ofstream archivo;
    string contenido;
    
    ifstream fs("lista_productos_bebi.txt");
    archivo.open("lista_productos_bebi.txt",ios::app);

    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    while(fs >> contenido){ 
        if(contenido == producto_bebi){ 
            resultado = false;
            return resultado;
        }
    }
    archivo<<producto_bebi + "\n";

    fs.close();
    archivo.close();
    resultado = true;
    return resultado;
};

bool datos::modificar_productos_bebi(){
    bool resultado = false;
    string contenido;
    ifstream fs("lista_productos_bebi.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido == lista_nueva_bebi){ 
            contenido = reemplazar_bebi;
        }
        fstemp << contenido << endl;
        resultado=true;
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_bebi.txt");
    rename("lista_productos_temp.txt", "lista_productos_bebi.txt");
    return resultado;
};

bool datos::borrar_productos_bebi(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_productos_bebi.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != producto_borrar_bebi){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_bebi.txt");
    rename("lista_productos_temp.txt", "lista_productos_bebi.txt");
    return resultado;
};

// ---------- FRESCOS ---------
bool datos::grabar_productos_fre(){
    bool resultado=false;
    ofstream archivo;
    string contenido;
    
    ifstream fs("lista_productos_fre.txt");
    archivo.open("lista_productos_fre.txt",ios::app);

    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    while(fs >> contenido){ 
        if(contenido == producto_fre){ 
            resultado = false;
            return resultado;
        }
    }
    archivo<<producto_fre + "\n";

    fs.close();
    archivo.close();
    resultado = true;
    return resultado;
};

bool datos::modificar_productos_fre(){
    bool resultado = false;
    string contenido;
    ifstream fs("lista_productos_fre.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido == lista_nueva_fre){ 
            contenido = reemplazar_fre;
        }
        fstemp << contenido << endl;
        resultado=true;
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_fre.txt");
    rename("lista_productos_temp.txt", "lista_productos_fre.txt");
    return resultado;
};

bool datos::borrar_productos_fre(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_productos_fre.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != producto_borrar_fre){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_fre.txt");
    rename("lista_productos_temp.txt", "lista_productos_fre.txt");
    return resultado;
};

// ---------- FRUTAS Y VERDURAS ---------
bool datos::grabar_productos_fyv(){
    bool resultado=false;
    ofstream archivo;
    string contenido;
    
    ifstream fs("lista_productos_fyv.txt");
    archivo.open("lista_productos_fyv.txt",ios::app);

    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    while(fs >> contenido){ 
        if(contenido == producto_fyv){ 
            resultado = false;
            return resultado;
        }
    }
    archivo<<producto_fyv + "\n";

    fs.close();
    archivo.close();
    resultado = true;
    return resultado;
};

bool datos::modificar_productos_fyv(){
    bool resultado = false;
    string contenido;
    ifstream fs("lista_productos_fyv.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido == lista_nueva_fyv){ 
            contenido = reemplazar_fyv;
        }
        fstemp << contenido << endl;
        resultado=true;
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_fyv.txt");
    rename("lista_productos_temp.txt", "lista_productos_fyv.txt");
    return resultado;
};

bool datos::borrar_productos_fyv(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_productos_fyv.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != producto_borrar_fyv){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_fyv.txt");
    rename("lista_productos_temp.txt", "lista_productos_fyv.txt");
    return resultado;
};

// ---------- CONGELADOS ---------
bool datos::grabar_productos_con(){
    bool resultado=false;
    ofstream archivo;
    string contenido;
    
    ifstream fs("lista_productos_con.txt");
    archivo.open("lista_productos_con.txt",ios::app);

    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    while(fs >> contenido){ 
        if(contenido == producto_con){ 
            resultado = false;
            return resultado;
        }
    }
    archivo<<producto_con + "\n";

    fs.close();
    archivo.close();
    resultado = true;
    return resultado;
};

bool datos::modificar_productos_con(){
    bool resultado = false;
    string contenido;
    ifstream fs("lista_productos_con.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido == lista_nueva_con){ 
            contenido = reemplazar_con;
        }
        fstemp << contenido << endl;
        resultado=true;
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_con.txt");
    rename("lista_productos_temp.txt", "lista_productos_con.txt");
    return resultado;
};

bool datos::borrar_productos_con(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_productos_con.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != producto_borrar_fyv){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_con.txt");
    rename("lista_productos_temp.txt", "lista_productos_con.txt");
    return resultado;
};

// ---------- KIOSCO ---------
bool datos::grabar_productos_kio(){
    bool resultado=false;
    ofstream archivo;
    string contenido;
    
    ifstream fs("lista_productos_kio.txt");
    archivo.open("lista_productos_kio.txt",ios::app);

    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    while(fs >> contenido){ 
        if(contenido == producto_kio){ 
            resultado = false;
            return resultado;
        }
    }
    archivo<<producto_kio + "\n";

    fs.close();
    archivo.close();
    resultado = true;
    return resultado;
};

bool datos::modificar_productos_kio(){
    bool resultado = false;
    string contenido;
    ifstream fs("lista_productos_kio.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido == lista_nueva_kio){ 
            contenido = reemplazar_kio;
        }
        fstemp << contenido << endl;
        resultado=true;
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_kio.txt");
    rename("lista_productos_temp.txt", "lista_productos_kio.txt");
    return resultado;
};

bool datos::borrar_productos_kio(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_productos_kio.txt"); 
    ofstream fstemp("lista_productos_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != producto_borrar_kio){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_productos_kio.txt");
    rename("lista_productos_temp.txt", "lista_productos_kio.txt");
    return resultado;
};

// ---------- Metodos de las promociones ----------
// ---------- ALMACEN ----------
bool datos::grabar_promociones(){
    bool resultado = false;
    ofstream archivo;

    archivo.open("lista_promociones.txt",ios::app);
    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    archivo<<promocion + "\n";

    archivo.close();

    resultado = true;
    return resultado;
};

bool datos::modificar_promociones(){
    bool resultado = false;
    string contenido1;
    ifstream fs("lista_promociones.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido1){ 
        if(contenido1 == promo_modi){ 
            contenido1 = promo_reem;
        }
        fstemp << contenido1 << endl;
        resultado = true;
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones.txt");
    rename("lista_promociones_temp.txt", "lista_promociones.txt");
    return resultado;
};

bool datos::borrar_promociones(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_promociones.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != promocion_borrar){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones.txt");
    rename("lista_promociones_temp.txt", "lista_promociones.txt");
    return resultado;
};

// ---------- DESAYUNO ---------
bool datos::grabar_promociones_desa(){
    bool resultado = false;
    ofstream archivo;

    archivo.open("lista_promociones_desa.txt",ios::app);
    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    archivo<<promocion_desa + "\n";

    archivo.close();

    resultado = true;
    return resultado;
};

bool datos::modificar_promociones_desa(){
    bool resultado = false;
    string contenido1;
    ifstream fs("lista_promociones_desa.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido1){ 
        if(contenido1 == promo_modi_desa){ 
            contenido1 = promo_reem_desa;
        }
        fstemp << contenido1 << endl;
        resultado = true;
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_desa.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_desa.txt");
    return resultado;
};

bool datos::borrar_promociones_desa(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_promociones_desa.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != promocion_borrar_desa){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_desa.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_desa.txt");
    return resultado;
};
// ---------- BEBIDAS ---------
bool datos::grabar_promociones_bebi(){
    bool resultado = false;
    ofstream archivo;

    archivo.open("lista_promociones_bebi.txt",ios::app);
    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    archivo<<promocion_bebi + "\n";

    archivo.close();

    resultado = true;
    return resultado;
};

bool datos::modificar_promociones_bebi(){
    bool resultado = false;
    string contenido1;
    ifstream fs("lista_promociones_bebi.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido1){ 
        if(contenido1 == promo_modi_bebi){ 
            contenido1 = promo_reem_bebi;
        }
        fstemp << contenido1 << endl;
        resultado = true;
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_bebi.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_bebi.txt");
    return resultado;
};

bool datos::borrar_promociones_bebi(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_promociones_bebi.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != promocion_borrar_bebi){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_bebi.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_bebi.txt");
    return resultado;
};
// ---------- FRESCOS ---------
bool datos::grabar_promociones_fre(){
    bool resultado = false;
    ofstream archivo;

    archivo.open("lista_promociones_fre.txt",ios::app);
    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    archivo<<promocion_fre + "\n";

    archivo.close();

    resultado = true;
    return resultado;
};

bool datos::modificar_promociones_fre(){
    bool resultado = false;
    string contenido1;
    ifstream fs("lista_promociones_fre.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido1){ 
        if(contenido1 == promo_modi_fre){ 
            contenido1 = promo_reem_fre;
        }
        fstemp << contenido1 << endl;
        resultado = true;
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_fre.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_fre.txt");
    return resultado;
};

bool datos::borrar_promociones_fre(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_promociones_fre.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != promocion_borrar_fre){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_fre.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_fre.txt");
    return resultado;
};
// ---------- FRUTAS Y VERDURAS ---------
bool datos::grabar_promociones_fyv(){
    bool resultado = false;
    ofstream archivo;

    archivo.open("lista_promociones_fyv.txt",ios::app);
    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    archivo<<promocion_fyv + "\n";

    archivo.close();

    resultado = true;
    return resultado;
};

bool datos::modificar_promociones_fyv(){
    bool resultado = false;
    string contenido1;
    ifstream fs("lista_promociones_fyv.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido1){ 
        if(contenido1 == promo_modi_fyv){ 
            contenido1 = promo_reem_fyv;
        }
        fstemp << contenido1 << endl;
        resultado = true;
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_fyv.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_fyv.txt");
    return resultado;
};

bool datos::borrar_promociones_fyv(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_promociones_fyv.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != promocion_borrar_fyv){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_fyv.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_fyv.txt");
    return resultado;
};
// ---------- CONGELADOS ---------
bool datos::grabar_promociones_con(){
    bool resultado = false;
    ofstream archivo;

    archivo.open("lista_promociones_con.txt",ios::app);
    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    archivo<<promocion_con + "\n";

    archivo.close();

    resultado = true;
    return resultado;
};

bool datos::modificar_promociones_con(){
    bool resultado = false;
    string contenido1;
    ifstream fs("lista_promociones_con.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido1){ 
        if(contenido1 == promo_modi_con){ 
            contenido1 = promo_reem_con;
        }
        fstemp << contenido1 << endl;
        resultado = true;
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_con.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_con.txt");
    return resultado;
};

bool datos::borrar_promociones_con(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_promociones_con.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != promocion_borrar_con){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_con.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_con.txt");
    return resultado;
};
// ---------- KIOSCO ---------
bool datos::grabar_promociones_kio(){
    bool resultado = false;
    ofstream archivo;

    archivo.open("lista_promociones_kio.txt",ios::app);
    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    archivo<<promocion_kio + "\n";

    archivo.close();

    resultado = true;
    return resultado;
};

bool datos::modificar_promociones_kio(){
    bool resultado = false;
    string contenido1;
    ifstream fs("lista_promociones_kio.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido1){ 
        if(contenido1 == promo_modi_kio){ 
            contenido1 = promo_reem_kio;
        }
        fstemp << contenido1 << endl;
        resultado = true;
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_kio.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_kio.txt");
    return resultado;
};

bool datos::borrar_promociones_kio(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_promociones_kio.txt"); 
    ofstream fstemp("lista_promociones_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != promocion_borrar_kio){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_promociones_kio.txt");
    rename("lista_promociones_temp.txt", "lista_promociones_kio.txt");
    return resultado;
};
// ---------- Metodos de Los lugares ----------
bool datos::grabar_lugar(){
    bool resultado = false;
    ofstream archivo;

    archivo.open("lista_lugares.txt",ios::app);
    if(archivo.fail()){
        resultado = false;
        return resultado;
    }
    archivo<<lugar + "\n";

    archivo.close();

    resultado = true;
    return resultado;
};

bool datos::modificar_lugar(){
    bool resultado = false;
    string contenido1;
    ifstream fs("lista_lugares.txt"); 
    ofstream fstemp("lista_lugares_temp.txt");
    
    while(fs >> contenido1){ 
        if(contenido1 == lugar_areemplazar){ 
            contenido1 = lugar_reemplazo;
        }
        fstemp << contenido1 << endl;
        resultado = true;
    }
    fs.close();
    fstemp.close();
    remove("lista_lugares.txt");
    rename("lista_lugares_temp.txt", "lista_lugares.txt");
    return resultado;
};

bool datos::borrar_lugar(){
    bool resultado = false;

    string contenido;
    ifstream fs("lista_lugares.txt"); 
    ofstream fstemp("lista_lugares_temp.txt");
    
    while(fs >> contenido){ 
        if(contenido != lugar_borrar){ 
            fstemp << contenido << endl;
            resultado = true;
        }
    }
    fs.close();
    fstemp.close();
    remove("lista_lugares.txt");
    rename("lista_lugares_temp.txt", "lista_lugares.txt");
    return resultado;
};

// ---------- METODOS PARA VER LOS ARCHIVOS ----------
// ---------- ALMACEN ---------
string datos::ver_almacen(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};

// ---------- DESAYUNO ---------
string datos::ver_desayuno(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_desa.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea + "\n";
    }
    archivo.close();
    return resultado;
};
// ---------- BEBIDAS ---------
string datos::ver_bebidas(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_bebi.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- FRESCOS ---------
string datos::ver_frescos(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_fre.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- FRUTAS Y VERDURAS ---------
string datos::ver_fyv(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_fyv.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- CONGELADOS ---------
string datos::ver_congelado(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_con.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- KIOSCO ---------
string datos::ver_kiosco(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_kio.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Promociones Almacen ---------
string datos::ver_promo_almacen(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_promociones.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Promociones Bebidas ---------
string datos::ver_promo_bebi(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_promociones_bebi.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Promociones Congelados ---------
string datos::ver_promo_con(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_promociones_con.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Promociones Desayuno ---------
string datos::ver_promo_desa(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_promociones_desa.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Promociones Frescos ---------
string datos::ver_promo_fre(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_promociones_fre.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Promociones Frutas y Verduras ---------
string datos::ver_promo_fyv(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_promociones_fyv.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Promociones Kiosco ---------
string datos::ver_promo_kiosco(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_promociones_kio.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Ver los lugares ---------
string datos::ver_lugares(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_lugares.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};
// ---------- Metodos de buscar lo solicitado por el usuario ----------
string datos::buscar_producto_alma(){
    string resultado = "";
    string contenido;

    ifstream fs("lista_productos.txt");

    while(fs >> contenido){ 
        if(contenido == pro_bus_alma){ 
            resultado = resultado + contenido;
        }
    }
    fs.close();
    return resultado;
};

string datos::buscar_producto_desa(){
    string resultado = "";
    string contenido;

    ifstream fs("lista_productos_desa.txt");

    while(fs >> contenido){ 
        if(contenido == pro_bus_desa){ 
            resultado = resultado + contenido;
        }
    }
    fs.close();
    return resultado;
};

string datos::buscar_producto_bebi(){
    string resultado = "";
    string contenido;

    ifstream fs("lista_productos_bebi.txt");

    while(fs >> contenido){ 
        if(contenido == pro_bus_bebi){ 
            resultado = resultado + contenido;
        }
    }
    fs.close();
    return resultado;
};

string datos::buscar_producto_fre(){
    string resultado = "";
    string contenido;

    ifstream fs("lista_productos_fre.txt");

    while(fs >> contenido){ 
        if(contenido == pro_bus_fre){ 
            resultado = resultado + contenido;
        }
    }
    fs.close();
    return resultado;
};

string datos::buscar_producto_fyv(){
    string resultado = "";
    string contenido;

    ifstream fs("lista_productos_fyv.txt");

    while(fs >> contenido){ 
        if(contenido == pro_bus_fyv){ 
            resultado = resultado + contenido;
        }
    }
    fs.close();
    return resultado;
};

string datos::buscar_producto_con(){
    string resultado = "";
    string contenido;

    ifstream fs("lista_productos_con.txt");

    while(fs >> contenido){ 
        if(contenido == pro_bus_con){ 
            resultado = resultado + contenido;
        }
    }
    fs.close();
    return resultado;
};

string datos::buscar_producto_kio(){
    string resultado = "";
    string contenido;

    ifstream fs("lista_productos_kio.txt");

    while(fs >> contenido){ 
        if(contenido == pro_bus_kio){ 
            resultado = resultado + contenido;
        }
    }
    fs.close();
    return resultado;
};

string datos::buscar_lugar(){
    string resultado = "";
    string contenido;

    ifstream fs("lista_lugares.txt");

    while(fs >> contenido){ 
        if(contenido == lugar_buscar){ 
            resultado = resultado + contenido;
        }
    }
    fs.close();
    return resultado;
};

string datos::ver_promocion_alma(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_promociones.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};

string datos::ver_promocion_bebi(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_bebi.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};

string datos::ver_promocion_con(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_con.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};

string datos::ver_promocion_desa(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_desa.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};

string datos::ver_promocion_fre(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_fre.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};

string datos::ver_promocion_fyv(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_fyv.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};

string datos::ver_promocion_kio(){
    string linea;
    string resultado;

    ifstream archivo;
    archivo.open("lista_productos_kio.txt", ios::in);
    while(!archivo.eof()){
        getline(archivo,linea);
        resultado=resultado+linea+"\n";
    }
    archivo.close();
    return resultado;
};