/*
OPERATOR OVERLOADING FOR DYNAMIC CLASS 
*/
#include<bits/stdc++.h>
using namespace std;
class Vector{
	private:
   int size;
   double *data;
	public:
	Vector(){}
	~Vector(){cout<<"destuructor called;";
	//doesn't work
	// if(size!=0) delete [] data;
	//  size=0;
	}
	Vector(int nsize,double *arr){
		size=nsize;
		data=new double[size];
		int i;
		for(i=0;i<size;i++){
			data[i]=arr[i];
		}
	}
  void printvec(){
	int i;
	for(i=0;i<size;i++){
		cout<<data[i]<<" ";
		
	}
  }
  Vector operator=(const Vector& b){
	if(size!=0){
		delete [] data;
	}
	size=b.size;
	data=new double[size];
	int i;
	for(i=0;i<size;i++){
		data[i]=b.data[i];
	} return *this;
  }
  void setsize(int nsize){size=nsize;}
  int getsize(){return size;}

  friend ostream& operator<<(ostream&out,const Vector& f){
	// size=f.size;
	int i;
	for(i=0;i<f.size;i++){
		if(f.size==0){
			out<<'('<<f.data[i]<<", ";
		}
		else if(f.size==f.size-1){
			out<<f.data[i]<<')';
		}
        else{
			out<<f.data[i]<<", ";
		}
		
	}
	return out;
  }
  Vector operator+(Vector& s){
	if(size!=0){
		delete [] data;
	}
	size=s.size; int i;
   data=new double[size];
   for(i=0;i<size;i++){
	data[i]=this->data[i]+s.data[i];
   }
   return *this;
  }
  Vector operator-(Vector& t){
	if(size!=0){
		delete [] data;
	}
	size=t.size;
	data=new double[size];
	int i;
	for(i=0;i<size;i++){
		data[i]=this->data[i]-t.data[i];
	}
	return *this;
  }
  Vector operator*(Vector&b){
	if (size!=0){
		delete [] data;
	}
	size=b.size;
	int i;
	for(i=0;i<size;i++){
		data[i]=this->data[i]*b.data[i];
	}
	return *this;
  }
//   friend istream& operator>>(isteam& in,Vector& v){
// 	int i;

// 	for(i=0;i<v.size;i++){
// 		in>>v.data[i];
// 	}return in;
//   }
};
int main(){
	
	int n;
	cout<<"enter size:"<<endl;
	cin>>n;
	cout<<"data for first vector";
	double *arr=new double[n];
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"data for second vector"<<endl;
	double *arr1=new double[n];
	for(i=0;i<n;i++){
		cin>>arr1[i];
	}
	Vector v(n,arr);
	v.printvec();
	Vector x(n,arr1);
	x.printvec();
	cout<<endl;
	cout<<x<<endl;
	//those not working properly;
	Vector l=x+v;
	cout<<"adding "<<l<<endl;
	Vector d=v-x;
	cout<<"substracting "<<d<<endl;
	Vector j=x*v;
	cout<<"multiplying "<<j<<endl;
	fstream out("write.txt",ios::out);
	out<<x;
	// Vector a;
	// a.setsize(3);
	
	// 	cin>>a;
	return 0;
}