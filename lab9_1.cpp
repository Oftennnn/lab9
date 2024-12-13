#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;


int main(){
  double loan,rate,paym=0;
    cout << "Enter initial loan: "; cin >> loan;
	cout << "Enter interest rate per year (%): "; cin >>rate;
	cout << "Enter amount you can pay per year: "; cin >> paym;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	double inter,total  , prevbal=loan ; int endy=1;
	while(loan!=0){
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << setw(13) << left << endy; 
	cout << setw(13)  << left  << setprecision(2) << fixed << prevbal;
	inter=prevbal*(rate/100);
	cout << setw(13)  << left  << setprecision(2) << fixed << inter;
	total=prevbal+inter;
	cout << setw(13)  << left  << setprecision(2) << fixed << total;

	if(total<paym){paym = total;}
	cout << setw(13)  << left  << setprecision(2) << fixed << paym;
		loan=total-paym;
	cout << setw(13)  << left  << setprecision(2) << fixed << loan;
	cout << "\n";	
	
	
	
	

	endy++; prevbal=loan; 
	}
   
    return 0;


}