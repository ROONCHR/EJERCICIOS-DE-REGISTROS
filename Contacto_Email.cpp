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
#include <string.h>
using namespace std;
struct contactoEmail{
		string nombre;
		string sexo;
		string edad;
		string telefono;
		string email;
		string nacionalidad;
	};


void agregar_contacto(contactoEmail CE[],int &i){
	cout<<"-----AGREGAR CONTACTO-----"<<endl;
	int resp=1,x=0;
	while(resp==1&&i<50){
	
		fflush(stdin);
		cout<<"NOMBRE: ";
		getline(cin, CE[i].nombre);
		fflush(stdin);
		cout<<"SEXO: ";
		getline(cin, CE[i].sexo);
		fflush(stdin);
		cout<<"EDAD: ";
		getline(cin, CE[i].edad);
		fflush(stdin);
		cout<<"TELEFONO: ";
		getline(cin, CE[i].telefono);
		fflush(stdin);
		cout<<"EMAIL: ";
		getline(cin, CE[i].email);
		fflush(stdin);
		cout<<"NACIONALIDAD: ";
		fflush(stdin);
		getline(cin, CE[i].nacionalidad);
		
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

void mostra_general(contactoEmail CE[],int cnt_cont){
	cout<<"-------LISTA GENERAL DE CONTACTOS-----"<<endl;
	int num_contact;
	for(int i=0; i<cnt_cont;i++ ){
	cout<<"Contacto "<<i+1<<": "<<CE[i].nombre<<endl;
	}
	cout<<"PARA MAS INFORMACION INGRESE EL NUMERO DE CONTACTO:";
	cin>>num_contact;
	int i=1;
	while(true){
		if(i==num_contact){
			cout<<"-----CONTACTO "<<num_contact<<" ------"<<endl;
			cout<<"Nombre: "<<CE[i-1].nombre<<endl;
			cout<<"Sexo: "<<CE[i-1].sexo<<endl;
			cout<<"Edad: "<<CE[i-1].edad<<endl;
			cout<<"Telefono: "<<CE[i-1].telefono<<endl;
			cout<<"Email: "<<CE[i-1].email<<endl;
			cout<<"Nacionalidad: "<<CE[i-1].nacionalidad<<endl;
			
			break ;
		}
		i++;
	}
	cout<<endl<<"saliendo..."<<endl;
	system("PAUSE");
	cout<<endl;
}
//void eliminar_contacto(){
//	cout<<"------ELIMINAR CONTACTO------"<<endl;
//	int resp;
//	cout<<"Introduzca el nombre del contacto a eliminar: ";
	
	
//}
void mostrar_orden_gmail(contactoEmail CE[],int cnt_cont){
	cout<<"-------LISTA GENERAL DE CONTACTOS-----"<<endl;
	if(cnt_cont==0){
		cout<<endl<<"No tiene ningun contacto, agrege alguno."<<endl;
	}
	int i,j,m,l,k,n;
	for(i=0;i<cnt_cont-1;i++){
		for(j=0;CE[i].email[j]!='@';j++){
				
			}
		for(l=i+1;l<cnt_cont;l++){
		
			for(k=0;CE[l].email[k]!='@';k++){
				
			}
			
			if(CE[i].email[j+1]>CE[l].email[k+1]){
				string aux;
				aux=CE[i].email;
				CE[i].email=CE[l].email;
				CE[l].email=aux;
			
				
				
			}
		}
	}
		
	
	for(m=0; m<cnt_cont;m++ ){
	cout<<"email : "<<m+1<<": "<<CE[m].email<<endl;
	}
	
	
}

int main(){
	char resp;
	int cant_contacs=0;
	contactoEmail CE[50];
	do{
	fflush(stdin);
	cout<<"----------CONTACTOS EMAIL------------"<<endl;
	cout<<"QUE DESEA HACER?"<<endl<<"a) Agregar un contacto"<<endl<<"b) Eliminar un contacto"<<endl<<"c) Abrir listado general de contactos registrados hasta ese momento."<<endl;
	cout<<"d)Abrir listado de contactos existentes, ordenado por servidor de correo de las cuentas"<<endl<<"e) Salir del programa"<<endl<<"resp: ";

	cin>>resp;	
	if(resp=='a'){
		agregar_contacto(CE,cant_contacs);
	}
	//if(resp=='b'){
	//	eliminar_contacto();
//	}
	if(resp=='c'){
		mostra_general(CE,cant_contacs);
	}
	if(resp=='d'){
		mostrar_orden_gmail(CE,cant_contacs);
	}
	
	}while(resp!='e');
	return 0;
}
