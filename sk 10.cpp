#include <iostream>
using namespace std;
class node{
  public:
      void  input();
      void proses();
      void output();
    
    node *berikut;
    node *node1, *node2, *node3, *node4, *node5;

  private:  
     string nama;
    int nim;
    string A[20];
        int B[20];
  int i;
};


void node::input(){
	
	 for( int i=0; i<5; i++){  
  cout<<"Masukan Nama : ";
  cin>>A[i];
  cout<<"Masukan Nim : ";
  cin>>B[i];
    }
 
}
void node::proses(){
  node1 = new node();
  node2 = new node();
  node3 = new node();
  node4 = new node();
  node5 = new node();

  node1-> nim = B[1];
  node1-> nama = A[1];
  node1-> berikut = node2;

  node2-> nim = B[2];
  node2-> nama = A[2];
  node2-> berikut = node3;

  node3-> nim = B[3];
  node3-> nama = A[3];
  node3-> berikut = node4;

  node4-> nim = B[4];
  node4-> nama = A[4];
  node4-> berikut = node5;

  node5-> nim = B[5];
  node5-> nama = A[5];
  node5-> berikut = NULL;
  }

void node::output(){

    for(int i=0;i<5;i++){
      cout<<"\n Nama ke-"<<i+1<<":";
      cout<<A[i];
  
      cout<<"\n NIM: ";
      cout<<B[i];
    
    }
} 
int main() {
 node X;
  X. input();
  X.proses();
  X.output();
}
