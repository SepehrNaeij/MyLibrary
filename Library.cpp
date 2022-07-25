#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<sstream>
#include<cstdlib>
#include<math.h>
#include<conio.h>
#include<windows.h>

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);  // for setting the colors of the thems.
HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);  // for setting the colors of the thems.

using namespace std;

//*******************<The name of functions>*******************

void welcome();
void bye();
void print();
void member();
void manager();
void closeTheApp();
void addManager();
void showManager();
void addBook();
void showBook();
void showBookForMember();
void changeBookInformation();
void removeBook();
void dateOfRegistration();
void delayForfeit();
void dateOfRegistrationForMember();
void delayForfeitForMember();
void signIn();
void signUp();
void showMember();
void payForfeit();

//*******************<The duty of functions>*******************

void welcome(){
	system("cls");
	system("color 03");
	cout<<"                       ***********************************************************************              ";
	cout<<"                                   *              <<<    Welcome to my Library    >>>                    *"<<endl;
	cout<<"                       ***********************************************************************              "<<endl;
	cout<<"========================================================================================================================";
}
void bye(){
	welcome();
	SetConsoleTextAttribute(h,04);
	cout<<endl;
	cout<<"\n"<<"Thanks for using us,"<<"Have a nice day."<<"\n";
	SetConsoleTextAttribute(h,07);
}
void print() {
	int a;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Main->>"<<endl<<endl;
	cout<<"1. Manager"<<endl;
	cout<<"2. Member"<<endl;
	cout<<"3. Close The App"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);
	cin>>a; 
	SetConsoleTextAttribute(h,02);
	system("cls");
	if ( a!=1 && a!=2 && a!=3 ) {
	do{
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<endl<<endl<<"<<-Main->>"<<endl<<endl;
		cout<<"1. Manager"<<endl;
		cout<<"2. Member"<<endl;
		cout<<"3. Close The App"<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 3) : ";
		SetConsoleTextAttribute(h,07);
		cin>>a;
		if ( a==1 || a==2 || a==3)
		break;
		cout<<"\n";
		system("cls");
	}while( a!=1 || a!=2 || a!=3 );
	system("cls");
	welcome();
	}
	if ( a==1 ){
		manager();
	}
	if ( a==2 ){
		member();
	}
	if ( a==3 ){
		closeTheApp();
	}
}
void member(){
	int a,b;
	welcome();
	SetConsoleTextAttribute(h,07);
	int n,m;
	cout<<endl<<endl<<"<<-Member->>"<<endl<<endl;
	cout<<"1. Sign up"<<endl;
	cout<<"2. Sign in"<<endl;
	cout<<"3. Exit"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);
	cin>>a; 
	SetConsoleTextAttribute(h,02);
	system("cls");
	if ( a!=1 && a!=2 && a!=3 ) {
	do{
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<endl<<endl<<"<<-Member->>"<<endl<<endl;
		cout<<"1. Sign up"<<endl;
		cout<<"2. Sign in"<<endl;
		cout<<"3. Exit"<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 3) : ";
		SetConsoleTextAttribute(h,07);
		cin>>a;
		if ( a==1 || a==2 || a==3)
		break;
		cout<<"\n";
		system("cls");
	}while( a!=1 || a!=2 || a!=3 );
	system("cls");
	welcome();
	}
	if ( a==1 ){
		signUp();
	}
	if ( a==2 ){
		signIn();
	}
	if ( a==3 ){
		print();
	}
}
void manager(){		
	welcome();
	SetConsoleTextAttribute(h,07);
	string s,n;  //   [s : username]    &&&&&&&&&&&     [n : password]
	ifstream file("managers.txt");
	string x[100];
	file>>x[0];file>>x[1];file>>x[2];file>>x[3];file>>x[4];file>>x[5];file>>x[6];file>>x[7];file>>x[8];file>>x[9];file>>x[10];file>>x[11];file>>x[12];file>>x[13];file>>x[14];file>>x[15];file>>x[16];
	file>>x[17];file>>x[18];file>>x[19];
	cout<<endl<<endl<<"<<-Manager->>"<<endl<<endl;
	cout<<"Username: ";
	cin>>s;
	cout<<"Password: ";
	cin>>n;
	
	if ( (s=="MainManager" && n=="1234") || (s==x[0] && n==x[1]) || (s==x[2] && n==x[3]) || (s==x[4] && n==x[5]) || (s==x[6] && n==x[7]) || (s==x[8] && n==x[9])
	 || (s==x[10] && n==x[11]) || (s==x[12] && n==x[13]) || (s==x[14] && n==x[15]) || (s==x[16] && n==x[17]) || (s==x[18] && n==x[19]) ){
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<"mr/ms ";
		SetConsoleTextAttribute(h,06);
		cout<<s;
		SetConsoleTextAttribute(h,07);
		cout<<" welcome to your account.";
		int m;
		cout<<endl<<endl<<"<<-Manager->>"<<endl<<endl;
		cout<<"1. Add manager"<<endl;
		cout<<"2. Add book"<<endl;
		cout<<"3. Show manager"<<endl;
		cout<<"4. Show book"<<endl;
		cout<<"5. Change book's information"<<endl;
		cout<<"6. Remove book"<<endl;
		cout<<"7. Exit"<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<endl<<"Please enter a number : ";
		SetConsoleTextAttribute(h,07);
		cin>>m; 
		SetConsoleTextAttribute(h,02);
		welcome();
		SetConsoleTextAttribute(h,07);
		
	if ( m!=1 && m!=2 && m!=3 && m!=4 && m!=5 && m!=6 && m!=7 ) {
	do{
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<"mr/ms ";
		SetConsoleTextAttribute(h,06);
		cout<<s;
		SetConsoleTextAttribute(h,07);
		cout<<" welcome to your account.";
		cout<<endl<<endl<<"<<-Manager->>"<<endl<<endl;
		cout<<"1. Add manager"<<endl;
		cout<<"2. Add book"<<endl;
		cout<<"3. Show manager"<<endl;
		cout<<"4. Show book"<<endl;
		cout<<"5. Change book's information"<<endl;
		cout<<"6. Remove book"<<endl;
		cout<<"7. Exit"<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 7) : ";
		SetConsoleTextAttribute(h,07);
		cin>>m;
		if ( m==1 || m==2 || m==3 || m==4 || m==5 || m==6 || m==7 )
		break;
		cout<<"\n";
		system("cls");
	}while( m!=1 || m!=2 || m!=3 || m!=4 || m!=5 || m!=6 || m!=7 );
	system("cls");
	welcome();
	}
	
	if ( m==1 ){
		addManager();
	}
	if ( m==2 ){
		addBook();
	}
	if ( m==3 ){
		showManager();
	}
	if ( m==4 ){
		showBook();
	}		
	if ( m==5 ){
		changeBookInformation();
	}
	if ( m==6 ){
		removeBook();
	}
	if ( m==7 ){
		print();
	}	
		
	
		
	}else if ( (s=="MainManager" && n!="1234") || (s==x[0] && n!=x[1]) || (s==x[2] && n!=x[3]) || (s==x[4] && n!=x[5]) || (s==x[6] && n!=x[7]) || (s==x[8] && n!=x[9])
	 || (s==x[10] && n!=x[11]) || (s==x[12] && n!=x[13]) || (s==x[14] && n!=x[15]) || (s==x[16] && n!=x[17]) || (s==x[18] && n!=x[19]) ){
		int a;
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<endl<<endl<<"<<-Manager->>"<<endl<<endl;
		SetConsoleTextAttribute(h,04);
		cout<<"The password of this username is incorrect! "<<endl<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<"Enter a number to exit: ";
		cin>>a;
		print();
	}else{
		int b;
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<endl<<endl<<"<<-Manager->>"<<endl<<endl;
		SetConsoleTextAttribute(h,04);
		cout<<"There isn't any manager with this username! "<<endl<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<"Enter a number to exit: ";
		cin>>b;
		print();
	}
}
void closeTheApp(){
	int a,b;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Close the App->>"<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Are you sure to close the app...?!?"<<"\n"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(h,07);	
	cin>>a; 
	system("cls");
	if ( a!=1 && a!=2 ) {
	do{
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Close the App->>"<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Are you sure to close the app...?!?"<<"\n"<<"\n";
	SetConsoleTextAttribute(h,07);
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 2) : ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	if ( a==1 || a==2 )
	break;
	cout<<"\n";
	system("cls");
	}while( a!=1 || a!=2);
	system("cls");
	welcome();
	}
	if ( a==1 ){
	bye();
	}
	if ( a==2 ){
	print();
	}
}
void addManager(){
	welcome();
	SetConsoleTextAttribute(h,07);
	int a;
	string Result,result[1000];
	string s,n;   //   [s : username]    &&&&&&&&&&&     [n : password]
	cout<<endl<<endl<<"<<-Add Manager->>"<<endl<<endl;
	cout<<"Username: ";
	cin>>s;
	cout<<"Password: ";
	cin>>n;
	string list = s + " " + n + " ";
	ifstream file("managers.txt"); // here a file with name 'managers.txt' is made.
	
	file>>result[0];file>>result[1];file>>result[2];file>>result[3];file>>result[4];file>>result[5];file>>result[6];    //It's for transmit the information about new manager to our file with name managers.txt
	file>>result[7];file>>result[8];file>>result[9];file>>result[10];file>>result[11];file>>result[12];file>>result[13];//It's for transmit the information about new manager to our file with name managers.txt
	file>>result[14];file>>result[15];file>>result[16];file>>result[17];file>>result[18];file>>result[19];			    //It's for transmit the information about new manager to our file with name managers.txt
			
	Result = list + result[0] + " " + result[1] + " " + result[2] + " " + result[3] + " " + result[4] + " " + result[5] + " " + result[6] + " " + result[7] + " " + result[8] + " " + result[9]
	+ " " + result[10] + " " + result[11] + " " + result[12] + " " + result[13] + " " + result[14] + " " + result[15] + " " + result[16] + " " + result[17] + " " + result[18] + " " + result[19];
	 
	ofstream myfile("managers.txt");
	myfile<<Result;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"The manager with this username: ";
	SetConsoleTextAttribute(h,06);
	cout<<s;
	SetConsoleTextAttribute(h,07);
	cout<<" is successfully added to the managerList."<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number to exit: ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	print();	
}
void showManager(){
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Show Manager->>"<<endl<<endl;	
	int a;
	ifstream file("managers.txt");
	string s[100];
	file>>s[0];file>>s[1];file>>s[2];file>>s[3];file>>s[4];file>>s[5];file>>s[6];file>>s[7];file>>s[8];file>>s[9];file>>s[10];  //It's for transmiting the information from file(managers.txt) to the app
	file>>s[11];file>>s[12];file>>s[13];file>>s[14];file>>s[15];file>>s[16];file>>s[17];file>>s[18];file>>s[19];                //It's for transmiting the information from file(managers.txt) to the app
	cout<<"\n"<<"  username"<<" |   "<<"password"<<endl;
	cout<<" __________|___________";	
	int i=0;
	do{
		cout<<endl<<"  "<<s[i]<<"        "<<s[i+1];
		i+=2;
	}while(i<19);
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Enter a number to exit: ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	manager();
}
void addBook(){
	welcome();
	SetConsoleTextAttribute(h,07);
	int a,h;
	string Result,result[1000];
	string o,n,r,m,s,p;   //   [o : the ID of the book]   &&&&&    [n : the name of the book]   &&&&&    [r : the authors of the book]   &&&&&   [m : Username of the last member which rent the book]
	//	  &&&&&  [x : Amount of penalty per day(after the finishing of time-limt-rent)]
	//  &&&&&  [s : Date of the last rent]  &&&&&  [p : Date of the return]
	cout<<endl<<endl<<"<<-Add Book->>"<<endl<<endl;
	cout<<"ID: ";
	cin>>o;
	cout<<"Name: ";
	cin>>n;
	cout<<"Authors: ";
	cin>>r;
	cout<<"Username of the last member which rent the book: ";
	cin>>m;
	cout<<"Amount of forfeit per day(after the finishing of time-limt-rent): ";		
	cin>>h;
		stringstream ss; //
		ss<<h;           // for converting an int into string.
		string x;        // 
		ss>>x;	         //
	cout<<"Date of the last rent: ";
	cin>>s;
	cout<<"Date of the return: ";
	cin>>p;
	string list = o + " " + n + " " + r + " " + m + " " + x + " " + s + " " + p + " ";
	ifstream file("books.txt"); // here a file with name 'books.txt' is made.
		
	file>>result[0];file>>result[1];file>>result[2];file>>result[3];file>>result[4];file>>result[5];file>>result[6];       //It's for transmit the information about new book to our file with name books.txt
	file>>result[7];file>>result[8];file>>result[9];file>>result[10];file>>result[11];file>>result[12];file>>result[13];   //It's for transmit the information about new book to our file with name books.txt
	file>>result[14];file>>result[15];file>>result[16];file>>result[17];file>>result[18];file>>result[19];file>>result[20];//It's for transmit the information about new book to our file with name books.txt
	file>>result[21];file>>result[22];file>>result[23];file>>result[24];file>>result[25];file>>result[26];file>>result[27]; //It's for transit the information about new book to our file with name books.txt
	file>>result[28];file>>result[29];file>>result[30];file>>result[31];file>>result[32];file>>result[33];file>>result[34];//It's for transmit the information about new book to our file with name books.txt
	file>>result[35];file>>result[36];file>>result[37];file>>result[38];file>>result[39];file>>result[40];file>>result[41];//It's for transmit the information about new book to our file with name books.txt	
	file>>result[42];file>>result[43];file>>result[44];file>>result[45];file>>result[46];file>>result[47];file>>result[48];//It's for transmit the information about new book to our file with name books.txt
				
	Result = list + result[0] + " " + result[1] + " " + result[2] + " " + result[3] + " " + result[4] + " " + result[5] + " " + result[6] + " " + result[7] + " " + result[8] + " " + result[9]
	+ " " + result[10] + " " + result[11] + " " + result[12] + " " + result[13] + " " + result[14] + " " + result[15] + " " + result[16] + " " + result[17] + " " + result[18] + " " + result[19]
	+ result[20] + " " + result[21] + " " + result[22] + " " + result[23] + " " + result[24] + " " + result[25] + " " + result[26] + " " + result[27] + " " + result[28] + " " + result[29]
	+ " " + result[30] + " " + result[31] + " " + result[32] + " " + result[33] + " " + result[34] + " " + result[35] + " " + result[36] + " " + result[37] + " " + result[38] + " " + result[39]
	+ " " + result[40] + " " + result[41] + " " + result[42] + " " + result[43] + " " + result[44] + " " + result[45] + " " + result[46] + " " + result[47] + " " + result[48];	
	 
	ofstream myfile("books.txt");
	myfile<<Result;
	
	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"The book with this title: ";
	SetConsoleTextAttribute(H,06);
	cout<<n;
	SetConsoleTextAttribute(H,07);
	cout<<" is successfully added to the bookList."<<endl<<endl;
	SetConsoleTextAttribute(H,02);
	cout<<endl<<"Please enter a number to exit: ";
	SetConsoleTextAttribute(H,07);
	cin>>a;
	print();	
}
void showBook(){
	int a,b;
	welcome();
	SetConsoleTextAttribute(H,07);
	int n,m;
	cout<<endl<<endl<<"<<-Show Book->>"<<endl<<endl;
	cout<<"1. Date of registration"<<endl;
	cout<<"2. Delay forfeit"<<endl;
	cout<<"3. Exit"<<endl;
	SetConsoleTextAttribute(H,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(H,07);
	cin>>a; 
	SetConsoleTextAttribute(H,02);
	system("cls");
	if ( a!=1 && a!=2 && a!=3 ) {
	do{
		welcome();
		SetConsoleTextAttribute(H,07);
		cout<<endl<<endl<<"<<-Show Book->>"<<endl<<endl;
		cout<<"1. Date of registration"<<endl;
		cout<<"2. Delay forfeit"<<endl;
		cout<<"3. Exit"<<endl;
		SetConsoleTextAttribute(H,02);
		cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 3) : ";
		SetConsoleTextAttribute(H,07);
		cin>>a;
		if ( a==1 || a==2 || a==3)
		break;
		cout<<"\n";
		system("cls");
	}while( a!=1 || a!=2 || a!=3 );
	system("cls");
	welcome();
	}
	if ( a==1 ){
		dateOfRegistration();
	}
	if ( a==2 ){
		delayForfeit();
	}
	if ( a==3 ){
		manager();
	}	
}
void showBookForMember(){
	int a,b;
	welcome();
	SetConsoleTextAttribute(H,07);
	int n,m;
	cout<<endl<<endl<<"<<-Show Book->>"<<endl<<endl;
	cout<<"1. Date of registration"<<endl;
	cout<<"2. Delay forfeit"<<endl;
	cout<<"3. Exit"<<endl;
	SetConsoleTextAttribute(H,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(H,07);
	cin>>a; 
	SetConsoleTextAttribute(H,02);
	system("cls");
	if ( a!=1 && a!=2 && a!=3 ) {
	do{
		welcome();
		SetConsoleTextAttribute(H,07);
		cout<<endl<<endl<<"<<-Show Book->>"<<endl<<endl;
		cout<<"1. Date of registration"<<endl;
		cout<<"2. Delay forfeit"<<endl;
		cout<<"3. Exit"<<endl;
		SetConsoleTextAttribute(H,02);
		cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 3) : ";
		SetConsoleTextAttribute(H,07);
		cin>>a;
		if ( a==1 || a==2 || a==3)
		break;
		cout<<"\n";
		system("cls");
	}while( a!=1 || a!=2 || a!=3 );
	system("cls");
	welcome();
	}
	if ( a==1 ){
		dateOfRegistrationForMember();
	}
	if ( a==2 ){
		delayForfeitForMember();
	}
	if ( a==3 ){
		member();
	}	
}
void changeBookInformation(){
	int a,b,k,h;
	welcome();
	SetConsoleTextAttribute(H,07);
	string s[100],n,x1,x2,x3,x4,x6,x7,Result;
	cout<<endl<<endl<<"<<-Change Book's Infotmation->>"<<endl<<endl;
	SetConsoleTextAttribute(H,02);
	cout<<"Enter the bookname: ";
	SetConsoleTextAttribute(H,07);
	cin>>n;

	ifstream file("books.txt");
	
	file>>s[0];file>>s[1];file>>s[2];file>>s[3];file>>s[4];file>>s[5];file>>s[6];file>>s[7];file>>s[8];file>>s[9];file>>s[10]; //It's for transmiting the information from file(books.txt) to the app
	file>>s[11];file>>s[12];file>>s[13];file>>s[14];file>>s[15];file>>s[16];file>>s[17];file>>s[18];file>>s[19];file>>s[20];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[21];file>>s[22];file>>s[23];file>>s[24];file>>s[25];file>>s[26];file>>s[27];file>>s[28];file>>s[29];file>>s[30];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[31];file>>s[32];file>>s[33];file>>s[34];file>>s[35];file>>s[36];file>>s[37];file>>s[38];file>>s[39];file>>s[40];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[41];file>>s[42];file>>s[43];file>>s[44];file>>s[45];file>>s[46];file>>s[47];									   //It's for transmiting the information from file(books.txt) to the app
	
	if ( n==s[1] ){
		k=0;
	}else if ( n==s[8] ){
		k=7;
	}else if ( n==s[15] ){
		k=14;
	}else if ( n==s[22] ){
		k=21;
	}else if ( n==s[29] ){
		k=28;
	}else if ( n==s[36] ){
		k=35;
	}else if ( n==s[43] ){
		k=42;
	}
	
	welcome();
	SetConsoleTextAttribute(H,07);	
	cout<<"\n"<<"  id  | name  |  authors | username |   forfeit  | date of last rent  |  date of return"<<endl;
	cout<<"______|_______|__________|__________|____________|____________________|__________________";	
	cout<<endl<<" "<<s[k]<<"   "<<s[k+1]<<"     "<<s[k+2]<<"       "<<s[k+3]<<"         "<<s[k+4]<<"        "<<s[k+5]<<"           "<<s[k+6]<<endl<<endl;

	cout<<"ID: ";
	cin>>x1;
	s[k]=x1;
	cout<<"Name: ";
	cin>>x2;
	s[k+1]=x2;
	cout<<"Authors: ";
	cin>>x3;
	s[k+2]=x3;
	cout<<"Username of the last member which rent the book: ";
	cin>>x4;
	s[k+3]=x4;
	cout<<"Amount of forfeit per day(after the finishing of time-limt-rent): ";		
	cin>>h;
		stringstream ss; //
		ss<<h;           // for converting an int into string.
		string x5;        // 
		ss>>x5;
		s[k+4]=x5;	         //
	cout<<"Date of the last rent: ";
	cin>>x6;
	s[k+5]=x6;
	cout<<"Date of the return: ";
	cin>>x7;
	s[k+6]=x7;
	
	Result = s[0] + " " + s[1] + " " + s[2] + " " + s[3] + " " + s[4] + " " + s[5] + " " + s[6] + " " + s[7] + " " + s[8] + " " + s[9]
	+ " " + s[10] + " " + s[11] + " " + s[12] + " " + s[13] + " " + s[14] + " " + s[15] + " " + s[16] + " " + s[17] + " " + s[18] + " " + s[19]
	+ s[20] + " " + s[21] + " " + s[22] + " " + s[23] + " " + s[24] + " " + s[25] + " " + s[26] + " " + s[27] + " " + s[28] + " " + s[29]
	+ " " + s[30] + " " + s[31] + " " + s[32] + " " + s[33] + " " + s[34] + " " + s[35] + " " + s[36] + " " + s[37] + " " + s[38] + " " + s[39]
	+ " " + s[40] + " " + s[41] + " " + s[42] + " " + s[43] + " " + s[44] + " " + s[45] + " " + s[46] + " " + s[47] + " " + s[48];	 
	ofstream myfile("books.txt");
	myfile<<Result;
		
	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"<<-Change Book's Infotmation->>"<<endl<<endl;
	SetConsoleTextAttribute(H,06);	
	cout<<"Your books information is succesfully changed."<<endl<<endl;
	SetConsoleTextAttribute(H,02);	
	cout<<"Enter a number to exit: ";
	SetConsoleTextAttribute(H,07);	
	cin>>b;
	manager();				
}
void removeBook(){
	int a,b,k;
	welcome();
	SetConsoleTextAttribute(H,07);
	string s[100],n,Result;
	cout<<endl<<endl<<"<<-Remove Book->>"<<endl<<endl;
	SetConsoleTextAttribute(H,02);
	cout<<"Enter the bookname: ";
	SetConsoleTextAttribute(H,07);
	cin>>n;

	ifstream file("books.txt");
	
	file>>s[0];file>>s[1];file>>s[2];file>>s[3];file>>s[4];file>>s[5];file>>s[6];file>>s[7];file>>s[8];file>>s[9];file>>s[10]; //It's for transmiting the information from file(books.txt) to the app
	file>>s[11];file>>s[12];file>>s[13];file>>s[14];file>>s[15];file>>s[16];file>>s[17];file>>s[18];file>>s[19];file>>s[20];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[21];file>>s[22];file>>s[23];file>>s[24];file>>s[25];file>>s[26];file>>s[27];file>>s[28];file>>s[29];file>>s[30];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[31];file>>s[32];file>>s[33];file>>s[34];file>>s[35];file>>s[36];file>>s[37];file>>s[38];file>>s[39];file>>s[40];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[41];file>>s[42];file>>s[43];file>>s[44];file>>s[45];file>>s[46];file>>s[47];									   //It's for transmiting the information from file(books.txt) to the app
	
	if ( n==s[1] ){
		k=0;
	}else if ( n==s[8] ){
		k=7;
	}else if ( n==s[15] ){
		k=14;
	}else if ( n==s[22] ){
		k=21;
	}else if ( n==s[29] ){
		k=28;
	}else if ( n==s[36] ){
		k=35;
	}else if ( n==s[43] ){
		k=42;
	}
	
	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"<<-Remove Book->>"<<endl<<endl;
	SetConsoleTextAttribute(H,02);		
	cout<<"Are you sure to remove this book with name'";
	SetConsoleTextAttribute(H,06);
	cout<<n;
	SetConsoleTextAttribute(H,02);
	cout<<"' from your booklist...?!?"<<endl<<endl;
	SetConsoleTextAttribute(H,07);	
	cout<<"1. Yes"<<endl;
	cout<<"2. No"<<endl;
	SetConsoleTextAttribute(H,02);
	cout<<endl<<"Please enter a number : ";
	SetConsoleTextAttribute(H,07);	
	cin>>a;	
	
	if ( a==1 ){

	for(int i=0;i<48;i++)
	{
		if ( i!=k && i!=k+1 && i!=k+2 && i!=k+3 && i!=k+4 && i!=k+5 && i!=k+6 )
		Result += s[i] + " ";
	}	 
	
	ofstream myfile("books.txt");
	myfile<<Result;

	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"<<-Remove Book->>"<<endl<<endl;
	SetConsoleTextAttribute(H,06);
	cout<<"This book is succesfully removed from your library."<<endl<<endl;
	SetConsoleTextAttribute(H,02);	
	cout<<"Please enter a number to exit: ";
	SetConsoleTextAttribute(H,07);
	cin>>b;
	manager();
						
	}else if ( a==2 ){
		manager();
	}							
}
void dateOfRegistration(){
	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"<<-Show Book->>"<<endl;
	SetConsoleTextAttribute(H,05);
	cout<<"This is schedule is sorted by the date of the book's registration."<<endl<<endl;	
	SetConsoleTextAttribute(H,07);
	int a;
	ifstream file("books.txt");
	string s[100];
	
	file>>s[0];file>>s[1];file>>s[2];file>>s[3];file>>s[4];file>>s[5];file>>s[6];file>>s[7];file>>s[8];file>>s[9];file>>s[10]; //It's for transmiting the information from file(books.txt) to the app
	file>>s[11];file>>s[12];file>>s[13];file>>s[14];file>>s[15];file>>s[16];file>>s[17];file>>s[18];file>>s[19];file>>s[20];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[21];file>>s[22];file>>s[23];file>>s[24];file>>s[25];file>>s[26];file>>s[27];file>>s[28];file>>s[29];file>>s[30];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[31];file>>s[32];file>>s[33];file>>s[34];file>>s[35];file>>s[36];file>>s[37];file>>s[38];file>>s[39];file>>s[40];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[41];file>>s[42];file>>s[43];file>>s[44];file>>s[45];file>>s[46];file>>s[47];									   //It's for transmiting the information from file(books.txt) to the app
	
	cout<<"\n"<<"  id  | name  |  authors | username |   forfeit  | date of last rent  |  date of return"<<endl;
	cout<<"______|_______|__________|__________|____________|____________________|__________________";
	int i=0;
	do{
		cout<<endl<<" "<<s[i]<<"   "<<s[i+1]<<"     "<<s[i+2]<<"       "<<s[i+3]<<"         "<<s[i+4]<<"        "<<s[i+5]<<"           "<<s[i+6];
		i+=7;
	}while(i<39);
	SetConsoleTextAttribute(H,05);
	cout<<endl<<"Description about this schedule:"<<endl<< "[*username*: Username of the last member which rent the book]"<<endl<<"[*forfeit*: Amount of forfeit per day(after the finishing of time-limt-rent)]"; 
	SetConsoleTextAttribute(H,02);
	cout<<endl<<endl<<"Enter a number to exit: ";
	SetConsoleTextAttribute(H,07);
	cin>>a;
	showBook();	
}
void delayForfeit(){
	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"<<-Show Book->>"<<endl;
	SetConsoleTextAttribute(H,05);
	cout<<"This is schedule is sorted by the forfeit of the delay to return the book."<<endl<<endl;	
	SetConsoleTextAttribute(H,07);
	int a,S[100];
	ifstream file("books.txt");
	string s[100];
	
	file>>s[0];file>>s[1];file>>s[2];file>>s[3];file>>S[0];file>>s[5];file>>s[6];file>>s[7];file>>s[8];file>>s[9];file>>s[10]; //It's for transmiting the information from file(books.txt) to the app
	file>>S[1];file>>s[12];file>>s[13];file>>s[14];file>>s[15];file>>s[16];file>>s[17];file>>S[2];file>>s[19];file>>s[20];     //It's for transmiting the information from file(books.txt) to the app
	file>>s[21];file>>s[22];file>>s[23];file>>s[24];file>>S[3];file>>s[26];file>>s[27];file>>s[28];file>>s[29];file>>s[30];    //It's for transmiting the information from file(books.txt) to the app
	file>>s[31];file>>S[4];file>>s[33];file>>s[34];file>>s[35];file>>s[36];file>>s[37];file>>s[38];file>>S[5];file>>s[40];     //It's for transmiting the information from file(books.txt) to the app
	file>>s[41];file>>s[42];file>>s[43];file>>s[44];file>>s[45];file>>S[6];file>>s[47];							               //It's for transmiting the information from file(books.txt) to the app
	
	
	cout<<"\n"<<"  id  | name  |  authors | username |   forfeit  | date of last rent  |  date of return"<<endl;
	cout<<"______|_______|__________|__________|____________|____________________|__________________";
	
	if( S[0]>=S[1] && S[0]>=S[2] ){
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		if(S[1]>=S[2] ){
		cout<<endl<<" "<<s[7]<<"   "<<s[8]<<"     "<<s[9]<<"       "<<s[10]<<"         "<<S[1]<<"        "<<s[12]<<"           "<<s[13];
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
		}else{
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
			cout<<endl<<"  "<<s[5]<<"       "<<s[6]<<"         "<<S[1]<<"          "<<s[8]<<"          "<<s[9];
		}
	}else if( S[1]>=S[0] && S[1]>=S[2] ) {
		cout<<endl<<" "<<s[7]<<"   "<<s[8]<<"     "<<s[9]<<"       "<<s[10]<<"         "<<S[1]<<"        "<<s[12]<<"           "<<s[13];
		if(S[0]>=S[2] ){
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
		}else{
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		}		
	}else{
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
		if(S[1]>=S[0] ){
		cout<<endl<<" "<<s[7]<<"   "<<s[8]<<"     "<<s[9]<<"       "<<s[10]<<"         "<<S[1]<<"        "<<s[12]<<"           "<<s[13];
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		}else{
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		cout<<endl<<" "<<s[7]<<"   "<<s[8]<<"     "<<s[9]<<"       "<<s[10]<<"         "<<S[1]<<"        "<<s[12]<<"           "<<s[13];
		}		
	}
	
	SetConsoleTextAttribute(H,05);
	cout<<endl<<endl;
	cout<<"Description about this schedule:"<<endl<< "[*username*: Username of the last member which rent the book]"<<"\n"<<"[*forfeit*: Amount of forfeit per day(after the finishing of time-limt-rent)]"; 
	SetConsoleTextAttribute(H,02);
	cout<<endl<<endl<<"Enter a number to exit: ";
	SetConsoleTextAttribute(H,07);
	cin>>a;
	showBook();			
		
}
void signUp(){
	welcome();
	SetConsoleTextAttribute(H,07);
	int a;
	string Result,result[1000];
	string a1,a2,a3,a4,a5,a6;   //  [a1 : id]  &&&  [a2 : password]  &&&  [a3 : name]  &&&  [a4 : phone number]  &&&  [a5 : date of sign in]  &&&  [a6 : date of finishing sign in]
	string a8,a10,a11;       //   [a7 : rent limit]  &&&  [a8 : time limit of rent ]  &&&  [a9 : number of rent]  &&&  [a10 : booklist which have]  &&&  [a11 : all delay ]
	int a7,a9;
	cout<<endl<<endl<<"<<-Sign Up->>"<<endl<<endl;
	cout<<"ID: ";
	cin>>a1;
	cout<<"Password: ";
	cin>>a2;
	cout<<"Name: ";
	cin>>a3;
	cout<<"Phone number: ";
	cin>>a4;
	cout<<"Date of MemberShip: ";
	cin>>a5;
	cout<<"Date of finishing MemberShip: ";
	cin>>a6;
	cout<<"Rent limit: ";
	cin>>a7;
	cout<<"Time limit of rent: ";
	cin>>a8;
	cout<<"Number of rent: ";
	cin>>a9;
	cout<<"Booklist which have: ";
	cin>>a10;
	cout<<"All delay: ";
	cin>>a11;	
	stringstream ss1,ss2; //
	ss1<<a7;			  //
	ss2<<a9;              // for converting an int into string.
	string x7,x9;         // 
	ss1>>x7;			  // 
	ss2>>x9;			  // 
	string list = a1 + " " + a2 + " " + a3 + " " + a4 + " " + a5 + " " + a6 + " " + x7 + " " + a8 + " " + x9 + " " + a10 + " " + a11 + " ";
	
	ifstream file("members.txt"); // here a file with name 'members.txt' is made.
	
	file>>result[0];file>>result[1];file>>result[2];file>>result[3];file>>result[4];file>>result[5];file>>result[6];       //It's for transmit the information about new member to our file with name members.txt
	file>>result[7];file>>result[8];file>>result[9];file>>result[10];file>>result[11];file>>result[12];file>>result[13];   //It's for transmit the information about new member to our file with name members.txt
	file>>result[14];file>>result[15];file>>result[16];file>>result[17];file>>result[18];file>>result[19];file>>result[20];//It's for transmit the information about new member to our file with name members.txt
	file>>result[21];file>>result[22];file>>result[23];file>>result[24];file>>result[25];file>>result[26];file>>result[27];//It's for transmit the information about new member to our file with name members.txt
	file>>result[28];file>>result[29];file>>result[30];file>>result[31];file>>result[32];file>>result[33];file>>result[34];//It's for transmit the information about new member to our file with name members.txt	
	file>>result[35];file>>result[36];file>>result[37];file>>result[38];file>>result[39];file>>result[40];file>>result[41];//It's for transmit the information about new member to our file with name members.txt
	file>>result[42];file>>result[43];
			
	Result = list + result[0] + " " + result[1] + " " + result[2] + " " + result[3] + " " + result[4] + " " + result[5] + " " + result[6] + " " + result[7] + " " + result[8] + " " + result[9]
	+ " " + result[10] + " " + result[11] + " " + result[12] + " " + result[13] + " " + result[14] + " " + result[15] + " " + result[16] + " " + result[17] + " " + result[18] + " " + result[19]
	+ " " + result[20] + " " + result[21] + " " + result[22] + " " + result[23] + " " + result[24] + " " + result[25] + " " + result[26] + " " + result[27] + " " + result[28] + " " + result[29]
	+ " " + result[30] + " " + result[31] + " " + result[32] + " " + result[33] + " " + result[34] + " " + result[35] + " " + result[36] + " " + result[37] + " " + result[38] + " " + result[39]
	+ " " + result[40] + " " + result[41] + " " + result[42] + " " + result[43];	
	 
	ofstream myfile("members.txt");
	myfile<<Result;
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"The member with this name: ";
	SetConsoleTextAttribute(h,06);
	cout<<a3;
	SetConsoleTextAttribute(h,07);
	cout<<" is successfully added to the memberList."<<endl<<endl;
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Please enter a number to exit: ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	print();	
}
void signIn(){
	welcome();
	SetConsoleTextAttribute(h,07);
	int k;
	string s,n;  //   [s : id]    &&&&&&&&&&&     [n : password]
	ifstream myfile("members.txt");
	string x[100];

	myfile>> x[0];myfile>> x[1];myfile>>x[2]; myfile>>x[3]; myfile>>x[4]; myfile>>x[5]; myfile>>x[6]; //It's for transmit the information about new member to our file with name members.txt
	myfile>> x[7];myfile>> x[8];myfile>>x[9]; myfile>>x[10];myfile>>x[11];myfile>>x[12];myfile>>x[13];//It's for transmit the information about new member to our file with name members.txt
	myfile>>x[14];myfile>>x[15];myfile>>x[16];myfile>>x[17];myfile>>x[18];myfile>>x[19];myfile>>x[20];//It's for transmit the information about new member to our file with name members.txt
	myfile>>x[21];myfile>>x[22];myfile>>x[23];myfile>>x[24];myfile>>x[25];myfile>>x[26];myfile>>x[27];//It's for transmit the information about new member to our file with name members.txt
	myfile>>x[28];myfile>>x[29];myfile>>x[30];myfile>>x[31];myfile>>x[32];myfile>>x[33];myfile>>x[34];//It's for transmit the information about new member to our file with name members.txt	
	myfile>>x[35];myfile>>x[36];myfile>>x[37];myfile>>x[38];myfile>>x[39];myfile>>x[40];myfile>>x[41]; //It's for transmit the information about new member to our file with name members.txt
	myfile>>x[42];myfile>>x[43];

	cout<<endl<<endl<<"<<-Sign In->>"<<endl<<endl;
	cout<<"ID: ";
	cin>>s;
	cout<<"Password: ";
	cin>>n;
	if (  (s==x[0] && n==x[1]) || (s==x[11] && n==x[12]) || (s==x[21] && n==x[22]) || (s==x[31] && n==x[32]) || (s==x[41] && n==x[42]) ){
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<"mr/ms ";
		SetConsoleTextAttribute(h,06);
		if ( s==x[0] ){
			cout<<x[2];
			k=5;
		}else if ( s==x[11] ){
			cout<<x[13];
			k=16;			
		}else if ( s==x[21] ){
			cout<<x[23];
			k=27;			
		}else if ( s==x[31] ){
			cout<<x[33];
			k=38;			
		}else if ( s==x[41] ){
			cout<<x[43];
		}
		SetConsoleTextAttribute(h,07);
		cout<<" with memberID ";
		SetConsoleTextAttribute(h,06);
		cout<<s;  
		SetConsoleTextAttribute(h,07);
		cout<<" welcome to your account.";
		int m,a;
		cout<<endl<<endl<<"<<-Member->>"<<endl<<endl;
		cout<<"1. MemberShip extention"<<endl;
		cout<<"2. Show the books of library"<<endl;
		cout<<"3. Rent book"<<endl;
		cout<<"4. Return book"<<endl;
		cout<<"5. Pay forfeit"<<endl;
		cout<<"6. Show my information"<<endl;
		cout<<"7. Exit"<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<endl<<"Please enter a number : ";
		SetConsoleTextAttribute(h,07);
		cin>>m; 
		SetConsoleTextAttribute(h,02);
		system("cls");
		if ( m!=1 && m!=2 && m!=3 && m!=4 && m!=5 && m!=6 && m!=7 ) {
		do{
			welcome();
			SetConsoleTextAttribute(h,07);
			cout<<endl<<endl<<"<<-Sign In->>"<<endl<<endl;
			cout<<"1. MemberShip extention"<<endl;
			cout<<"2. Show the books of library"<<endl;
			cout<<"3. Rent book"<<endl;
			cout<<"4. Return book"<<endl;
			cout<<"5. Pay forfeit"<<endl;
			cout<<"6. Show my information"<<endl;
			cout<<"7. Exit"<<endl;
			SetConsoleTextAttribute(h,02);
			cout<<endl<<"EROR!"<<endl<<"Please Enter a correct number in this list(from 1 to 7) : ";
			SetConsoleTextAttribute(h,07);
			cin>>m;
			if ( m==1 || m==2 || m==3 || m==4 || m==5 || m==6 || m==7 )
			break;
			cout<<"\n";
			system("cls");
		}while( m!=1 || m!=2 || m!=3 || m!=4 || m!=5 || m!=6 || m!=7 );
		system("cls");
		welcome();
		}
		if ( m==1 ){
	//		
			welcome();
			SetConsoleTextAttribute(h,07);
			cout<<endl<<endl<<"<<-MemberShip extention->>"<<endl<<endl;	
			int y;
			string result[100],Result,h;
			ifstream file("members.txt"); // here a file with name 'members.txt' is made.
	
			file>>result[0];file>>result[1];file>>result[2];file>>result[3];file>>result[4];file>>result[5];file>>result[6];       //It's for transmit the information about new member to our file with name members.txt
			file>>result[7];file>>result[8];file>>result[9];file>>result[10];file>>result[11];file>>result[12];file>>result[13];   //It's for transmit the information about new member to our file with name members.txt
			file>>result[14];file>>result[15];file>>result[16];file>>result[17];file>>result[18];file>>result[19];file>>result[20];//It's for transmit the information about new member to our file with name members.txt
			file>>result[21];file>>result[22];file>>result[23];file>>result[24];file>>result[25];file>>result[26];file>>result[27];//It's for transmit the information about new member to our file with name members.txt
			file>>result[28];file>>result[29];file>>result[30];file>>result[31];file>>result[32];file>>result[33];file>>result[34];//It's for transmit the information about new member to our file with name members.txt	
			file>>result[35];file>>result[36];file>>result[37];file>>result[38];file>>result[39];file>>result[40];file>>result[41];//It's for transmit the information about new member to our file with name members.txt
			file>>result[42];file>>result[43];
			
			
			SetConsoleTextAttribute(H,02);
			cout<<"Enter your new date: ";
			SetConsoleTextAttribute(H,07);
			cin>>h;
			if ( k==5 ){
				result[5]=h;		
			}else if ( k==16 ){
				result[16]=h;
			}else if ( k==27 ){
				result[27]=h;
			}else if( k==38 ){
				result[38]=h;
			}
			
			Result = result[0] + " " + result[1] + " " + result[2] + " " + result[3] + " " + result[4] + " " + result[5] + " " + result[6] + " " + result[7] + " " + result[8] + " " + result[9]
			+ " " + result[10] + " " + result[11] + " " + result[12] + " " + result[13] + " " + result[14] + " " + result[15] + " " + result[16] + " " + result[17] + " " + result[18] + " " + result[19]
			+ " " + result[20] + " " + result[21] + " " + result[22] + " " + result[23] + " " + result[24] + " " + result[25] + " " + result[26] + " " + result[27] + " " + result[28] + " " + result[29]
			+ " " + result[30] + " " + result[31] + " " + result[32] + " " + result[33] + " " + result[34] + " " + result[35] + " " + result[36] + " " + result[37] + " " + result[38] + " " + result[39]
			+ " " + result[40] + " " + result[41] + " " + result[42] + " " + result[43];	
	 
			ofstream myFile("members.txt");
			myFile<<Result;
						
			welcome();
			SetConsoleTextAttribute(H,07);
			cout<<endl<<endl<<"<<-MemberShip extention->>"<<endl<<endl;
			SetConsoleTextAttribute(H,06);	
			cout<<"Your information is succesfully changed."<<endl<<endl;
			SetConsoleTextAttribute(H,02);
			cout<<"Enter a number to exit: ";
			SetConsoleTextAttribute(H,07);
			cin>>y;
			signIn();			
			
	//		
		}
		if ( m==2 ){
			showBookForMember();
		}
		if ( m==3 ){
	//		
			welcome();
			SetConsoleTextAttribute(h,07);
			cout<<endl<<endl<<"<<-Rent Book->>"<<endl<<endl;	
			int y,r,p[100];
			string s[100],result[100],Result_member,Result_book,h,j;
			ifstream file("members.txt"); // here a file with name 'members.txt' is made.
	
			file>>result[0];file>>result[1];file>>result[2];file>>result[3];file>>result[4];file>>result[5];file>>result[6];       //It's for transmit the information about new member to our file with name members.txt
			file>>result[7];file>>p[8];file>>result[9];file>>result[10];file>>result[11];file>>result[12];file>>result[13];   //It's for transmit the information about new member to our file with name members.txt
			file>>result[14];file>>result[15];file>>result[16];file>>result[17];file>>result[18];file>>p[19];file>>result[20];//It's for transmit the information about new member to our file with name members.txt
			file>>result[21];file>>result[22];file>>result[23];file>>result[24];file>>result[25];file>>result[26];file>>result[27];//It's for transmit the information about new member to our file with name members.txt
			file>>result[28];file>>result[29];file>>p[30];file>>result[31];file>>result[32];file>>result[33];file>>result[34];//It's for transmit the information about new member to our file with name members.txt	
			file>>result[35];file>>result[36];file>>result[37];file>>result[38];file>>result[39];file>>result[40];file>>p[41];//It's for transmit the information about new member to our file with name members.txt
			file>>result[42];file>>result[43];
			
			ifstream file1("books.txt");
	
			file1>>s[0];file1>>s[1];file1>>s[2];file1>>s[3];file1>>s[4];file1>>s[5];file1>>s[6];file1>>s[7];file1>>s[8];file1>>s[9];file1>>s[10]; //It's for transmiting the information from file(books.txt) to the app
			file1>>s[11];file1>>s[12];file1>>s[13];file1>>s[14];file1>>s[15];file1>>s[16];file1>>s[17];file1>>s[18];file1>>s[19];file1>>s[20];   //It's for transmiting the information from file(books.txt) to the app
			file1>>s[21];file1>>s[22];file1>>s[23];file1>>s[24];file1>>s[25];file1>>s[26];file1>>s[27];file1>>s[28];file1>>s[29];file1>>s[30];   //It's for transmiting the information from file(books.txt) to the app
			file1>>s[31];file1>>s[32];file1>>s[33];file1>>s[34];file1>>s[35];file1>>s[36];file1>>s[37];file1>>s[38];file1>>s[39];file1>>s[40];   //It's for transmiting the information from file(books.txt) to the app
			file1>>s[41];file1>>s[42];file1>>s[43];file1>>s[44];file1>>s[45];file1>>s[46];file1>>s[47];
			
			SetConsoleTextAttribute(H,02);
			cout<<"Enter the bookname: ";
			SetConsoleTextAttribute(H,07);
			cin>>h;
			if ( h==s[1] ){
				r=5;
			}else if ( h==s[8] ){
				r=12;
			}else if ( h==s[15] ){
				r=19;
			}else if ( h==s[22] ){
				r=26;
			}else if ( h==s[29] ){
				r=33;
			}else if ( h==s[36] ){
				r=40;
			}else if ( h==s[43] ){
				r=47;
			}
			SetConsoleTextAttribute(H,02);
			cout<<"Enter the date of rent: ";
			SetConsoleTextAttribute(H,07);
			cin>>j;
			s[r]=j;
			s[r-2]=result[k-5];
			
			p[k+3]+=1;
			result[k+4]=h;
			
			Result_book = s[0] + " " + s[1] + " " + s[2] + " " + s[3] + " " + s[4] + " " + s[5] + " " + s[6] + " " + s[7] + " " + s[8] + " " + s[9]
			+ " " + s[10] + " " + s[11] + " " + s[12] + " " + s[13] + " " + s[14] + " " + s[15] + " " + s[16] + " " + s[17] + " " + s[18] + " " + s[19]
			+ s[20] + " " + s[21] + " " + s[22] + " " + s[23] + " " + s[24] + " " + s[25] + " " + s[26] + " " + s[27] + " " + s[28] + " " + s[29]
			+ " " + s[30] + " " + s[31] + " " + s[32] + " " + s[33] + " " + s[34] + " " + s[35] + " " + s[36] + " " + s[37] + " " + s[38] + " " + s[39]
			+ " " + s[40] + " " + s[41] + " " + s[42] + " " + s[43] + " " + s[44] + " " + s[45] + " " + s[46] + " " + s[47] + " " + s[48];	 
			ofstream myfile1("books.txt");
			myfile1<<Result_book;	
			
			stringstream ss8,ss19,ss30,ss41;
			ss8<<p[8];ss19<<p[19];ss30<<p[30];ss41<<p[41];
			string s8,s19,s30,s41;
			ss8>>s8;ss19>>s19;ss30>>s30;ss41>>s41;
			
			Result_member = result[0] + " " + result[1] + " " + result[2] + " " + result[3] + " " + result[4] + " " + result[5] + " " + result[6] + " " + result[7] + " " + s8 + " " + result[9]
			+ " " + result[10] + " " + result[11] + " " + result[12] + " " + result[13] + " " + result[14] + " " + result[15] + " " + result[16] + " " + result[17] + " " + result[18] + " " + s19
			+ " " + result[20] + " " + result[21] + " " + result[22] + " " + result[23] + " " + result[24] + " " + result[25] + " " + result[26] + " " + result[27] + " " + result[28] + " " + result[29]
			+ " " + s30 + " " + result[31] + " " + result[32] + " " + result[33] + " " + result[34] + " " + result[35] + " " + result[36] + " " + result[37] + " " + result[38] + " " + result[39]
			+ " " + result[40] + " " + s41 + " " + result[42] + " " + result[43];	
	 
			ofstream myFile("members.txt");
			myFile<<Result_member;	
			
			welcome();
			SetConsoleTextAttribute(H,07);
			cout<<endl<<endl<<"<<-Rent Book->>"<<endl<<endl;
			SetConsoleTextAttribute(H,06);	
			cout<<"Your rent is succesfully done."<<endl<<endl;
			SetConsoleTextAttribute(H,02);
			cout<<"Enter a number to exit: ";
			SetConsoleTextAttribute(H,07);
			cin>>y;
			signIn();			
							
								
		}
		if ( m==4 ){
	//		
			welcome();
			SetConsoleTextAttribute(h,07);
			cout<<endl<<endl<<"<<-Return Book->>"<<endl<<endl;	
			int y,r;
			string s[100],result[100],Result_book,h,j;		
			ifstream file1("books.txt");
			
			cout<<"Enter the bookname: ";
			cin>>h;
			cout<<"Enter the date: ";
			cin>>j;
				
			file1>>s[0];file1>>s[1];file1>>s[2];file1>>s[3];file1>>s[4];file1>>s[5];file1>>s[6];file1>>s[7];file1>>s[8];file1>>s[9];file1>>s[10]; //It's for transmiting the information from file(books.txt) to the app
			file1>>s[11];file1>>s[12];file1>>s[13];file1>>s[14];file1>>s[15];file1>>s[16];file1>>s[17];file1>>s[18];file1>>s[19];file1>>s[20];   //It's for transmiting the information from file(books.txt) to the app
			file1>>s[21];file1>>s[22];file1>>s[23];file1>>s[24];file1>>s[25];file1>>s[26];file1>>s[27];file1>>s[28];file1>>s[29];file1>>s[30];   //It's for transmiting the information from file(books.txt) to the app
			file1>>s[31];file1>>s[32];file1>>s[33];file1>>s[34];file1>>s[35];file1>>s[36];file1>>s[37];file1>>s[38];file1>>s[39];file1>>s[40];   //It's for transmiting the information from file(books.txt) to the app
			file1>>s[41];file1>>s[42];file1>>s[43];file1>>s[44];file1>>s[45];file1>>s[46];file1>>s[47];		
		
			if ( h==s[1] ){
				r=6;
			}else if ( h==s[8] ){
				r=13;
			}else if ( h==s[15] ){
				r=20;
			}else if ( h==s[22] ){
				r=27;
			}else if ( h==s[29] ){
				r=34;
			}else if ( h==s[36] ){
				r=41;
			}
			s[r]=j;
			
			Result_book = s[0] + " " + s[1] + " " + s[2] + " " + s[3] + " " + s[4] + " " + s[5] + " " + s[6] + " " + s[7] + " " + s[8] + " " + s[9]
			+ " " + s[10] + " " + s[11] + " " + s[12] + " " + s[13] + " " + s[14] + " " + s[15] + " " + s[16] + " " + s[17] + " " + s[18] + " " + s[19]
			+ s[20] + " " + s[21] + " " + s[22] + " " + s[23] + " " + s[24] + " " + s[25] + " " + s[26] + " " + s[27] + " " + s[28] + " " + s[29]
			+ " " + s[30] + " " + s[31] + " " + s[32] + " " + s[33] + " " + s[34] + " " + s[35] + " " + s[36] + " " + s[37] + " " + s[38] + " " + s[39]
			+ " " + s[40] + " " + s[41] + " " + s[42] + " " + s[43] + " " + s[44] + " " + s[45] + " " + s[46] + " " + s[47] + " " + s[48];	 
			ofstream myfile1("books.txt");
			myfile1<<Result_book;
			
			welcome();
			SetConsoleTextAttribute(H,07);
			cout<<endl<<endl<<"<<-Return Book->>"<<endl<<endl;
			SetConsoleTextAttribute(H,06);	
			cout<<"Your return is succesfully done."<<endl<<endl;
			SetConsoleTextAttribute(H,02);
			cout<<"Enter a number to exit: ";
			SetConsoleTextAttribute(H,07);
			cin>>y;
			signIn();
										
		}
		if ( m==5 ){
			payForfeit();
		}
		if ( m==6 ){
			int r;
			k-=5;
			welcome();
			SetConsoleTextAttribute(h,07);
			cout<<endl<<endl<<"<<-Show My Information->>"<<endl<<endl;			
			cout<<"\n"<<" id  | password |  name  | phone number | date of signIn | date of finishing signIn | rent limit | time limit of rent"<<endl;
	        cout<<"_____|__________|________|______________|________________|__________________________|____________|____________________";	
			cout<<endl<<x[k]<<"     "<<x[k+1]<<"     "<<x[k+2]<<"    "<<x[k+3]<<"     "<<x[k+4]<<"            "<<x[k+5]<<"                 "<<x[k+6]<<"                "<<x[k+7]<<endl;
	
			cout<<endl<<endl<<" number of rent |    booklist which have    |  all delay"<<endl;
			cout<<"________________|___________________________|____________";
			int j=k+8;
			cout<<endl<<"      "<<x[j]<<"                 "<<x[j+1]<<"                      "<<x[j+2];
			SetConsoleTextAttribute(h,02);
			cout<<endl<<endl<<"Enter a number to exit: ";
			SetConsoleTextAttribute(h,07);
			cin>>r;
			signIn();
		}
		if ( m==7 ){
			member();
		}		

		
		
		
	}else if (  (s==x[0] && n!=x[1]) || (s==x[11] && n!=x[12]) || (s==x[21] && n!=x[22]) || (s==x[31] && n!=x[32]) || (s==x[41] && n!=x[42]) ){
		int a;
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<endl<<endl<<"<<-Sign In->>"<<endl<<endl;
		SetConsoleTextAttribute(h,04);
		cout<<"The password of this memberID is incorrect! "<<endl<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<"Enter a number to exit: ";
		cin>>a;
		member();
	}else{
		int b;
		welcome();
		SetConsoleTextAttribute(h,07);
		cout<<endl<<endl<<"<<-Sign In->>"<<endl<<endl;
		SetConsoleTextAttribute(h,04);
		cout<<"There isn't any member with this id! "<<endl<<endl;
		SetConsoleTextAttribute(h,02);
		cout<<"Enter a number to exit: ";
		cin>>b;
		member();
	}			
}
void showAllMember(){
	welcome();
	SetConsoleTextAttribute(h,07);
	cout<<endl<<endl<<"<<-Show Member->>"<<endl<<endl;	
	int a;
	ifstream file("members.txt");
	string s[100];
	
	file>>s[0];file>>s[1];file>>s[2];file>>s[3];file>>s[4];file>>s[5];file>>s[6];       //It's for transmit the information about new member to our file with name members.txt
	file>>s[7];file>>s[8];file>>s[9];file>>s[10];file>>s[11];file>>s[12];file>>s[13];   //It's for transmit the information about new member to our file with name members.txt
	file>>s[14];file>>s[15];file>>s[16];file>>s[17];file>>s[18];file>>s[19];file>>s[20];//It's for transmit the information about new member to our file with name members.txt
	file>>s[21];file>>s[22];file>>s[23];file>>s[24];file>>s[25];file>>s[26];file>>s[27];//It's for transmit the information about new member to our file with name members.txt
	file>>s[28];file>>s[29];file>>s[30];file>>s[31];file>>s[32];file>>s[33];file>>s[34];//It's for transmit the information about new member to our file with name members.txt	
	file>>s[35];file>>s[36];file>>s[37];file>>s[38];file>>s[39];file>>s[40];file>>s[41];//It's for transmit the information about new member to our file with name members.txt
	file>>s[42];file>>s[43];	

	cout<<"\n"<<" id  | password |  name  | phone number | date of signIn | date of finishing signIn | rent limit | time limit of rent"<<endl;
	      cout<<"_____|__________|________|______________|________________|__________________________|____________|____________________";	
	int i=0;
	do{
		cout<<endl<<s[i]<<"     "<<s[i+1]<<"     "<<s[i+2]<<"    "<<s[i+3]<<"     "<<s[i+4]<<"            "<<s[i+5]<<"                 "<<s[i+6]<<"                "<<s[i+7]<<endl;
		i+=11;
	}while(i<43);
	
	cout<<endl<<endl<<" number of rent |    booklist which have    |  all delay"<<endl;
				cout<<"________________|___________________________|____________";
	int j=8;
	do{
		cout<<endl<<"      "<<s[j]<<"                 "<<s[j+1]<<"                      "<<s[j+2];
		j+=11;
	}while(j<43);
	SetConsoleTextAttribute(h,02);
	cout<<endl<<"Enter a number to exit: ";
	SetConsoleTextAttribute(h,07);
	cin>>a;
	member();	
}
void payForfeit(){
	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"<<-Pay forfeit->>"<<endl<<endl;
	int a;
	cout<<"You don't have any forfeit to pay!"<<endl<<endl;
	SetConsoleTextAttribute(H,02);	
	cout<<"Enter a number to exit: ";
	SetConsoleTextAttribute(H,07);
	cin>>a;
	signIn();	
}
void dateOfRegistrationForMember(){
	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"<<-Show Book->>"<<endl;
	SetConsoleTextAttribute(H,05);
	cout<<"This is schedule is sorted by the date of the book's registration."<<endl<<endl;	
	SetConsoleTextAttribute(H,07);
	int a;
	ifstream file("books.txt");
	string s[100];
	
	file>>s[0];file>>s[1];file>>s[2];file>>s[3];file>>s[4];file>>s[5];file>>s[6];file>>s[7];file>>s[8];file>>s[9];file>>s[10]; //It's for transmiting the information from file(books.txt) to the app
	file>>s[11];file>>s[12];file>>s[13];file>>s[14];file>>s[15];file>>s[16];file>>s[17];file>>s[18];file>>s[19];file>>s[20];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[21];file>>s[22];file>>s[23];file>>s[24];file>>s[25];file>>s[26];file>>s[27];file>>s[28];file>>s[29];file>>s[30];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[31];file>>s[32];file>>s[33];file>>s[34];file>>s[35];file>>s[36];file>>s[37];file>>s[38];file>>s[39];file>>s[40];   //It's for transmiting the information from file(books.txt) to the app
	file>>s[41];file>>s[42];file>>s[43];file>>s[44];file>>s[45];file>>s[46];file>>s[47];									   //It's for transmiting the information from file(books.txt) to the app
	
	cout<<"\n"<<"  id  | name  |  authors | username |   forfeit  | date of last rent  |  date of return"<<endl;
	cout<<"______|_______|__________|__________|____________|____________________|__________________";
	int i=0;
	do{
		cout<<endl<<" "<<s[i]<<"   "<<s[i+1]<<"     "<<s[i+2]<<"       "<<s[i+3]<<"         "<<s[i+4]<<"        "<<s[i+5]<<"           "<<s[i+6];
		i+=7;
	}while(i<39);
	SetConsoleTextAttribute(H,05);
	cout<<endl<<"Description about this schedule:"<<endl<< "[*username*: Username of the last member which rent the book]"<<endl<<"[*forfeit*: Amount of forfeit per day(after the finishing of time-limt-rent)]"; 
	SetConsoleTextAttribute(H,02);
	cout<<endl<<endl<<"Enter a number to exit: ";
	SetConsoleTextAttribute(H,07);
	cin>>a;
	showBookForMember();		
}
void delayForfeitForMember(){
	welcome();
	SetConsoleTextAttribute(H,07);
	cout<<endl<<endl<<"<<-Show Book->>"<<endl;
	SetConsoleTextAttribute(H,05);
	cout<<"This is schedule is sorted by the forfeit of the delay to return the book."<<endl<<endl;	
	SetConsoleTextAttribute(H,07);
	int a,S[100];
	ifstream file("books.txt");
	string s[100];
	
	file>>s[0];file>>s[1];file>>s[2];file>>s[3];file>>S[0];file>>s[5];file>>s[6];file>>s[7];file>>s[8];file>>s[9];file>>s[10]; //It's for transmiting the information from file(books.txt) to the app
	file>>S[1];file>>s[12];file>>s[13];file>>s[14];file>>s[15];file>>s[16];file>>s[17];file>>S[2];file>>s[19];file>>s[20];     //It's for transmiting the information from file(books.txt) to the app
	file>>s[21];file>>s[22];file>>s[23];file>>s[24];file>>S[3];file>>s[26];file>>s[27];file>>s[28];file>>s[29];file>>s[30];    //It's for transmiting the information from file(books.txt) to the app
	file>>s[31];file>>S[4];file>>s[33];file>>s[34];file>>s[35];file>>s[36];file>>s[37];file>>s[38];file>>S[5];file>>s[40];     //It's for transmiting the information from file(books.txt) to the app
	file>>s[41];file>>s[42];file>>s[43];file>>s[44];file>>s[45];file>>S[6];file>>s[47];							               //It's for transmiting the information from file(books.txt) to the app
	
	
	cout<<"\n"<<"  id  | name  |  authors | username |   forfeit  | date of last rent  |  date of return"<<endl;
	cout<<"______|_______|__________|__________|____________|____________________|__________________";
	
	if( S[0]>=S[1] && S[0]>=S[2] ){
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		if(S[1]>=S[2] ){
		cout<<endl<<" "<<s[7]<<"   "<<s[8]<<"     "<<s[9]<<"       "<<s[10]<<"         "<<S[1]<<"        "<<s[12]<<"           "<<s[13];
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
		}else{
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
			cout<<endl<<"  "<<s[5]<<"       "<<s[6]<<"         "<<S[1]<<"          "<<s[8]<<"          "<<s[9];
		}
	}else if( S[1]>=S[0] && S[1]>=S[2] ) {
		cout<<endl<<" "<<s[7]<<"   "<<s[8]<<"     "<<s[9]<<"       "<<s[10]<<"         "<<S[1]<<"        "<<s[12]<<"           "<<s[13];
		if(S[0]>=S[2] ){
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
		}else{
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		}		
	}else{
		cout<<endl<<" "<<s[14]<<"   "<<s[15]<<"     "<<s[16]<<"       "<<s[17]<<"         "<<S[2]<<"        "<<s[19]<<"           "<<s[20];
		if(S[1]>=S[0] ){
		cout<<endl<<" "<<s[7]<<"   "<<s[8]<<"     "<<s[9]<<"       "<<s[10]<<"         "<<S[1]<<"        "<<s[12]<<"           "<<s[13];
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		}else{
		cout<<endl<<" "<<s[0]<<"   "<<s[1]<<"     "<<s[2]<<"       "<<s[3]<<"         "<<S[0]<<"        "<<s[5]<<"           "<<s[6];
		cout<<endl<<" "<<s[7]<<"   "<<s[8]<<"     "<<s[9]<<"       "<<s[10]<<"         "<<S[1]<<"        "<<s[12]<<"           "<<s[13];
		}		
	}
	
	SetConsoleTextAttribute(H,05);
	cout<<endl<<endl;
	cout<<"Description about this schedule:"<<endl<< "[*username*: Username of the last member which rent the book]"<<"\n"<<"[*forfeit*: Amount of forfeit per day(after the finishing of time-limt-rent)]"; 
	SetConsoleTextAttribute(H,02);
	cout<<endl<<endl<<"Enter a number to exit: ";
	SetConsoleTextAttribute(H,07);
	cin>>a;
	showBookForMember();		
}

//*******************<RunApp>*************************

int main()
{
	welcome();
	SetConsoleTextAttribute(H,07);
	print();
}