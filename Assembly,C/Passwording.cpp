#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	char pi[60]="14159265358979323846264338327950288419716939937510";//pi sayýsýnýn virgülden sonra ilk 50 basamaðý
	char word[50];
	int select;
	cout<<"Enter word:"<<endl;
	cin.getline(word,50); // Bu þekilde kelimeyi boþluklu alabiliriz.
	e:
	cout<<"Operation 1:Make encryption"<<endl;
	cout<<"Operation 2:Decrypt"<<endl;
	cin>>select;
	//Karaktere sayý ekleyip çýkartarak ascii tablosundaki herhangi bir karakteri elde edeceðiz.
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
