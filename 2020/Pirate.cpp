#include<iostream>
	using namespace std;

int main(){
	str month;
	int a;
	getline (cin,month);
	cin >> a;
	
	if(month == OCT || month == DEC){
	cout << "yup";
	}	
	else{
	cout << "nope";
	}
	return 0;
}



