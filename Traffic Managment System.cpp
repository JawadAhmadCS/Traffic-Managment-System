#include<iostream>
#include<windows.h>
#include<ctime>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;
    string f="...";
	string h1="\n\n\t\t\t\t   ____\n\t\t\t\t  \xD2\xDB\xDB\xDB\xDB\xD2\n\t\t\t\t ";
    string h2="\\____/";
    string h3= "\n\t\t\t\t  |    |\n\t\t\t\t  |    |\n\t\t\t\t  |____|\n\t\t\t\t ";
    string h4="/____\\";
    string h5="\n\t\t\t\t   \xDB\xDB\xDB\xDB \n";
    string h0="\xDB";
    string updat="Updation";
string o="0000-0000";
int total=0;
int main();
void mash(int zzz){
	  // zzz=0;
	Sleep(zzz);
}
string arr1[100],arr2[100],arr3[100],arr4[100],arr5[100],arr7[100];
string arr6[100];
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
void color(int y){
         //y=7;
SetConsoleTextAttribute(h,y);}
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
void savefile();
void loadfile();

class history{
 string username,passward;
	public:
		void History(){
			color(10);
			cout<<"\n\t\t Enter Username :";color(15);cin>>username;
			color(10);
			cout<<"\n\t\t Enter Passward :";color(15);cin>>passward;
			if(username=="jawad"&&passward=="1234"){
			system("cls");
			color(12);
			cout<<"\t\t Press";
			color(4);
			cout<<"\n\t\t 1";color(11);cout<<" ) To show"<<endl;
			color(4);
			cout<<"\t\t 2 ";color(11);cout<<") To update"<<endl;
			color(4);
			cout<<"\t\t 3 ";color(11);cout<<") To search"<<endl;
			color(4);
			cout<<"\t\t 4 ";color(11);cout<<") To delete"<<endl;
			}
			else{
				color(4);
	cout<<"\n\t\t  Invalid Passward\n";
	 color(12);
			}
			color(12);
	cout<<"\n\t\t   Press any key to continue...";
			int wewe=getch();
			switch(wewe){
				case 49:
					show();
				break;
				case 50:
					update();
				break;
				case 51:
					search();
				break;
					case 52:
					{
				  del();		
					}
				default:
					{
			system("cls");
		}}
	}
  void show();
  void update();
  void search();
  void del();
};
void history::show(){
	system("cls");
		if (total==0)
{
	color(6);
	cout<<"\n\t\t    No data is enterd\n"<<endl;
	 color(12);
	cout<<"\n\n\t\t   Press any key to continue...";
	getch();
	color(15);
	system("cls");
	History();
}else{
	for(int i=0;i<total;i++){
	color(13);
	cout<<"\n\n\t\t____________________________________________\n";
	color(12);
	cout<<arr1[i];//cout<<"\n";
	color(4);
	cout<<arr3[i];
	color(10);
	cout<<"\n\n\t\t    Registration No:  ";color(6);cout<<arr5[i];
	cout<<"\n\n\t\t    time:             ";color(6);cout<<arr4[i];
	cout<<"\n\n\t\t    Taxes:            ";color(6);cout<<arr6[i];
	cout<<"\n\n\t\t    Color:            ";color(6);cout<<arr2[i];
}savefile();cout<<"\n\n";	}}

void history::update(){
	system("cls");
	if (total==0)
{
	color(6);
	cout<<"\n\t\t    No data is enterd\n"<<endl;
	 color(12);
	cout<<"\n\n\t\t   Press any key to continue...";
	getch();
	color(15);
	system("cls");
	History();
}else{int a1a2a3=0;
	color(10);
	string REGno;	
	cout<<"Enter Registration number : ";
	color(7);
	cin>>REGno;
		for(int i=0;i<total;i++)
	{	                                                               
	if(REGno==arr5[i])
	{
		color(13);
	 cout<<"\nprevious data of vehicle : "<<endl; 
	 	color(13);
	cout<<"\n\n\t\t____________________________________________\n";
	color(12);
	cout<<arr1[i];
	color(4);
	cout<<arr3[i];
	color(10);
	cout<<"\n\n\t\t    Registration No:  ";color(7);cout<<arr5[i];
	color(6);
	cout<<"\n\n\t\t    time: ";color(7);cout<<arr4[i];
	color(6);
	cout<<"\n\t\t    Taxes:          ";color(7);cout<<arr6[i];
	color(6);
	cout<<"\n\n\t\t    Color:          ";color(7);cout<<arr2[i];
   	color(13);
	cout<<"\n\n\t\t____________________________________________\n";
	cout<<"\n\t\tEnter new data"<<endl;
	cout<<"\n\n\t\t    Registration No:  ";color(7);cin>>arr5[i];
	color(6);
	cout<<"\n\n\t\t    time: ";color(7);cin>>arr4[i];
	color(6);
	cout<<"\n\t\t    Taxes:          ";color(7);cin>>arr6[i];
	color(6);
	cout<<"\n\n\t\t    Color:          ";color(7);cin>>arr2[i];
	cout<<"\n\n\t\t    ";
	savefile();
	color(9);
	for(int i=0;i<updat.length();i++){
	mash(10);
	cout<<updat.at(i);}
	color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<"Successful\n";
}
else{
	a1a2a3++;
	if(a1a2a3==total){
		color(4);
	cout<<"\n\t\t  Invalid Input\n";
	 color(12);
	cout<<"\n\n\t\tPress any key to continue...";
	getch();
	color(15);
	system("cls");
	History();
	}}
  }}
}
string dell="\n\n\t\t Deletion of All data";
string dell2="\n\n\t\t Deletion of your Require data";
string a22="\n\t\thiii...\n\t\tI am AI base model and developed to control traffic like registration of vichle,store data of vichles and traffic violation.";
		    string d22="\n\t\t As a AI base model i can perform these all task in your just one click";
void history::search(){
	int a2a2a3=0;
	if(total==0)
	{
		system("cls");
	color(6);
	cout<<"\n\t\t    No data is enterd\n"<<endl;
	 color(12);
	cout<<"\n\n\t\t   Press any key to continue...";
	getch();
	color(15);
	system("cls");
	History();
	}
	else
	{
		system("cls");
		color(10);
	string REgno;
	cout<<"\t\tEnter Registration No :  ";
	color(7);
	cin>>REgno;
	for(int i=0;i<total;i++)
	{                                                             
	if(REgno==arr5[i])
	{
	color(13);
	cout<<"\n\t\t     Data of Vehicle "; 
	cout<<"\n\n\t\t____________________________________________\n";
	color(12);
	cout<<arr1[i];
	color(4);
	cout<<arr3[i];
	color(10);
	cout<<"\n\n\t\t    Registration No:  ";color(6);cout<<arr5[i];
	cout<<"\n\n\t\t    time:             ";color(6);cout<<arr4[i];
	cout<<"\n\n\t\t    Taxes:            ";color(6);cout<<arr6[i];
	cout<<"\n\n\t\t    Color:            ";color(6);cout<<arr2[i];
}else
{
a2a2a3++;
	if(a2a2a3==total){
		color(4);
	cout<<"\n\t\t  Invalid Input\n";
	 color(12);
	cout<<"\n\n\t\tPress any key to continue...";
	getch();
	color(15);
	system("cls");
	History();
}}}}}
void history::del(){
	int a2a3a3=0;
	if( total ==0)
	{
		system("cls");
	color(6);
	cout<<"\n\t\t    No data is enterd\n"<<endl;
	 color(12);
	cout<<"\n\n\t\t   Press any key to continue...";
	getch();
	color(15);
	system("cls");
	History();
	}else{
		system("cls");
	color(8);	
 int a;
 color(4);
cout<<"\n\t\t 1";color(11);cout<<" ) To Delete All Record"<<endl;
color(4);
cout<<"\t\t 2 ";color(11);cout<<") To Delete Specific Record"<<endl;
 a=getch();
 if(a==49)
 {
 	int dddd;
 	color(6);
 	cout<<"\n\t\t Are you sure";
 	color(4);
 	cout<<"\n\t\t y";color(7);
 	cout<<" ) yes";
 	color(4);
 	cout<<"\n\t\t Any Key";color(7);
 	cout<<" ) No";
 	dddd=getch();
 	if(dddd==121){
 	total = 0;
   color(9);
	for(int i=0;i<dell.length();i++){
	mash(10);
	cout<<dell.at(i);}
	color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	savefile();
	color(10);
	cout<<"Successful\n";
	color(13);
	cout<<"\n\n\t\t____________________________________________\n";color(12);
	cout<<"\n\n\t\tPress any key to continue...";
	getch();
	color(15);
	system("cls");
	 }}
 if (a==50)
 {
 	color(10);
 	string regist;
 	cout<<"\n\t\t Enter Registration Number : ";
 	cin>>regist;
 	for(int i=0;i<total;i++)
 	{
 		if (regist==arr5[i])
 		{
 			for(int j=i;j<total;j++)
			 {
			 	arr1[j]=arr1[j+1];
			 	arr2[j]=arr2[j+1];
			 	arr3[j]=arr3[j+1];
			 	arr4[j]=arr4[j+1];
			 	arr5[j]=arr5[j+1];
			 	arr6[j]=arr6[j+1];
			  }
			  total--;	  
			  color(9);
			  savefile();
	for(int i=0;i<dell2.length();i++){
	mash(10);
	cout<<dell2.at(i);}
	color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);}
	color(10);
	cout<<"Successful\n";
	color(12);
	cout<<"\n\n\t\t Press any key to continue...";
	getch();
		 }else
{
a2a3a3++;
	if(a2a3a3==total){
		color(4);
	cout<<"\n\t\t  Invalid Input\n";
	 color(12);
	cout<<"\n\n\t\tPress any key to continue...";
	getch();
	color(15);
	system("cls");
	History();
}}
	  }
	}
 }	
}
string g22="\t\t    Incoming vehicle";
	string g33="\n\t\t    scanning";
	string a="QAZWSXEDCRFVTGBYHNUJMIKHEGCUWUBOLP";//34
	string iii="5647832910";//10
	string b22="\n\t\t As a AI base model I can detect the vichle model,plat number and color.";
	string c22="And also registered the vichles with specific registration number.I can detect that vichle follow the traffic rules or violate the traffic rule.";



class AI:public history{
			public:
		void myai(int);
		void car1();
		void wellcomeAI()
		{
		system("cls");
		cout<<"\n\t\t";color(400);cout<<"AI Model Introduction";
		color(9);
		cout<<"\n\t\t.........................................\n";
		color(11);
			for(int i=0;i<a22.length();i++){
			mash(10);
				if(i%38==0){
					i=i-1;
					for(int k=0;k<9;k++){
						i++;
						if (a22.at(i)==' '){
						cout<<"\n\t\t";
						break;
						}
						else{
							cout<<a22.at(i);
						}}}
				else{
					cout<<a22.at(i);
				}}
			//
				for(int i=0;i<b22.length();i++){
			mash(30);
				if(i%38==0){
					i=i-1;
					for(int k=0;k<9;k++){
						i++;
						if (b22.at(i)==' '){
						cout<<"\n\t\t";
						break;
						}
						else{
							cout<<b22.at(i);
						}}}
				else{
					cout<<b22.at(i);
				}}
	
		for(int i=0;i<c22.length();i++){
			mash(10);
				if(i%38==0){
					i=i-1;
					for(int k=0;k<9;k++){
						i++;
						if (c22.at(i)==' '){
						cout<<"\n\t\t";
						break;
						}
						else{
							cout<<c22.at(i);
						}}}
				else{
					cout<<c22.at(i);
				}}
			color(2);
				for(int i=0;i<d22.length();i++){
			mash(10);
				if(i%38==0){
					i=i-1;
					for(int k=0;k<9;k++){
						i++;
						if (d22.at(i)==' '){
						cout<<"\n\t\t";
						break;
						}
						else{
							cout<<d22.at(i);
						}}}
				else{
					cout<<d22.at(i);
				}}
				cout<<"\n\n";
				while(true){
	color(13);
	cout<<"\n\n\t\t____________________________________________\n";
	color(4);
	cout<<"\n\t\tEsc";color(7);cout<<") Back";
	color(12);
	cout<<"\n\n\t\tPress SPACEBAR to Scanning...";
	cout<<"\n\t\tPress TAB to Get history\n";
	cout<<"\n\t\t";color(800);cout<<"Enter your choice  ";color(7);cout<<"_";
	a1b1=getch();
	color(15);
	if(a1b1==27){
		system("cls");
		main();
	}
	if(a1b1==32){
		system("cls");
		car1();
	}
	else if(a1b1==9){
		system("cls");
		History();	
	}else{
		color(4);
		system("cls");
		cout<<"\n\n\t\tInvalid choice\n"<<endl;
	}}}
		private:
			int a1b1;
		public:
}f1;
	void AI::car1( ) {
		color(11);
			for(int i=0;i<g22.length();i++){
			mash(10);
			cout<<g22.at(i);
			}
			color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);
	}
			color(9);
			for(int i=0;i<g33.length();i++){
			mash(10);
			cout<<g33.at(i);
			}color(12);
			color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);
	}
		int y=(rand( )%7)+8;
		color(10);
		cout<<"\n\n\t\t    Registration No:  ";
	color(15);
	for(int k=0;k<4;k++){
	o.at(k)=a.at((rand()%33)+1);
	}
	for(int k=5;k<9;k++){
	o.at(k)=iii.at((rand()%9)+1);
	}
	for(int k=0;k<9;k++){
	mash(5);
	cout<<o.at(k);
	}
	{
	color(y);
    for(int i=0;i<h1.length();i++)
    {
    mash(10);
    cout<<h1.at(i);
	}color(7);cout<<h0;
	color(y);
	for(int i=0;i<h2.length();i++)
    {
    mash(10);
    cout<<h2.at(i);
	}color(7);cout<<h0;
	color(y);
	    for(int i=0;i<h3.length();i++)
       {
       mash(10);
       cout<<h3.at(i);
    	}color(7);cout<<h0;
	    color(y);
	for(int i=0;i<h4.length();i++)
    {
    mash(10);
    cout<<h4.at(i);
	}color(7);cout<<h0;
	color(y);
	    for(int i=0;i<h5.length();i++)
        {
        mash(10);
        cout<<h5.at(i);
	    }
		}
	    myai(y);
	}
void AI::myai(int y)

	{
		string TAX;
		string taxeu=" ";
		string taxes=" ";
		int z;
		int speed=rand()%120;
		z=rand()%2;
		if(z==0){
			taxeu="L";
			color(12);
			string uveh="\n\n\t\t\t  *** Unidentified vehicle ***\n\t\t    ________________________________________\n";
			cout<<uveh;
			arr1[total]=uveh;
		}
		if(speed>30){
			color(4);
			cout<<"\n";
			string ta="\t\t    Speed up from 30km/h";
			taxes="d";
			cout<<ta;
			arr3[total]=ta;
		}
		if(speed<30&&z==1){
			color(10);
			cout<<"\n\t\t    Its ok";
		}
		color(14);
		cout<<"\n\t\t    ________________________________________";
	     color(6);
	for(int i=total;i<total+1;i++){
		arr5[i]=o;
	color(6);
		cout<<"\n\n\t\t    time: ";
		color(15);
		 time_t now = time(0);
        char* timeString = ctime(&now);
        arr4[total] = string(timeString).substr(0, string(timeString).length() - 1);
	     cout<<"\t    "<<arr4[total];
	color(6);
	cout<<"\n\n\t\t    Taxes:          ";color(15);
	 if(taxes=="d"&&taxeu=="L"){
		TAX="1100";
	}
	else if(taxeu=="L"){
		TAX="1000";
	}
	else if(taxes=="d"){
		TAX="100";
	}
	else{
		TAX="0";
	}
	arr6[total]=TAX;
	cout<<arr6[total];
	color(6);
	cout<<"\n\n\t\t    Color:          ";
	color(y);
	switch(y){
		case 8:
		arr2[i]="Gray";
		cout<<arr2[i];	
		break;
		case 9:
		arr2[i]="Blue";
		cout<<arr2[i];	
		break;
		case 10:
		arr2[i]="Green";
		cout<<arr2[i];	
		break;
		case 11:
		arr2[i]="Aqua";
		cout<<arr2[i];	
		break;
		case 12:
		arr2[i]="Red";
		cout<<arr2[i];	
		break;
		case 13:
		arr2[i]="Purple";
		cout<<arr2[i];	
		break;
		case 14:
		arr2[i]="Yellow";
		cout<<arr2[i];	
		break;
	}}savefile();
	color(14);
		cout<<"\n\t\t    ________________________________________";
	color(4);
	cout<<"\n\n\n\t\t    M";//75
	color(7);
	cout<<") Menu";
	total++;
	color(4);
	cout<<"\tTab";//9
	color(7);
	cout<<") History";
	color(4);
	cout<<"\tS";//9
	color(7);
	cout<<") Save Changes";
	color(12);
	cout<<"\n\n\t\t    Press SPACE to Scanning...";//32	
	int tttt=getch();
	if(tttt==109){
		system("cls");
		main();
	}
	else if(tttt==9){
		system("cls");
		History();	
	}
	else if(tttt==115){
		savefile();
		color(2);
		system("cls");
		cout<<"\n\n\t\t    All Changes Save Successfully";	
	}
	else if(tttt==32){
		system("cls");
		car1();
	}
	color(15);
	}
	string e="\n\n\t\t    wellcome to traffic control system";
	string g="\n\t\t    Loding";
    string a11="\n\t\t   start with";
    string b11="\n\t\t   ......................................";
    string c11="\n\n\t\t\t\tLets start";
	string d11=" user base system"; 
	//class wellcome;
	class  user{
	public:
		void getdata();
}g1;
class wellcome:public AI,public user{
	private:
	int choice;
		public:		
	wellcome(){
              loadfile();
	color(9);
			for(int i=0;i<e.length();i++){
			mash(10);
			cout<<e.at(i);
			}color(12);
	for(int i=0;i<f.length();i++){
	mash(200);
	cout<<f.at(i);
	}
	}
	void car( ){
		while(true){
	int y=(rand()%7)+8;
	color(y);
    for(int i=0;i<h1.length();i++)
    {
    mash(10);
    cout<<h1.at(i);
	}color(7);cout<<h0;
	color(y);
	for(int i=0;i<h2.length();i++)
    {
    mash(10);
    cout<<h2.at(i);
	}color(7);cout<<h0;
	color(y);
	    for(int i=0;i<h3.length();i++)
       {
       mash(10);
       cout<<h3.at(i);
    	}color(7);cout<<h0;
	    color(y);
	for(int i=0;i<h4.length();i++)
    {
    mash(10);
    cout<<h4.at(i);
	}color(7);cout<<h0;
	color(y);
	    for(int i=0;i<h5.length();i++)
        {
        mash(10);
        cout<<h5.at(i);
	    }starting(y);
	    }}
	void starting(int y){
		while(true){
	color(15);
	for(int i=0;i<b11.length();i++)
    {
    mash(10);
    cout<<b11.at(i);
	}
	color(y);
	for(int i=0;i<c11.length();i++)
    {
    mash(10);
    cout<<c11.at(i);
	}
	color(15);
	for(int i=0;i<b11.length();i++)
    {
    mash(10);
    cout<<b11.at(i);
	}cout<<"\n\n\n";
	start();
}}
	void start(){
		while(true){
		color(2);
	for(int i=0;i<a11.length();i++)
    {
    mash(10);
    cout<<a11.at(i);
	}color(12);
			for(int i=0;i<f.length();i++){
			mash(300);
			cout<<f.at(i);
			}
	cout<<"\n\n\t\t   1)";color(15);cout<<" AI base system"<<endl;
	color(12);
	cout<<"\t\t   2)";color(15);
	for(int i=0;i<d11.length();i++)
    {
    mash(10);
    cout<<d11.at(i);
	}
	color(12);
	cout<<"\n\t\t   h)";
	color(15);
	cout<<" History";
	cout<<"\n\n\t\t   ";color(800);cout<<"Enter your choice";color(7);
	choice=getch();
	if(choice==49){
 	choice = '\0';
	wellcomeAI();
	}
	else if(choice==50){
	color(10);
	system("cls");
	g1.getdata();
//	cout<<"\n\n\t\t   Coming Soon";
//	color(14);
//	char b=2;
//	cout<<b<<b<<b;
//	cout<<"\n\t\t   ______________";
//	mash(1000); 
//	cout<<"\n";
	}
	else if(choice==104){
	system("cls");
	History();	
	}
	else{
		color(4);
		cout<<choice<<endl;
		system("cls");
		cout<<"\n\t\t   Invalid choice"<<endl;
	}
	choice = '\0';
	}}
	
}d1;
void user::getdata(){
			for(int i=total;i<total+1;i++)
	{	
		cout<<"\n\n\t\t    Registration No:  ";color(7);cin>>arr5[i];
	color(6);
	cout<<"\n\n\t\t    time: ";color(7);cin>>arr4[i];
	color(6);
	cout<<"\n\t\t    Taxes:          ";color(7);cin>>arr6[i];
	color(6);
	cout<<"\n\n\t\t    Color:          ";color(7);cin>>arr2[i];
	cout<<"\n\n\t\t    ";
		}
		total++;
	savefile();
	color(10);
	cout<<"\n\t\t     Successfully Saved";
	color(12);
	cout<<"\n\n\t\t     Press any key to continue...";
	getch();
	system("cls");
	d1.start();
	}
int main(){ 
	while(true){
	srand(time(0));
	d1.car();	
	}}
void savefile(){
	ofstream my("trafficdata.txt",ios::out);
	if(my.is_open()){
		for(int i=0;i<total;i++)
		{
		my<<arr3[i]<<endl;
		my<<arr5[i]<<endl;
		my<<arr4[i]<<endl;
		my<<arr6[i]<<endl;
		my<<arr2[i]<<endl;
		 }
		my.close();
	color(15);
	}else{
		cout<<"\n\n\t\t   file....not open\n\n";
	color(15);
	}
}
void loadfile(){
	int tota=0;
	ifstream my("trafficdata.txt",ios::in);
	if(my.is_open()){
		while(!my.eof()){
			getline(my,arr3[tota]);
			getline(my,arr5[tota]);
			getline(my,arr4[tota]);
			getline(my,arr6[tota]);
			getline(my,arr2[tota]);	
			tota++;
		}
		total=tota-1;
		my.close();
		color(11);
			for(int i=0;i<g.length();i++){
			mash(10);
			cout<<g.at(i);
			}
	color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);
	}
	color(10);
	cout<<"Successful";
	}
	else{
	color(11);
	for(int i=0;i<g.length();i++){
	mash(10);
	cout<<g.at(i);
	}
	color(12);
	for(int i=0;i<f.length();i++){
	mash(300);
	cout<<f.at(i);
	}
	color(4);
	cout<<"Unsuccessful";
	color(15);
	}
}
