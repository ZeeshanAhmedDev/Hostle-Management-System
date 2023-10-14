#include<stdio.h>
#include<conio.h>  ////    for getch();  function
#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
void registration_logo();      	// declaration
void line(char,int);				// declaration
void line(char ch,int n)    ////  user-defined function ====  function overloading
{
	for(int i=0;i<=n;i++)
	{
	  cout<<ch;
	}
}
class hostle      ////////     BASE CLASS
{
	private:
			string roll,roomno,ph,fname;
            char name[100];
	public:

			void  registration();
			void  menu();
			void  wardens_list();
			void  rooms();
			void  total_student();
			void  logo();
			void  registration_show();
			int   storeinfo();
			void   viewinfo();
			void   show_storeinfo();
		
		
		
								


};
int main ()   /////  STARTING OF MAIN PROGRAM
{     int number;
	 hostle h1;
     h1.logo();
     h1.menu();
     cout<<"\n\t\tEnter your choice:";
     cin>> number;
     switch(number)
     {
     	case 1:
     		{   int code;
     		    

			   system("cls");
			   system("color 3f");
     		    registration_logo();
     			h1.registration();


     			cout<<"\n\n\t\t\t\t\t\t\tRegistration succesfully completed .....";
     			getch();
     				h1.registration_show();
     					 h1.storeinfo();
     				getch();
     				 cout<<"\n\n\t\t\t\t\t Try register yourself again press 1 : " ;
					 cout<<"\n\n\t\t\t\t\t ( OR ) for main menu press 2 : "  <<endl<<endl;

     				cin>>code;

     				//=====================================================================//
     			switch(code)
     			{
     				case 1:         /// case ladder OR switch ladder   starts now
     					{
     						if (code==1)
     						{   system("color 3f");
							 system ("cls");
     						registration_logo();
     						h1.registration();
     						 h1.storeinfo();
     							cout<<"\n\n\t\t\t\t\t\t\tAgain Registration succesfully completed .....";
     							getch();
     						system("cls");
     						return main();
     						break;
							 }
						 }

						 case 2:
						 	{
						 		if(code==2)
						 		{   
						 		  system ("cls");
     						      return main();
     						      break;
								 }
								 default:
								 	cout<<"you have invalid choice :";
								 	system("cls");
     						        return main();
						 	}
			                }              /// case ladder OR switch ladder   ENDs here;
							          	//=====================================================================//
				           }
				         case 2:   /// base case;
						 {  system("color 1f");
						 system("cls");cout<<" \n\n\n\t\t\t\t\t\t";cout<<"List of All wardens that are present in the university";
					cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t LIST OF WARDENS "<<endl;
   					cout<<"\n\t\t\t\t\t\t\t\t"; line('-',18);
							h1.wardens_list();
							 cout<<" \n\n\n\n\t\t\t\t\t\t";cout<<" IF you want to see the Biodata of Wardens press his/her number (from 1 to 8)";
							 int no;
							 cin>>no;
						     system ("cls");
                                //=====================================================================//
						      	switch(no)       /// 2nd case ladder OR switch ladder   starts now
						      	{
                         case 1:
                            {               	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t BioData Of A-Block Warden  "<<endl;
   												cout<<"\n\t\t\t\t\t\t\t\t"; line('-',24);
                                cout<<"\n\n\n\n\t\t\t\tFirst Name is : Abbass"<<endl;
                                cout<<"\n\t\t\t\tLast  Name is : Ghoto"<<endl;
                                cout<<"\n\t\t\t\tDepartment is : Computer Science"<<endl;
                                cout<<"\n\t\t\t\tLecture    of : Mathematics"<<endl;
                                cout<<"\n\t\t\t\tSalary     is : Rs:120000"<<endl;
                                cout<<"\n\t\t\t\tNative City   : District Ghotki";
                                getch();
                                 system("color 2f");
                                system("cls");
                                
								return main();
                            }
                         case 2:
                            {
                            	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t BioData Of B-Block Warden  "<<endl;
   								cout<<"\n\t\t\t\t\t\t\t\t"; line('-',24);
                                cout<<"\n\n\n\n\t\t\t\tFirst Name is : Abbass"<<endl;
                                cout<<"\n\t\t\t\tLast  Name is : Ghoto"<<endl;
                                cout<<"\n\t\t\t\tDepartment is : Computer Science"<<endl;
                                cout<<"\n\t\t\t\tLecture    of : Mathematics"<<endl;
                                cout<<"\n\t\t\t\tSalary     is : Rs:120000"<<endl;
                                cout<<"\n\t\t\t\tNative City   : District Ghotki";
                                getch();
                                  system("color 2f");
                                system("cls");
                                      
								return main();
								
                            }
                             case 3:
                            {
                            	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t BioData Of C-Block Warden  "<<endl;
   								cout<<"\n\t\t\t\t\t\t\t\t"; line('-',24);
                                cout<<"\n\n\n\n\t\t\t\tFirst Name is : Abbass"<<endl;
                                cout<<"\n\t\t\t\tLast  Name is : Ghoto"<<endl;
                                cout<<"\n\t\t\t\tDepartment is : Computer Science"<<endl;
                                cout<<"\n\t\t\t\tLecture    of : Mathematics"<<endl;
                                cout<<"\n\t\t\t\tSalary     is : Rs:120000"<<endl;
                                cout<<"\n\t\t\t\tNative City   : District Ghotki";
                                getch();
                                  system("color 2f");
                                system("cls");
                                      
								return main();
								
                            }
                             case 4:
                            {
                            	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t BioData Of D-Block Warden  "<<endl;
   								cout<<"\n\t\t\t\t\t\t\t\t"; line('-',24);
                                cout<<"\n\n\n\n\t\t\t\tFirst Name is : Abbass"<<endl;
                                cout<<"\n\t\t\t\tLast  Name is : Ghoto"<<endl;
                                cout<<"\n\t\t\t\tDepartment is : Computer Science"<<endl;
                                cout<<"\n\t\t\t\tLecture    of : Mathematics"<<endl;
                                cout<<"\n\t\t\t\tSalary     is : Rs:120000"<<endl;
                                cout<<"\n\t\t\t\tNative City   : District Ghotki";
                                getch();
                                system("color 2f");
                                system("cls");
                                        
								return main();
								
                            }
                             case 5:
                            {
                            	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t BioData Of E-Block Warden  "<<endl;
   								cout<<"\n\t\t\t\t\t\t\t\t"; line('-',24);
                                cout<<"\n\n\n\n\t\t\t\tFirst Name is : Abbass"<<endl;
                                cout<<"\n\t\t\t\tLast  Name is : Ghoto"<<endl;
                                cout<<"\n\t\t\t\tDepartment is : Computer Science"<<endl;
                                cout<<"\n\t\t\t\tLecture    of : Mathematics"<<endl;
                                cout<<"\n\t\t\t\tSalary     is : Rs:120000"<<endl;
                                cout<<"\n\t\t\t\tNative City   : District Ghotki";
                                getch();
                                  system("color 2f");
                                system("cls");
                                      
								return main();
								
                            }
                             case 6:
                            {
                            	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t BioData Of F-Block Warden  "<<endl;
   								cout<<"\n\t\t\t\t\t\t\t\t"; line('-',24);
                                cout<<"\n\n\n\n\t\t\t\tFirst Name is : Abbass"<<endl;
                                cout<<"\n\t\t\t\tLast  Name is : Ghoto"<<endl;
                                cout<<"\n\t\t\t\tDepartment is : Computer Science"<<endl;
                                cout<<"\n\t\t\t\tLecture    of : Mathematics"<<endl;
                                cout<<"\n\t\t\t\tSalary     is : Rs:120000"<<endl;
                                cout<<"\n\t\t\t\tNative City   : District Ghotki";
                                getch();
                                   system("color 2f");
                                system("cls");
                                     
								return main();
								
                            }
                             case 7:
                            {
                            	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t BioData Of G-Block Warden  "<<endl;
   								cout<<"\n\t\t\t\t\t\t\t\t"; line('-',24);
                                cout<<"\n\n\n\n\t\t\t\tFirst Name is : Abbass"<<endl;
                                cout<<"\n\t\t\t\tLast  Name is : Ghoto"<<endl;
                                cout<<"\n\t\t\t\tDepartment is : Computer Science"<<endl;
                                cout<<"\n\t\t\t\tLecture    of : Mathematics"<<endl;
                                cout<<"\n\t\t\t\tSalary     is : Rs:120000"<<endl;
                                cout<<"\n\t\t\t\tNative City   : District Ghotki";
                                getch();
                                  system("color 2f");
                                system("cls");
                                      
								return main();
								
                            }
                             case 8:
                            {
                            	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t BioData Of H-Block Warden  "<<endl;
   								cout<<"\n\t\t\t\t\t\t\t\t"; line('-',24);
                                cout<<"\n\n\n\n\t\t\t\tFirst Name is : Abbass"<<endl;
                                cout<<"\n\t\t\t\tLast  Name is : Ghoto"<<endl;
                                cout<<"\n\t\t\t\tDepartment is : Computer Science"<<endl;
                                cout<<"\n\t\t\t\tLecture    of : Mathematics"<<endl;
                                cout<<"\n\t\t\t\tSalary     is : Rs:120000"<<endl;
                                cout<<"\n\t\t\t\tNative City   : District Ghotki";
                                getch();
                                  system("color 2f");
                                system("cls");
                                      
								return main();
								
                            }
                                    
                            default:
								 	cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t you have invalid choice : "<<endl;
								 	getch();
								 	 system("color 5f");
								 	system("cls");
								 	       
     						        return main();
							 
						      	}
						      

						

						  case 3:		//   base class 
						  {        
						   system("cls");cout<<" \n\n\n\t\t\t\t\t\t";cout<<"List of All Students"<<endl;
						   
							
							
							
						  }
						  
						 
							
						    }
			 }



	getch();
 }           /////   END OF MAIN PROGRAM

   void hostle::logo()
  {
  	cout<<"\t\t\t\t\t";cout<<"=================================    "<<endl;
  	cout<<"\t\t\t\t\t";cout<<"                                     "<<endl;
  	cout<<"\t\t\t\t\t";cout<<"  								   "<<endl;
  	cout<<"\t\t\t\t\t";cout<<"     HOSTLE MANAGEMENT SYSTEM 	   "<<endl;
  	cout<<"\t\t\t\t\t";cout<<"   								   "<<endl;
	cout<<"\t\t\t\t\t";cout<<"   								   "<<endl;
	cout<<"\t\t\t\t\t";cout<<"=================================    "<<endl;
  }


  void hostle::registration()
  {    cout<<"\n\n\n";
  	   cout<<"\n\t\t\t\tEnter your name :  ";               cin>>name;
  	   cout<<"\n\t\t\t\tEnter your fathers name :  ";		cin>>fname;
  	   cout<<"\n\t\t\t\tEnter your roll no :  ";			cin>>roll;
  	   cout<<"\n\t\t\t\tEnter your phone number:  ";		cin>>ph;
  	   cout<<"\n\t\t\t\tEnter your room number :  ";		cin>>roomno;

  }


  void hostle::menu()
  {		cout<<"\n\n\t\t";	line('-',110);
  cout<<"\n\n\t\t1.Registration Form \t2.All Block Warden's List \t3.Search Total Strength Of Students In Hostle\n\n\t\t 4.Rooms\t \t\t\t 5.Exit "<<endl;
  			cout<<"\n\t\t";	line('-',110);
  			cout<<endl;
  }

     void hostle::registration_show()
     {
     	 cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Account Registration Information "<<endl;
     	cout<<"\t\t\t\t\t\t\t\t\t\t\t	";line('-',33);
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tFIRST NAME            :           "<<name;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tLAST NAME             :           "<<fname;
	    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tROLL NO               :           "<<roll;
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tPHONE NUMBER          :           "<<ph;
	    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\tROOM NUMBER           :           "<<roomno;
	 }


	 void hostle::wardens_list()
	 {
	 	cout<<"\n\n\n\t\t\t\t\t\t\t1. A-BLOCK WARDEN  : Sir Abbas ghoto";
	 		cout<<"\n\n\n\t\t\t\t\t\t\t2. B-BLOCK WARDEN  : Sir Saleem vighio";
	 			cout<<"\n\n\n\t\t\t\t\t\t\t3. C-BLOCK WARDEN  : Sir Abbas Ali";

	 					cout<<"\n\n\n\t\t\t\t\t\t\t4. D-BLOCK WARDEN  : Sir Ahmed Ali";
	 						cout<<"\n\n\n\t\t\t\t\t\t\t5. E-BLOCK WARDEN  : Sir Javed Ahmed";
	 							cout<<"\n\n\n\t\t\t\t\t\t\t6. F-BLOCK WARDEN  : Sir Abdul Rehman";
	 								cout<<"\n\n\n\t\t\t\t\t\t\t7. G-BLOCK WARDEN  : Sir Zahid Hussain";
									cout<<"\n\n\n\t\t\t\t\t\t\t8. H-BLOCK WARDEN  : Sir Naeemullah ghoto \t";
	 	 }
	 	 
	 	 
					void hostle::viewinfo()
					
					{
						show_storeinfo();
						registration_show();
					   system("cls");
					
					}	

	 void hostle::total_student()
	 	 {  cout<<"";

		  }


  void registration_logo(){
cout<<"\n\n\n\t\t\t\t\t\t REGISTRATION FORM         	   "<<endl;
cout<<"\n\t\t\t\t\t\t";line('-',18);}



  //functions for Registration form store data
  ////================================Storing Record===========================
  int hostle::storeinfo()
  {
  	ofstream  store;
  	store.open(  "Register forms.dat");
  	store.write((char*)this,sizeof(*this));
  	store.close();
	  return (1);
  }

void hostle::show_storeinfo()
{
	ifstream foo;
	char ch;
	foo.open("Register forms.dat");
	ch=foo.get();
	while(!foo.eof())
	{
	  cout<<ch;
	  ch=foo.get();
	}	
	foo.close();
	getch();
}





