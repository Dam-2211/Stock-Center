#include <string>

using namespace std;

class datos{
    public:
        // Procedimientos interno del programa
        string producto;
        string producto_borrar;
        string lista_nueva;
        string reemplazar;

        string reemplazar_desa;
        string lista_nueva_desa;
        string producto_desa;
        string producto_borrar_desa;
        
        string lista_nueva_bebi;
        string reemplazar_bebi;
        string producto_bebi;
        string producto_borrar_bebi;

        string lista_nueva_fyv;
        string reemplazar_fyv;
        string producto_fyv;
        string producto_borrar_fyv;

        string lista_nueva_fre;
        string reemplazar_fre;
        string producto_fre;
        string producto_borrar_fre;

        string producto_borrar_con;
        string producto_con;
        string reemplazar_con;
        string lista_nueva_con;

        string producto_borrar_kio;
        string producto_kio;
        string reemplazar_kio;
        string lista_nueva_kio;

        string promocion_borrar;
        string promocion;
        string promo_modi;
        string promo_reem;

        string promo_modi_desa;
        string promo_reem_desa;
        string promocion_desa;
        string promocion_borrar_desa;

        string promo_modi_bebi;
        string promo_reem_bebi;
        string promocion_bebi;
        string promocion_borrar_bebi;

        string promo_modi_fre;
        string promo_reem_fre;
        string promocion_fre;
        string promocion_borrar_fre;

        string promo_modi_fyv;
        string promo_reem_fyv;
        string promocion_fyv;
        string promocion_borrar_fyv;

        string promo_modi_con;
        string promo_reem_con;
        string promocion_con;
        string promocion_borrar_con;

        string promo_modi_kio;
        string promo_reem_kio;
        string promocion_kio;
        string promocion_borrar_kio;

        string lugar_areemplazar;
        string lugar_reemplazo;
        string lugar_borrar;

        // Datos para el usuario 
        string lugar;

        string pro_bus_alma;
        string pro_bus_desa;
        string pro_bus_bebi;
        string pro_bus_fre;
        string pro_bus_fyv;
        string pro_bus_con;
        string pro_bus_kio;

        string lugar_buscar;

        string dia;
        // Datos para el administrados
        string contrasena;
    
        /*
        Procedimientos interno del programa
        */
        // PROCEDIMIENTOS PARA ALMACEN
        bool borrar_productos();
        bool grabar_productos();
        bool modificar_productos();
        string ver_almacen();

        // PROCEDIMIENTOS PARA DESAYUNO
        bool borrar_productos_desa();
        bool grabar_productos_desa();
        bool modificar_productos_desa();
        string ver_desayuno();

        // PROCEDIMIENTOS PARA BEBIDAS
        bool borrar_productos_bebi();
        bool grabar_productos_bebi();
        bool modificar_productos_bebi();
        string ver_bebidas();

        // PROCEDIMIENTOS PARA FRESCOS
        bool borrar_productos_fre();
        bool grabar_productos_fre();
        bool modificar_productos_fre();
        string ver_frescos();
        // PROCEDIMIENTOS PARA FRUTAS Y VERDURAS
        bool borrar_productos_fyv();
        bool grabar_productos_fyv();
        bool modificar_productos_fyv();
        string ver_fyv();
        // PROCEDIMIENTOS PARA CONGELADOS
        bool borrar_productos_con();
        bool grabar_productos_con();
        bool modificar_productos_con();
        string ver_congelado();
        // PROCEDIMIENTOS PARA KIOSCO
        bool borrar_productos_kio();
        bool grabar_productos_kio();
        bool modificar_productos_kio();
        string ver_kiosco();

        bool borrar_promociones();
        bool grabar_promociones();
        bool modificar_promociones();
        string ver_promo_almacen();

        bool modificar_promociones_desa();
        bool grabar_promociones_desa();
        bool borrar_promociones_desa();
        string ver_promo_desa();

        bool modificar_promociones_bebi();
        bool grabar_promociones_bebi();
        bool borrar_promociones_bebi();
        string ver_promo_bebi();

        bool modificar_promociones_fre();
        bool grabar_promociones_fre();
        bool borrar_promociones_fre();
        string ver_promo_fre();

        bool modificar_promociones_fyv();
        bool grabar_promociones_fyv();
        bool borrar_promociones_fyv();
        string ver_promo_fyv();

        bool modificar_promociones_con();
        bool grabar_promociones_con();
        bool borrar_promociones_con();
        string ver_promo_con();

        bool grabar_promociones_kio();
        bool borrar_promociones_kio();
        bool modificar_promociones_kio();
        string ver_promo_kiosco();

        bool grabar_lugar();
        bool modificar_lugar();
        bool borrar_lugar();
        string ver_lugares();

        // Procedimientos para el usuario
        string buscar_producto_alma();
        string buscar_producto_kio();
        string buscar_producto_fyv();
        string buscar_producto_fre();
        string buscar_producto_bebi();
        string buscar_producto_desa();
        string buscar_producto_con();

        string ver_promocion_kio();
        string ver_promocion_alma();
        string ver_promocion_bebi();
        string ver_promocion_con();
        string ver_promocion_desa();
        string ver_promocion_fre();
        string ver_promocion_fyv();

        string buscar_lugar();
}; 