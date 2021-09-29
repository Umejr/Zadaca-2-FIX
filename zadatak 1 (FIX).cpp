#include <iostream>
using namespace std;
int main ()
    {
	
	int a;
	cout<<"Unesite mjesec godisnjeg doba, od 1 do 12 !  "<<endl;
	cin>>a;
	
    if (a == 1||a == 2){
    cout<< "Godisnje doba je zima "<<endl;
}
    else if (a == 4||a == 5){
    cout<< "Godisnje doba je proljece "<<endl;
}
    else if (a == 7||a == 8){
    cout<< "Godisnje doba je ljeto "<<endl;
}
    else if (a == 10||a == 11){
    cout<< "Godisnje doba je jesen "<<endl;
}
    if (a == 3){
    cout<< "U ovom mjesecu je smjena godisnjih doba, zima zavrsava, proljece nastaje 21. "<<endl;
}
    else if (a == 6){
    cout<< "U ovom mjesecu je smjena godisnjih doba, proljece zavrsava, ljeto nastaje 22. "<<endl;
}
    else if (a == 9){
    cout<< "U ovom mjesecu je smjena godisnjih doba, ljeto zavrsava, jesen nastaje 23. "<<endl;
}
    else if (a == 12){
    cout<< "U ovom mjesecu je smjena godisnjih doba, jesen zavrsava, zima nastaje na 21. "<<endl;
}
    else if (a>=13) {
	cout<<"Unijeli ste pogresan broj, pokusajte ponovo ! "<<endl;

}


    return 0;
    system ("PAUSE");
}


