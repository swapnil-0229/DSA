
#include <bits/stdc++.h>
using namespace std;

void print1(int n ){
int i;
for( i=0; i<n; i++){
    
    for(int j=0; j<n-i-1; j++){
       cout << " ";
    }

    for(int j=0; j<2*i+1; j++){
        cout << "*" ;
    }
    
    for(int j=0; j<i; j++){
       cout << " ";
    }
    cout << endl;
}
}
void print2(int n ){
int i;
for( i=0; i<n; i++){
    
    for(int j=0; j<i; j++){
       cout << " ";
    }

    for(int j=0; j<2*n-2*i-1; j++){
        cout << "*" ;
    }
    
    for(int j=0; j<i; j++){
       cout << " ";
    }
    cout << endl;
}
}
void print3(int n){
    int i;
    for(i=0; i<=n; i++){
        for(int j=0; j<=i; j++){

            cout <<"*" ;
        }
        cout << endl;
    }
}
void print4(int n){
    int i;
    for(i=0; i<n; i++){
        for(int j=0; j <n-i; j++){

            cout <<"*" ;
        }
        cout << endl;
    }
}
void print5(int n){
int i;
int start= 1;
for(i=0; i<n; i++){

    if(i % 2 == 0){
        start = 1;
    }
    else {
        start = 0;
    }

    for(int j=0; j<=i ; j++){

        cout << start; 

        start= 1 - start;

    }
    cout << endl;
}
}
void print6(int n){

int i; 
int start= 2*(n-1);
 for(i=0; i<=n; i++){

    //number
    for(int j=1; j<=i; j++){
        cout << j;

    }
    //space
    for(int j=0; j<=start; j++){

        cout << " ";
    }
    //number
    for(int j=i; j>0; j--){
        cout << j;
    }
    start-=2;
    cout<<endl;
 }
}
void print7(int n){
    int i;
    int start=1;
    for(i=0; i<n; i++){
        
        for( int j=0; j<=i; j++){

            cout << start;
            start = start + 1;
        }
    cout << endl;
    }
}
void print8(int n){
int i;
for(i=0; i<n; i++){

    for( char ch= 'A'; ch <= 'A' + i; ch++){

            cout<< ch; 
    }
    cout<< endl ;

}
}
void print9(int n){
int i;
for(i=0; i<n; i++){

    for( char ch= 'A'; ch <= 'A' + n -(i+1); ch++){

            cout<< ch; 
    }
    cout<< endl ;

}
}
void print10(int n){

int i; 
char ch = 'A'; 
for(i= 0; i<n; i++){
    
    for(int j= 0; j<=i; j++){
    cout << ch << " " ;
    }

    ch = ch + 1;
    cout << endl; 
}
}
void print11(int n){

int i;

for(i=0; i<n; i++){

    
    for(int j = 0; j< n - i -1; j++){

        cout<<" ";

    }
    char ch = 'A';
    
    int bp = (2*i+1)/2;

    for(int j = 1; j<=2*i + 1; j++){

            cout << ch;

           if(j<=bp) ch++;
            else ch--;
            

    }
    //space
    for(int j = 0; j<n-i-1; j++){

        cout<<" ";

    }
    cout<<endl;

}
}
void print12(int n){
int i;
for(i=0; i<n; i++){

    for( char ch= 'E'-i; ch <= 'E'; ch++){

            cout<<ch<<" "; 
    }
    cout<< endl ;

}
}

void print13(int n){
int i;
for(i=0; i<n; i++){

     for(int j=0; j<n-i; j++){
        cout<< "*";

     }

     for(int j = 0; j < 2*i; j++){
        cout<<" ";
     }

     for(int j = 0 ; j <n-i; j++){
        cout << "*";
     }
     cout<< endl;
     
    

}
for(i=0; i<n; i++){

for(int j= 0; j<i+1; j++){
        cout<<"*";
    }
    for(int j= 0; j< 2*(n-i-1); j++){
        cout<< " "; 
    }
     for(int j= 0; j<i+1; j++){
        cout<<"*";

     }
     cout<<endl;
}
}


void print14(int n){


int i;


for(i=0; i<n; i++){

for(int j= 0; j<i+1; j++){
        cout<<"*";
    }
    for(int j= 0; j< 2*(n-i-1); j++){
        cout<< " "; 
    }
     for(int j= 0; j<i+1; j++){
        cout<<"*";

     }
     cout<<endl;
}
for(i=0; i<n-1; i++){

     for(int j=0; j<n-(i+1); j++){
        cout<< "*";

     }

     for(int j = 0; j < 2*(i+1); j++){
        cout<<" ";
     }

     for(int j = 0 ; j <n-(i+1); j++){
        cout << "*";
     }
     cout<< endl;
     
    }
}

/*void print15(int n){
int i;
for(i=1; i<=n; i++){

    int space = i;


    for(int j = 0; j <= space; j++){
        cout << "*";
    }

    for(int j = 0; j <=; j++){
        cout << " ";
    }

    for(int j = 0; j <= space; j++){
        cout << "*";
    }
    



}
}
*/

void print16(int n){
int i,j;
    for(i=0; i<n; i++){

        for( j = 0; j < n; j++){

            if( i==0 || i == n-1 || j == 0 || j == n-1){
                 cout << "*";
            }
            else {
                cout << " ";
        }

    }
cout << endl;
}}



int main() {
    int n;
    cin >> n;
    
    print17(n);
   

   }

