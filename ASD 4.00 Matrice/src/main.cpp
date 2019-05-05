#include <iostream>
#include "matrice.cpp"

using namespace std;

int main(){
	int righe =5,colonne=5;
	int i=0;
	cout<<"Righe--->";
	cin>>righe;
	cout<<"Colonne--->";
	cin>>colonne;

	matrice matr(righe,colonne);

	int value;
	for(i=0;i<righe;i++){
		for(int j=0;j<colonne;j++){
			cout<<"Elem-->     ";
			cin>>value;
			matr.ScriviMatrice(i,j,value);
		}
	}

	for(int i=0;i<righe;i++){
		for(int j=0;j<colonne;j++){
			 cout<<matr.LeggiMatrice(i,j)<<endl;
		}
	}
    system("pause");
}
