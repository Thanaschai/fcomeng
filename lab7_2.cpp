#include<iostream>

using namespace std;
 
int main(){
	int i = 0, P[5000], k;
	cout << "Please input k: ";
	cin >> k ;
    while(i < 5000){
	P[i] = 2*i+1;
	i++;}
	
	if (k>0){
	int i = 0 ;
	int result = 0 ;
	while (i < 5000){
		if (P[i]%k == 0)
		{ 
			result = result - P[i] ;
		}
		else {
			result = result + P[i] ;
			
		}
		i++;
		}
	cout << "Result = " << result << endl;
	}else { 
	cout << "Invalid input!!!";
	}
	return 0;
}
