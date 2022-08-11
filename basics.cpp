// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 15;
//     int c = a + b;

//     cout << c << endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int req=0,mf=1;
//     for(int i=0;n>0;i++){
//         req=req+(n%2)*mf;
//         n=n/2;
//         mf=mf*10;
//     }
//         cout<<req;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cout << "Type the number of rows" << endl ;
//     cin >> n ;
    
//     for(int i = 1 ; i <= n ; i++){
//         cout << i ;
//     }
//     //return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , i = 1 , num = 1;
    cout << "Type the number of rows" << endl ;
    cin >> n ;
    
    while(num <= n){
    while(i <= num){
        cout << i ;
        i++ ;
        cout << endl ;
        }
    num++ ;
    //return 0;
    }
}