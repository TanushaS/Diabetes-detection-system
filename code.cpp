#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<ctype.h>
#include<process.h>
#include<dos.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class diabetes
	 {
	    private:
		    string name;
		    float age;
		    int wt;
		    float ht;
		    char sex;
		    char s[5];
	    public:
	      void getvalue(void);
		  void getlevel1_symptoms(void);
		  void getlevel2_symptoms(void);
		  int analyse_symptoms(int);
		  char display_message(int,int);
	 };
	 class doctor
{
	public:
	string docname;
	string desig;
	int age;
	int nop;
		void getdata();
		void putdata();
};
void doctor::getdata()
{
    ofstream f3("docdetails.txt",ios::app);
    cout<<"\nPlease enter your details:";
	cout<<"\n Enter the Name : ";
	cin>>docname;
	cout<<"\n Enter the designation : ";
	cin>>desig; 
	cout<<"\n Enter the Age : ";
	cin>>age;
    cout<<"\n Enter the no of patients you are currently handling : ";
	cin>>nop;
	f3<<" "<<docname<<" ";
	f3<<" "<<desig<<" ";
	f3<<" "<<age<<" "; 
	f3<<" "<<nop<<"\n";
	f3.close();
} 
void doctor::putdata()
{
    string dname3; 
    int flag4=0;
    system("cls");
     system("Color 0B");
    cout<<"\nDOCTORS DETAILS..\n\n\n";
	ifstream f3("docdetails.txt",ios::in);
	cout<<"\n**************************************************************************\n";
	cout<<setw(5)<<"Name"<<setw(15)<<"  Designation"<<setw(15)<<"Age"<<setw(15)<<"   No of patients";
	cout<<"\n**************************************************************************\n";
	while(f3>>docname>>desig>>age>>nop)
	{
		cout<<setw(5)<<docname<<setw(15)<<desig<<setw(15)<<age<<setw(15)<<nop<<"\n";
	}
	f3.close();
	fstream f4("docdetails.txt");
	cout<<"\n\nEnter the doctors name whom you want to refer : ";
	cin>>dname3;
	while(f4>>docname>>desig>>age>>nop)
	{
		if(docname==dname3)
		{
		flag4=1;
		system("cls");
		system("Color 4A");
	    cout<<"\n\nDetails ofyour doctor:";
	    cout<<"\n\nName : "<<docname<<"\n\nDesignation : "<<desig<<"\n\nAge : "<<age<<"\n\nNo of patients : "<<nop;
	    cout<<"\n\nYour appointment has been fixed...\n\n";
		}
	}
	if(flag4!=1)
		cout<<"\nnot found..";
	f4.close();
}
	void diabetes::getvalue()
	{
	system ("cls");
	 ofstream f5("patdetails.txt",ios::app);
	 system ("cls");
	   system("Color 0B");
	 cout<<"\n\n************************* W E L C O M E ************************ \n\n" ;
	 cout<<endl<<endl;
	 cout<<"\n\n P E R S O N A L   I N F O R M A T I O N";
	 cout<<"\n\n\nN A M E        :";
	 cin>>name;
	 //strcpy(gn,name);
	 	while(1)
	{
	try
	{
     cout<<"\nA G E          :";
	 cin>>age;
	 	if(age<1 || age>122 )
     	throw age;
    else 
        break;
    }
    catch(...)
    {
    cout<<"\nInvalid value..";
    }
   }
	 	while(1)
	{
	try
	{
	 cout<<"\nW E I G H T    :";
	 cin>>wt;
	 	if(wt<1 || wt>200 )
     	throw wt;
    else 
        break;
    }
    catch(...)
    {
    cout<<"\nInvalid value..";
    }
   }
	 	while(1)
	{
	try
	{
	 cout<<"\nH E I G H T    :";
	  cin>>ht;
	  	if(ht<1 || ht>215 )
     	throw ht;
    else 
        break;
    }
    catch(...)
    {
    cout<<"\nInvalid value..";
    }
   }
	  	while(1)
	{
	try
	{
	 cout<<"\nS E X (M/F)    :";
	  cin>>sex;
	  sex=toupper(sex);
	  	if(sex!='M' && sex!='F' )
     	throw sex;
    else 
        break;
    }
    catch(...)
    {
    cout<<"\ninvalid..";
    }
   }
	 f5<<name<<" "<<age<<" "<<wt<<" "<<ht<<" "<<sex<<" ";
	 
	 f5.close();
	}
void diagnosis(void)
     {
     system("cls");
     system("Color 4E");
     cout<<" **  D I A G N O S I S   W I N D O W **   ";
     cout<<"\n\n\n";
     cout<<" Let's have alook at  symptoms.........";
     cout<<"\n\n\n";
     cout<<" Please enter the form in next page .";
     cout<<"\n\n\n\n\n\n\t\t\t ";
     cout<<"***** PRESS ANY KEY ***** ";
     }
void diabetes::getlevel1_symptoms(void)
    {
     system("cls");
     system("Color 4E");
     int i=0;
      ofstream f13;
      f13.open(name.c_str(),ios::app);
     cout<<( " \n*** MEDICAL DIAGONOSIS FORM *** ");
     	while(1)
	{
	try
	{
     cout<<("\n\n\nAPPETITE (H(HIGH),/L(LOW),/N(NORMAL) : ") ;
     cin>>s[i];
     s[i]=toupper(s[i]);
	 if(s[i]!='H' && s[i]!='L' && s[i]!='N')
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nAPPETITE :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nFREQUENCY OF THIRST(H(HIGH),/L(LOW)/N(NORMAL) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
      if(s[i]!='H' && s[i]!='L' && s[i]!='N')
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nTHIRST_FREQUENCY :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nFREQUENCY OF URINATION(H(HIGH),/L(LOW),/N(NORMAL) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
      if(s[i]!='H' && s[i]!='L' && s[i]!='N')
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nURINATOIN_FREQUENCY :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nVISION (I(IMPAIRMENT),/N(NORMAL) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
      if(s[i]!='I' && s[i]!='N')
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nVISION :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nURINE SUGAR(P(PASSIVE)/A(ACTIVE) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
      if(s[i]!='P' && s[i]!='A' )
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nURINE_SUGAR :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nKETONUREA(P(PASSIVE)/A(ACTIVE) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
     if(s[i]!='P' && s[i]!='A' )
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nKETONUREA :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nFASTING BLOOD SUGAR(H(HIGH)/L(LOW)/N(NOMAL) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
      if(s[i]!='H' && s[i]!='L' && s[i]!='N')
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nFASTING_BLOOD_SUGAR :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nR B S (H(HIGH)/L(LOW)/N(NORMAL) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
      if(s[i]!='H' && s[i]!='L' && s[i]!='N')
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nRBS :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nFAMILY HISTORY OF DIABETES(P(PASSIVE)/A(ACTIVE) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
     if(s[i]!='P' && s[i]!='A' )
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nFAMILY_HISTORY :"<<s[i];
     ++i;
     	while(1)
	{
	try
	{
     cout<<("\nOGTT(D/N) : ");
     cin>>s[i];
     s[i]=toupper(s[i]);
      if(s[i]!='D' && s[i]!='N')
	   throw s[i];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
     f13<<"\nOGTT :"<<s[i];
     ++i;
     f13.close();
    }
 
int diabetes::analyse_symptoms(int n)
 
    {
      int i=0;
      int count=0;
      int result=0;
      switch(n)
	{
	 case 1:    if(s[9]=='D' )
			result=-1;
		    else
		       if(s[5]=='P'&& s[6]=='P' && s[7]=='H')
			  result=-1;
		       else
			  {
			    for(i=0;i<10;i++)
			    {
			      if(s[i]=='H'||s[i]=='P'||s[i]=='D'||s[i]=='I')
				count++;
			     }
			     if(count>5)
				result=-1;
			  }
		       break;
 
	 case 2: if((s[0]=='P')||(s[1]=='P')||(s[2]=='P')||(s[3]=='H')||(s[4]=='P')||(s[5]=='P')||(s[6]=='P'))
		     result=-1;
		 else
		     result=0;
		     break;
	 case 3: if((s[0]=='Y')&&(s[1]=='N')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||
 
	 (s[0]=='Y')&&(s[1]=='B')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||
 
	 (s[0]=='Y')&&(s[1]=='N')&&(s[2]=='M')&&(s[3]=='P')&&(s[4]=='P')||
 
	 (s[0]=='Y')&&(s[1]=='N')&&(s[2]=='Y')&&(s[3]=='P')&&(s[4]=='P'))
		  result=0;
		else
		   result=-1;
		 break;
	 default:break;
	}
       return(result);
      }
 
char diabetes::display_message(int n,int m)
      {
        int flag2=0;
        doctor d1;
        ofstream f5("patdetails.txt",ios::app); 
		ofstream f13;
      f13.open(name.c_str(),ios::app);
       char ch;
       system("cls");
         system("Color 0B");
       switch(n)
	 {
	  case 1:
		  switch(m);
		      {
		       case 0:
			       cout<<("\n\nTHE PERSON IS NOT DIABETIC");
			        f5<<"NOT_DIABETIC\n"; 
			        f13<<"\nNOT_ DIABETIC\n"; 
			        //cout<<("\n\nPRESS ANY KEY TO QUIT." );
			        //exit(0);
			        break;
 
		       case -1:
			       cout<<("\n\nTHE PERSON IS DIABETIC ");
			       cout<<"\n\nPROCEED (Y/N)  ?";
			        if(ch=='n' || ch=='N')
			       {
				    f5<<"DIABETIC\n"; 
				    f13<<"\nIS_ DIABETIC\n"; 
				}
			       cin>>ch;
			       break;
		      }
		case 2:
			switch(m)
			{
			   case 0:
				   cout<<"\n\nIT IS PRIMARY DIABETES.";
				    f5<<"PRIMARY_DIABETIC\n"; 
				     f13<<"\nPRIMARY_ DIABETES\n"; 
				   flag2=1;
				   cout<<"\n\nProceed(Y/N)?";
				   cin>>ch;
				   break;
 
			   case -1: 
				   cout<<"\n\nIT IS SECONDARY DIABETES";
				    f5<<"SECONDARY_DIABETIC\n"; 
				    f13<<"\nSECONDARY_ DIABETES";
				   flag2=1;
				   break;
				   }
			break;
 
		case 3:switch(m)
		 {
			   case 0: 
				cout<<"\n\n IT IS INSULIN DEPENDENT DIABETES";
				 f5<<"INSULIN_DEPENDENT_DIABETIC\n"; 
				  f13<<"\nINSULIN_DEPENDENT_ DIABETIC\n"; 
				flag2=1;
				break;
 
 
			   case -1: 
			       cout<<"\n\nIT IS NON INSULIN DEPENDENT DIABETES";
			        f5<<"NON_INSULIN_DEPENDENT_DIABETIC\n";
					f13<<"\nNON_INSULIN_DEPENDENT_ DIABETIC\n";  
			     flag2=1;
			       break;
		 }
	       }
	       if(flag2==1)
	       {
	       d1.putdata();
	   }
	    f5.close();
	     f13.close();
	       return (ch);
	     }
void diabetes::getlevel2_symptoms()
	       {
		system("cls");
		 system("Color 4E");
		 ofstream f13;
      f13.open(name.c_str(),ios::app);
		int j=0;
		cout<<"\n\n\n";
			while(1)
         	{
        	try
        	{
		  cout<<"\nPANCREATITIS(P/A)  :";
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  if(s[j]!='P' && s[j]!='A' )
	   throw s[j];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
		  f13<<"\nPANCREATITIS :"<<s[j];
		  j++;
		  	while(1)
         	{
        	try
        	{
		  cout<<"\nCARCINOMA(P/A)  :";
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  if(s[j]!='P' && s[j]!='A' )
	   throw s[j];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
		  f13<<"\nCARCINOMA :"<<s[j];
		  ++j;
		  	while(1)
         	{
        	try
        	{
		  cout<<"\nCIRHHOSIS(P/A)     :";
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  if(s[j]!='P' && s[j]!='A' )
	   throw s[j];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
		  f13<<"\nCIRHHOSIS :"<<s[j];
		  ++j;
		  	while(1)
         	{
        	try
        	{
		  cout<<"\n HCTS  (H/L/N)     :";
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		   if(s[j]!='H' && s[j]!='L' && s[j]!='N')
	   throw s[j];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
		  f13<<"\nHCTS :"<<s[j];
		  ++j;
		  	while(1)
         	{
        	try
        	{
		  cout<<"\nHEPATITIS(P/A)    :";
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  if(s[j]!='P' && s[j]!='A' )
	   throw s[j];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
		  f13<<"\nHEPATITIS :"<<s[j];
		  ++j;
		  	while(1)
         	{
        	try
        	{
		  cout<<" \nHORMONAL DISORDER(P/A):";
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  if(s[j]!='P' && s[j]!='A' )
	   throw s[j];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
		  f13<<"\nHORMONAL_DISORDER :"<<s[j];
		  ++j;
		  	while(1)
         	{
        	try
        	{
		  cout<<"\n PANCREATECTOMY(P/A) :";
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  if(s[j]!='P' && s[j]!='A' )
	   throw s[j];
    else 
      break;
    }
    catch(...)
    {
    cout<<"\nEnter valid option..";
    }
   }
		  f13<<"\nPANCREATECTOMY :"<<s[j];
		  ++j;
		  f13.close();
		  return;
	      }
void fdinsert()
{
 system("Color 0B");
	string dname,password;
	ofstream f1("doc.txt",ios::app);
	cout<<"\nEnter your name:";
	cin>>dname;
	cout<<"\nEnter the password:";
	cin>>password;
	f1<<" "<<dname<<" "<<password<<"\n";
	cout<<"\nAccount Successfully Created..\n\nPlease remember your password...\n\n";
	f1.close();
}
void fdsearch()
{
    system("Color 0D");
	string dname1,password,dname,dia,password1,name1,sex1,name3,a13,a14;
	int flag=0,wt1,age1,ht1;
	cout<<"\n**************************************LOGIN************************************\n";
	cout<<"\n\n                    NAME:";
	cin>>dname1;               
	cout<<"\n\n                    PASSWORD:";
	cin>>password1;               
	ifstream f2("doc.txt",ios::in);
	while(f2>>dname>>password)
	{
		if(dname==dname1)
		{
		if(password==password1)
			{
			flag=1;
			cout<<"\n\n\n               Logged in successfully...";
			cout<<"\n\n Displaying patient's rreport : ";
		     system("cls");
		       system("Color 0B");
    cout<<"\nPatient DETAILS..\n\n\n";
	ifstream f3("patdetails.txt",ios::in);
	cout<<"\n********************************************************************\n";
	cout<<setw(5)<<"Name"<<setw(12)<<"  Age"<<setw(12)<<"  Weight"<<setw(12)<<"  Height"<<setw(6)<<"Sex"<<setw(15)<<"Diabetes";
	cout<<"\n********************************************************************\n";
	while(f3>>name1>>age1>>wt1>>ht1>>sex1>>dia)
	{
		cout<<setw(5)<<name1<<setw(10)<<age1<<setw(10)<<wt1<<setw(10)<<ht1<<setw(10)<<sex1<<"   "<<setw(16)<<dia<<"\n";
	}
	f3.close();
	}
}
}
	if(flag!=1)
		{
		cout<<"\nnot found..";
		return;
	}
		f2.close();
			cout<<"\n\nEnter the patients name whose record you want to view:";
	cin>>name3;
	 system("cls");
	  system("Color 0A");
	 cout<<"\n\n"<<name3 <<" details:\n";
		ifstream f13;
	f13.open(name3.c_str());
    while(!f13.eof())
    {
    f13>>a13>>a14;
    cout<<"\n"<<a13<<a14<<endl;
}
	f13.close();
	
}
void fpinsert()
{
system("Color 0B");
	string pname,ppassword;
	ofstream f1("pat.txt",ios::app);
	cout<<"\n\nEnter your name:";
	cin>>pname;
	cout<<"\n\nEnter the password:";
	cin>>ppassword;
	f1<<" "<<pname<<" "<<ppassword<<"\n";
	cout<<"\nAccount Successfully Created..\n\nPlease remember your password..\n\n.";
	system("cls");
	f1.close();
}
void fpsearch()
{
	string pname1,ppassword,pname,ppassword1;
	int flag=0;
	 system("cls");
	  system("Color 0D");
	cout<<"\n**************************************LOGIN******************************\n";
	cout<<"\n\n                    NAME:";
	cin>>pname1;               
	cout<<"\n\n                    PASSWORD:";
	cin>>ppassword1;               
	ifstream f2("pat.txt",ios::in);
	while(f2>>pname>>ppassword)
	{
		if(pname==pname1)
		{
		if(ppassword==ppassword1)
			{
			flag=2;
			cout<<"\n\n\n               Logged in successfully...";
			break;
		    }
       	}
	}
	if(flag!=2)
	 cout<<"\n Not found..";
	if(flag==2)
	{
	 system("cls");
	  system("Color 0A");
	cout<<"\n Lets check your diabetes status:"; 
	char ch,choice,cho;
	 float m;
	 int n=1;
	 void diagnosis(void);
	 diabetes dts;
	 dts.getvalue();
	 diagnosis();
	 dts.getlevel1_symptoms();
	 m=dts.analyse_symptoms(n);
	 choice=dts.display_message(m,n);
	 choice=toupper(choice);
	 if(choice=='Y')
	 {
	  ++n;
	  dts.getlevel2_symptoms();
	  m=dts.analyse_symptoms(n);
	  choice=dts.display_message(n,m);
	  choice=toupper(choice);
	  if(choice=='Y')
	  {
	   ++n;
	   m=dts.analyse_symptoms(n);
	   cho=dts.display_message(n,m);
	   cho=toupper(cho);
	   if(cho=='Y')
	   {
	    ++n;
	    m=dts.analyse_symptoms(n);
	    choice=dts.display_message(m,n);
	   }
	  }
	 }
return ;
    }
	if(flag==1)
		cout<<"\nnot found..";
}
int main()
{
 system("Color 0B");
	int ch1,ch;
	doctor d1;
	diabetes dia;
	 cout<<"\n\n                       ********* W E L C O M E ********* " ;
	   cout<<" \n\n         B M S    C O L L E G E    O F    E N G I N E E R I N G  "  ;
	   cout<<("\n\n     D I A B E T E S     D I A G N O S I S    S O F T W A R E  ");
	menu3:
	cout<<"\n\n Enter the user:\n\n1:DOCTOR\n\n2:PATIENT\n\n0.EXIT..\n\n\n";
	cin>>ch1;
	if(ch1==1)
	{   menu1:
	    system("cls");
	     system("Color 0B");
		cout<<"\n\n1.NEW USER/SIGN UP\n\n2.LOGIN\n\n0.MAIN MENU\n";
	do
	{
	cout<<"\n\nEnter your choice (0 to go to main menu):";
	cin>>ch;
	system("cls");
	 system("Color 0B");
	switch(ch)
	{
		case 1:fdinsert();
		d1.getdata();
		goto menu1;
		break;
		case 2:fdsearch();
		break;
		default:cout<<"\ndefault..";
		break;
		case 0:goto menu3;
	}
    }while(ch<3);
}
if(ch1==2)
{
    menu2:
	cout<<"\n\n1.NEW USER/SIGN UP\n\n2.LOGIN\n\n0.MAIN MENU";
do
	{
	cout<<"\n\nEnter your choice (0 to go to main menu): ";
	cin>>ch;
	system("cls");
	 system("Color 0B");
	switch(ch)
	{
		case 1:fpinsert();
			goto menu2;
		break;
		case 2:fpsearch();
			goto menu2;
		break;
		default:cout<<"\ndefault..";
		break;
		case 0:goto menu3;
	}
    }while(ch<3);
}
if(ch==0)
 exit(0);
return 0;	
}
