typedef int tipoelem;
//typedef tipoelem ** matrice;

class matrice {
	public:
		matrice(){ righe = 3; colonne = 3;}
		matrice(int r,int c): righe(r),colonne(c){};	// definisce una matrice 5x5

		tipoelem LeggiMatrice(int r, int c)	{return *M[r,c];}		//legge elemento di ricìga e colonna di una matrice
		void ScriviMatrice(int r, int c, tipoelem e)	{*M[r,c] = e;}	//setter

	private:
		double M[10][10];
		int righe, colonne;
};
