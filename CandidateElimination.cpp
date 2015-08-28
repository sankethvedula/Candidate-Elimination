/*
 * CandidateElimination.cpp
 *
 *  Created on: 28-Aug-2015
 *      Authors: Sanketh Vedula
 *      		 Surya Teja Cheedella
 */

#include<bits/stdc++.h>
using namespace std;

class Eliminator{
	public:
		void start(int M, string data[][50]){
			initializeS(M);
			initializeG(M);
		}

		void initializeS(int M){
			string specific[M];
			fill_n(specific, M, "#");

//			for(int i= 0; i< M; i++)
//				cout<< specific[i]<< " ";
		}
		void initializeG(int M){
			string general[M];
			fill_n(general, M, "?");

//			for(int i= 0; i< M; i++)
//				cout<< general[i]<< " ";
		}


};

int main(){
	int N, M;
	cin>> N>> M;

	string attributes [M];
	string a;
	for(int i= 0; i<M; i++){
		cin>> a;
		attributes[i]= a;
	}

	string data[N][50];

	for(int i= 0; i<N; i++){
		for(int j= 0; j< M; j++){
			cin>> a;
			data[i][j]= a;
		}
	}


	Eliminator elim;

	elim.start(M, data);

	return 0;
}


