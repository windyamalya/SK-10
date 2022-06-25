#include <iostream>
using namespace std;
class studi{
  private:
    int *nim;
    int nimMhs[10];
    string *nama;
    string namaMhs[10];
    
  public:
  	void windy();
  	void angga();
  	void audila();

};

void studi::windy(){

  cout<<"================================="<<endl;
  cout << "|\tMAHASISWA YANG MASUK \t\t|"<<endl;
	cout << "|\t  Babak FINAL\t\t\t\t|"<<endl;
	cout<<"================================="<<endl;
  for (int i=0; i<5; i++){
    cout << "MAHASISWA "<<i+1<<endl;
    cout << "NIM  : ";
    cin >> nimMhs[i];
    cout << "NAMA : ";
    cin >> namaMhs[i];
  }
  cout<<endl<<endl;
}
void studi::angga(){

  cout << "============================="<<endl;
  cout << "|\tDATA YANG TERSIMPAN\t\t|"<<endl;
  cout << "============================="<<endl;
  nim = new int[5];
  nama = new string[5];
  for(int i=0; i<5; i++){
    *nim = nimMhs[i];
    nim += 1;
    *nama = namaMhs[i];
    nama+=1;
  }
}
void studi::audila(){

  nim -=5 ;
  nama -= 5;
  cout<<"|\tDATA MAHASISWA\t\t\t|"<<endl;
  cout << "============================"<<endl;
  for (int i=0; i<5; i++) {
    cout << "\nNama ke-" << i+1 << "\t : ";
    cout << *nama ;
    nama += 1;
    cout << "\nNim \t\t : " ;
    cout << *nim ;
    nim += 1;
  }
  cout<<endl;
}
int main(){

  studi sk;
  sk.windy();
  sk.angga();
  sk.audila();
  
}
