
#include <iostream>
#include <conio.h>
using namespace std;



void quickSort(int* arr, int izq,int der) {  //Declaracion de funcion con parametros
	int i = izq, j = der, tmp;       
	int p = arr[(izq + der) / 2];   //pivote 
	while (i <= j) {    //con este ciclo vamos a hacer que la sublista "i", sea menor o igual que "j"
		while (arr[i] < p) i++;
		while (arr[j] > p) j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++; j--;
		}

	}
	if (izq < j)     //Acomodamos valores de acuerdo a su tamaño
		quickSort(arr, izq, j);
	if (i < der)
		quickSort(arr, i, der);
}

int main() {
	//mensajes en pantalla
	cout << "Metodo quickSort\n";
	cout << "Lista para ordenar\n";
	cout << "71,6,69,-37,98,5,21,8,0,100,10,1,66,99,-8,-76,43,-243,88,87\n";
	cout << "Lista ordenada\n";
	//se establece el tamaño del arreglo y los datos que va a ordenar
	int arreglo[20] = { 71,6,69,-37,98,5,21,8,0,100,10,1,66,99,-8,-76,43,-243,88,87 }; 
	
	quickSort(arreglo, 0, 19); //llamamos la funcion

	for (int i = 0; i < 20; i++) //impresion de datos
		cout << arreglo[i] << " ";
	system("pause");
	return 0;
}


