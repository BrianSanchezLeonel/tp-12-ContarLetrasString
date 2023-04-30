#include<bits/stdc++.h>
using namespace std;
int ContarLetrasString(string frase);
int main(){
	string frase;
	cout<<"Ingrese una frase:"<<endl;
	cin>>frase;
	int C=ContarLetrasString(frase);
	cout<<"Tiene "<<C<<" letras"<<endl;
	return 0;
}
int ContarLetrasString(string frase){
	int contar,i=0;     
	while(i<=frase.size()-1){{
			contar+=1;
	    }
		i++;
	}
	return contar;
  }