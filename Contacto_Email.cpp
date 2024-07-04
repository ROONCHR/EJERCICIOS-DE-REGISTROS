//Crear una estructura llamada contactoEmail que tenga las siguientes características: nombres completos,
//sexo, edad, teléfono, email, nacionalidad
//El programa debe constar de un menú que permita:
//a) Agregar un contacto
//b) Eliminar un contacto
//c) Mostrar listado general de contactos registrados hasta ese momento.
//d) Mostrar listado de contactos existentes, ordenado por servidor de correo de las cuentas (gmail.com,
//outlook.com, yahoo.com, etc.)
//e) Salir del programa
//El programa debe mantenerse en ejecución continuamente hasta que usuario indique que desea salir del
//mismo.
#include <iostream>
#include <string>
using namespace std;
struct contactoEmail{
		char nombre[20];
		char sexo[10];
		char edad[3];
		char telefono[15];
		char email[50];
		char nacionalidad[30];
	};
void agregar_contacto(contactoEmail CE[],int &i){
	cout<<"-----AGREGAR CONTACTO-----"<<endl;
	int resp=1;
	while(resp==1&&i<50){
	
	fflush(stdin);
	cout<<"NOMBRE: ";
	cin.getline(CE[i].nombre,20,'\n');
	cout<<"SEXO: ";
	cin.getline(CE[i].sexo,10,'\n');
	fflush(stdin);
	cout<<"EDAD: ";
	cin.getline(CE[i].edad,3,'\n');
	cout<<"TELEFONO: ";
	cin.getline(CE[i].telefono,15,'\n');
	fflush(stdin);
	cout<<"EMAIL: ";
	cin.getline(CE[i].email,50,'\n');
	cout<<"NACIONALIDAD: ";
	fflush(stdin);
	cin.getline(CE[i].nacionalidad,30,'\n');
	
	i++;
	
	cout<<endl<<"---------------------"<<endl;
	cout<<"Cantidad de contactos: "<<i<<endl;
	cout<<"-----------------------"<<endl<<"seguir Ingresando?(SI=1 y NO=0): ";
	cin>>resp;
	}
	cout<<endl<<"saliendo..."<<endl;
	system("PAUSE");
	cout<<endl;
}	

void eliminar_contacto(){
	
	
}

void mostra_general(){
	
	
}

void mostrar_orden_gemail(){
	
	
}
int main(){
	char resp;
	int cant_contacs=0;
	contactoEmail CE[50];
	do{

	cout<<"----------CONTACTOS EMAIL------------"<<endl;
	cout<<"QUE DESEA HACER?"<<endl<<"a) Agregar un contacto"<<endl<<"b) Eliminar un contacto"<<endl<<"c) Mostrar listado general de contactos registrados hasta ese momento."<<endl;
	cout<<"d) Mostrar listado de contactos existentes, ordenado por servidor de correo de las cuentas"<<endl<<"e) Salir del programa"<<endl<<"resp: ";
	cin>>resp;	
	if(resp=='a'){
		agregar_contacto(CE,cant_contacs);
	}
	if(resp=='b'){
		eliminar_contacto();
	}
	if(resp=='c'){
		mostra_general();
	}
	if(resp=='d'){
		mostrar_orden_gemail();
	}
	
	}while(resp!='e');
	return 0;
}
