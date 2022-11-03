#include <iostream>
#include <string.h> 

#include <stdio.h>
using namespace std;

struct Punto {
	int x;
	int y;
	string descripcion;
};
template <typename T>
void agregar(T arr[], int& len, T v) {
	arr[len] = v;
	len++;
}

//struct 
/*
struct Recta {
	string nombre;
	Punto p1;
	Punto p2;
};
void mostrarPuntos(Punto p) {
	cout << p.x << ", " << p.y<<endl;
}
Punto sumarPuntos(Punto p1, Punto p2){
	Punto res;
	res.x = p1.x + p2.x;
	res.y = p1.y + p2.y;
	//cout << res.x << ", " << res.y << endl;
	return res;
}
void incrementarX(Punto& p) {
	p.x++;
	cout << p.x << endl;
}
*/

//Arrays
/*
void mostrarPuntos(Punto p) {
	cout << p.x << ", " << p.y << endl;
}
void cargarEnArr(int a[]) {
	a[0] = 9;
	a[1] = 2;
	a[2] = 2;
	cout << a[0] << endl;
	cout << a[3] << endl; //muestra basura
}
struct Factorial {
	int nro;
	int fact;
};
*/

int factoreo(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factoreo(n - 1);
	}
}


int main()
{
	//struct 
	/*
	cout << "Hello World! xdd\n";
	Punto punto1;
	punto1.x = 1;
	punto1.y = 4;
	punto1.descripcion = "este es el punto 1";
	cout << punto1.x << ", " << punto1.y << "." << punto1.descripcion << endl;
	cout << "hola" << endl;
	Punto punto2 = { 1,4, "este es el punto 2" };
	cout << punto2.x << ", " << punto2.y << ". " << punto2.descripcion << endl;
	Recta r;
	r.nombre = "recta R";
	r.p1 = punto1;
	r.p2 = punto2;
	Recta r2 = { "recta r2", {6,11,"punto 1"}, {2,8,"punto 2"} };
	cout << r2.p1.x << ", " << r2.p1.y << " este es el punto 1 de mi recta 2" << endl;
	int sumaDeX = sumarPuntos(r2.p1, r2.p2).x;
	int sumaDeY = sumarPuntos(r2.p1, r2.p2).y;
	cout << "La sumas de X es " << sumaDeX<< "\nY la suma de Y es " << sumaDeY << endl;
	cout << "Los puntos de mi recta 2 son: ";
	mostrarPuntos(r2.p1);
	cout << " y ";
	mostrarPuntos(r2.p2);
	incrementarX(r2.p1);
	cout << "\nEl X se incremente en mas 1, ahora es " << r2.p1.x << endl;
	*/

	//Arrays 
	/*
		   int arr[5] = { 4,7,21,7,8 };
	Punto puntos[4] = { {3,6}, {67,34}, {65,73}, {11,32} };
	//mostrar los puntos del array
	 for (int i = 0; i <= 4 - 1; i++) {
		mostrarPuntos(puntos[i]);
	}
	int arrEntero[3];
	cargarEnArr(arrEntero);
	/*Ejercicio 39,guia 83
	Factorial facts[20];
	int n;
	cout << "ingrese la cantidad de nros que su array de factoriales tenga" << endl;
	cin >> n;
	cout << "ahora ingrese los numeros que desee meter en su array" << endl;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		facts[i].nro = num;
		facts[i].fact = factoreo(num);
	}
	cout << "los numeros que ingreso junto con su factorial son los siguientes" << endl;
	for (int i = 0; i < n; i++) {
		cout << facts[i].nro << " - " << facts[i].fact << endl;
	}
	*/

	//Char, maneras de guardar.
	/*
	string  strPrueba = "HolaXD";
	char cadena1[20 + 1];
	cadena1[0] = 'H';
	cadena1[1] = 'o';
	cadena1[2] = 'l';
	cadena1[3] = 'a';
	cout << cadena1[2] << endl;//muestra "l"
	char cadena2[20 + 1] = "Hola"; //el \0 se agrega solo con comillas dobles
	cout << cadena2[3] << endl;//muestra "a"
	char cadena3[20 + 1] = { 'H','o','l','a','\0' };
	cout << cadena3[0] << endl; //muestra "H"
	//tambien podemos incluir librerias q nos ayuden con el guardado de caracteres, en este caso "#include <string.h>"
	char cadena4[20 + 1];
	strcpy(cadena4, "Hola");
	char cadena5[20 + 1];
	strcpy[cadena5, cadena4];
	//para copiar un string a una cadena, tenemos q pasarle la funcion .c_str() al string
	char cadena6[20 + 1];
	strcpy(cadena6, strPrueba.c_str());
	//para saber si uno tiene mayor valor ascci que otro
	int valor = strcmp(cadena1, cadena6);
		cout << valor << endl;
	*/

	//Archivos
	//para usar la biblioteca que nos permite crear e interactuar con archivos, tendremos q incluirla con "#include <stdio.h>"
	/*
	
	
	FILE* archivo = fopen("datos.dat", "wb+");

	int x = 2;
	fwrite(&x, sizeof(int), 1, archivo);
	int j = 7;
	fwrite(&j, sizeof(int), 1, archivo);
	fclose(archivo);//para cerrarlo de manera segura, ya use y ya metí lo q queria meter en "archivo".

	archivo = fopen("datos.dat", "rb+");
	int y;
	fread(&y, sizeof(int), 1, archivo);
	cout << y << endl;	//2
	//me deja parado en la siguiente posicion para poder modificar o agregar sin pisar nada.
	int p;
	fread(&p, sizeof(int), 1, archivo);
	cout << p << endl;	//7
	fclose(archivo);
	///////////la unica manera de recorrer y mostrar los datos por pantalla de un archivo, es asi--->
	//está bien ese while? qué hubiera pasado si al hacer el primer fread de la linea 188, ya hubiesemos llegado al ultimo elemento del archivo, es decir q solo haya un elemento.. jamas entrariamos al cout, xq la condicion del while nos hubiera dado false, y no lograriamos mostrarlo por pantalla, propongo empezar con un if--->
	/*
	archivo = fopen("datos.dat", "rb+")
	int variable;
	fread(&variable,sizeof(int),1,archivo);
	if(feof(archivo)){
	cout<<variable<<endl;
	}
	}else{
	while(!feof(archivo)){
	cout<<varible<<endl;
	fread(&variable,sizeof(int),1,archivo);
	}
	
	archivo = fopen("datos.dat", "rb+");
	int variable;
	fread(&variable, sizeof(int), 1, archivo);

	while (!feof(archivo)) {
		//cout<< varible <<endl;
		fread(&variable, sizeof(int), 1, archivo);
	};
	//clase 10, ejercicio A
	/*
	int arr[200];
	int i = 0;
	FILE* archNum = fopen("numeros.dat", "rb+");
	int num;
	fread(&num, sizeof(int), 1, archNum);
	while (!feof(archNum)) {
		arr[i] = num;
		i++;
		fread(&num, sizeof(int), 1, archNum);
	};
	for (int j = 0; j < i; j++) {
		cout << arr[j] << endl;
	}
	
	*/
	
	
	
	
	

	return 0;
};