#ifndef MEDICAMENTOS_H_INCLUDED
#define MEDICAMENTOS_H_INCLUDED

typedef struct
{
    int codigo;
    float precio;
    char nombre[50];
    char laboratorio[50];
}eMedicamento;

void cargarMedicamentos(eMedicamento[], int);
void mostraTodosMedicamentos(eMedicamento[], int);
void mostrarMedicamento(eMedicamento); //Muestra un solo numero

#endif // MEDICAMENTOS_H_INCLUDED
