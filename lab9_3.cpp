
#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream ss;
	
	string txt;
	int n=0;
	double mean=0,sd=0,c[100];
	vector<double>q;
	ss.open("D:\\LabCpp\\lab9-2562-2-POOHPHE-master\\score.txt");
	while(getline(ss,txt)){
		c[n]=stod(txt);
		q.push_back(stod(txt));
		n++;
		mean+=stod(txt);
	}
	ss.close();
	ss.open("D:\\LabCpp\\lab9-2562-2-POOHPHE-master\\score.txt");
	mean/=1.0*n;
	/*for(int i=1;i<=n;i++){
		sd+=pow(c[i-1]-mean,2);
		
	}*/
	for(auto &i:q){
		sd+=pow(i-mean,2);
	}
	
	
	sd/=1.0*n;
	sd=sqrt(sd);
	cout << "Number of data = "<<n<<endl;
	cout << "Mean = "<<mean<<endl;
	cout << "Standard deviation = "<<sd<<endl;
}
