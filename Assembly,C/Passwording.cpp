#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	char pi[60]="14159265358979323846264338327950288419716939937510";//pi say�s�n�n virg�lden sonra ilk 50 basama��
	char word[50];
	int select;
	cout<<"Enter word:"<<endl;
	cin.getline(word,50); // Bu �ekilde kelimeyi bo�luklu alabiliriz.
	e:
	cout<<"Operation 1:Make encryption"<<endl;
	cout<<"Operation 2:Decrypt"<<endl;
	cin>>select;
	//Karaktere say� ekleyip ��kartarak ascii tablosundaki herhangi bir karakteri elde edece�iz.
	if (select==1){
		for(int i=0;word[i]!='\0';i++){
			word[i]=word[i]+pi[i];
		}
		cout<<"Result:"<<endl;
		cout<<word;
	}
	else if(select==2){
		for(int i=0;word[i]!='\0';i++){
			word[i]=word[i]-pi[i];
		}
		cout<<"Result:"<<endl;	
		cout<<word;
	}
	
	else{
		cout<<"Incorrect login..."<<endl;
		goto e;
	}
		
	return 0;
}
