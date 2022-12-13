#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string A ;
    cout << "Input text: " ;
	cin >> A ;
    
    cout << "Reversed text: " ;
    cout << func1(A) << endl  ;

    cout << "Palindrome: ";
	 
    if (func2(func1(A)) == func2(A) ){
		cout << "Yes";
	}
	else {cout << "No" ;
	}


	return 0;
}
