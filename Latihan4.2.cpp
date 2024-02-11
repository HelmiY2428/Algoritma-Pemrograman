#include <iostream> 
using namespace std; 
void inputData(float& pjg, float& lbr);
 float hitungLuas(float pjg,float lbr);
  void cariLuas(float pjg,float lbr, float& hsl);
   void cetakData(float pjg, float lbr, float hsl);
    main() { 
	float panjang,lebar,luas;
	 inputData(panjang,lebar);
	  luas=hitungLuas(panjang,lebar); // fungsi 
	  cetakData(panjang,lebar,luas);
	   cariLuas(panjang,lebar,luas); // void 
	   cetakData(panjang,lebar,luas);
	    } 
		void inputData(float& pjg, float& lbr){ 
		cout<<"Input Panjang = "; cin>>pjg;
		 cout<<"Input Lebar = "; cin>>lbr;
		  }
		   float hitungLuas(float pjg,float lbr){ 
		   return (pjg*lbr);
		    }
			 void cariLuas(float pjg,float lbr, float& hsl){ 
			 hsl=pjg*lbr;
			  }
			   void cetakData(float pjg, float lbr, float hsl){ 
			   cout<<"Panjang = " << pjg <<endl;
			    cout<<"Lebar = " << lbr <<endl;
				 cout<<"Luas = " << hsl <<endl;
				 }
