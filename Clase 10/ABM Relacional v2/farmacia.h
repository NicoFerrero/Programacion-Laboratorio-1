#ifndef FARMACIA_H_INCLUDED
#define FARMACIA_H_INCLUDED

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int idLaboratorio;
    char nombre[50];
    char direccion[50];
    char telefono[50];

}eLaboratorio;

typedef struct
{
    int idMedicamento;
    char descripcion[50];
    float precio;
    int idLaboratorio;
    int stock;
    eFecha elaboracion;
    eFecha vencimiento;

}eMedicamento;

typedef struct
{
    int IdCliente;
    char nombre[50];
    int idMedicamento;

}eCliente;

typedef struct
{
    int idCliente;
    int idMedicamento;
    int cantidadVendida;

}eClienteMedicamento;

/**
 * \brief Inicializa los medicamentos
 * \param medicamentos Array que recibe para inicializar
 * \param tamM Tamaño del array de medicamentos
 * \return Void No devuelve nada
 */
void InicializarMedicamentos(eMedicamento medicamentos[], int tamM);

/**
 * \brief Inicializa los clientes
 * \param clientes Array que recibe para inicializar
 * \param tamC Tamaño del array de clientes
 * \return Void No devuelve nada
 */
void InicializarClientes(eCliente clientes[], int tamC);

/**
 * \brief Inicializa los laboratorios
 * \param laboratorios Array que recibe para inicializar
 * \param tamL Tamaño del array de laboratorios
 * \return Void No devuelve nada
 */
void InicializarLaboratorios(eLaboratorio laboratorios[], int tamL);

/**
 * \brief Inicializa los clientes-medicamentos
 * \param ClientesMedicamentos Array que recibe para inicializar
 * \param tamCM Tamaño del array de clientes-medicamentos
 * \return Void No devuelve nada
 */
void InicializarClientesMedicamentos(eClienteMedicamento ClientesMedicamentos[], int tamCM);

/**
 * \brief Muestra la informacion de los clientes
 * \param clientes Array que recibe para inicializar
 * \param tamC tamaño del array de clientes
 * \param tamM tamaño del array de medicamentos
 * \return Void No devuelve nada
 */
void mostrarClientes(eCliente clientes[], eMedicamento medicamentos[], int tamC, int tamM);

/**
 * \brief Muestra la infomracion de los medicamnetos
 * \param medicamentos Array que recibe para inicializar
 * \param tam Tamaño del array
 * \return Void No devuelve nada
 */
void mostrarMedicamentos(eMedicamento medicamentos[], int tam);

/**
 * \brief Muestra por pantalla que clientes compraron ibuprofeno
 * \param medicamentos Array de medicamentos
 * \param clientes Array de clientes
 * \param tamC tamaño del array de clientes
 * \param tamM tamaño del array de medicamentos
 * \return Void No devuelve nada
 */
void compraronIbuprofeno(eMedicamento medicamentos[], eCliente clientes[], int tamC, int tamM);

/**
 * \brief Busca el stock del medicamento solicitado
 * \param medicamentos Array de medicamentos
 * \param tamM tamaño del array de medicamentos
 * \return Void No devuelve nada
 */
void stockDisponible(eMedicamento medicamentos[], int tamM);

/**
 * \brief Muestra un menu por pantalla
 * \param lista Es la lista de opciones que tendra el menu
 * \return Void No devuelve nada
 */
int menu(char lista[]);

#endif // FARMACIA_H_INCLUDED
