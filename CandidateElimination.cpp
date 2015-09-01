/*
 * CandidateElimination.cpp
 *
 *  Created on: 28-Aug-2015
 *      Authors: Sanketh Vedula
 *               Surya Teja Cheedella
 */

#include<bits/stdc++.h>
using namespace std;

vector<string> specific;
vector<string> general;

void Eliminator(vector<string> &data){
    int M= data.size();
    if(data[M-1]== "Yes"){
        
    }
    else if(data[M-1]== "No"){

    }
    else{
        cout<< "Incorrect data!";
    }

}


int main(){
    int N, M;
    cin>> N>> M;

    vector<string> attributes;
    vector<string> data;        //one instance
    string a;


    for(int i= 0; i<M; i++){
        cin>> a;
        attributes.push_back(a);
        specific.push_back("#");
        general.push_back("?");
    }

    for(int i= 0; i<N; i++){
        data.clear();
        for(int j= 0; j<M; j++){
            cin>>a;
            data.push_back(a);
        }
        Eliminator(data);      
    }

    // for(int i= 0; i<M; i++){
    //     cout<< attributes[i]<< specific[i]<< general[i]<< data[i]<< endl;
    // }

    return 0;
}