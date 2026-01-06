#include <bits/stdc++.h>
using namespace std;

//1) Print name n times 
void fun(int i, int n){
    if(i > n) return;
    cout << "Vedant\n";
    fun(i+1, n);
}
int main() {
	int n;
	cin >> n;
	fun(1, n);
}


//2) Print(1 to N)
void fun(int i, int n){
    if (i > n) return;
    cout << i;
    fun(i+1 ,n);
}
int main(){
    int n;
    cin >> n;
    fun(1, n);
}


// 3) Print in the terms of N to 1
void fun(int n){
    if(n == 0) return; //base case ; stops when we reach 0
    cout << n << " ";
    fun(n - 1);
}
int main(){
    int n;
    cin >> n;
    fun(n);
}


// 4) Print hiearchy from 1 to N (by BackTracking)
void fun(int i){
    if(i < 1) return ;
    fun(i - 1);
    cout << i << " ";
}
int main(){
    int n;
    cin >> n;
    fun(n);
}


// 5) Print from N to 1 (From BackTracking)
void fun(int i, int n){
    if(i > n) return;
    fun(i+1, n);
    cout << i << " ";
}
int main(){
    int n;
    cin >> n;
    fun(1, n);
}