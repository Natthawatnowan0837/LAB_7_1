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
    string x1,x2,x3,x4 ;
    cout << "Input text: " ;
    cin >> x1 ;
    x2 = func3(x1);
    x3 = func1(x2);
    x4 = func1(x1);
    cout << "Reversed text: " << x4<<"\n";
    cout << "Palindrome: ";
    if(x2==x3){
        cout << "Yes" ;
    }else{
        cout << "No" ;
    }
    
}

