/*
By Tonon Abdul-Shafiu Mahmud
Date: 21/06/2021
*/
#include <iostream>
using namespace std;
void implement_Sieve_of_Eratosthenes_Algorithm(int);
int main() {
 int input;
	cout<<"input a number to print all prime numbers to that number using the method of the Sieve of Eratosthenes : ";
	cin>>input;
	cout<<endl;
 if(cin.fail())
	cout<<"please input is not an integer please input an integer greater than 2 but less than 10000";
	else{
		if(input<=2)
    puts("input is less than or equal to 2. Please input a number greater than 2");
 else if(input>=10000)
    puts("input is greater than or equal to 10000. Please input a number less than 10000");
 else{
 	cout<<"All prime numbers to "<<input<<" using the method of the Sieve of Eratosthenes are : ";
    implement_Sieve_of_Eratosthenes_Algorithm(input);
 }
    
	}
 
  return 0;
}
void implement_Sieve_of_Eratosthenes_Algorithm(int n){
int arr[n] = {0};
   for (int i = 2; i <=n; i++) {
      for (int k = i * i; k <=n; k+=i) {
         arr[k - 1] = 1;
      }
   }
   for (int i = 2; i <=n; i++) {
      if (arr[i - 1] == 0)
       cout << i << " ";
   }	
} 

