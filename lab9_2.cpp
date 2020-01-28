//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream


#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream source;
	ofstream out;
	string textline;
	source.open("D:\\LabCpp\\lab9-2562-2-POOHPHE-master\\cheerbook.txt");
	out.open("D:\\LabCpp\\lab9-2562-2-POOHPHE-master\\cheerbook_copy.txt");
	out<<"-------------------- SOTUS ---------------------\n";
	while(getline(source,textline)){
		out<<textline<<endl;
	}
	out<<"-------------------- SOTUS ---------------------";
	source.close();
	out.close();
	
	
	
}
