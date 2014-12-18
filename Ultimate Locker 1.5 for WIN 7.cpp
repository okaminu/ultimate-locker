#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <sstream>
using namespace std;

void password_manager(int &, char [99], string &);
void lock();
void unlock();

int main(){
int i;
string komanda1="ren";
string komanda2=".{20D04FE0-3AEA-1069-A2D8-08002B30309D}";
string komanda3;
string sakinys;
int p;
char newpass[99];
string removal2="agurkas.txt";
char pass[99];
char user_pass[99];
int result=3;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
cout<<"----------Ultimate Locker v1.5 for Windows 7----------"<<endl;
cout<<"by Dark_Coder"<<endl;

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"This app must be in the same location with locked folder, named 'Locker'."<<endl;
//---------------passcheck----------------
ifstream passcheck;
passcheck.open("C:/WINDOWS/system32/womv.dll");
	if(!passcheck){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout<<"Application is not password protected."<<endl;
	}else{
	passcheck.getline(pass, 99);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout<<"Application is password protected."<<endl;
	do{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout<<"Insert password"<<endl;
	cin.getline(user_pass, 99);
result=strcmp(pass, user_pass);
if(result!=0){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout<<"-------Incorrect password-------"<<endl;}else{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout<<"-------Correct Password---------"<<endl;
	}}
while(result!=0);
}passcheck.close();
//---------------------------
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Loc: windows-mui, File : multima.txt"<<endl;
do{
	cout<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"1 - ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<"Lock";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<", 2 - ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<"Unlock Folders";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<", 3 - ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
cout<<"Password Manager ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<", 0 - ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
cout<<"Exit"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cin>>i;

switch(i){

case 1 : SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
lock();
cout<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<"----Folder are Locked----"<<endl;
break;
case 2 : SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);


unlock();
cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout<<"----Folders are Unlocked----"<<endl;
break;
case 3 : password_manager(p,newpass, removal2);
	break;
case 0 : 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout<<"----Program closed----"<<endl;
	break;
default : cout<<"There is no such choice."<<endl;
	break;
}}
while(i!=0);



SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
system("pause");
return 0;}




void password_manager(int &p, char newpass[99], string &removal2){
removal2="agurkas.txt";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
cout<<"Press number to select action"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"1 - Get new password."<<endl;
cout<<"2 - Remove current password."<<endl;	
	cin >> p;
	if(p==1){
ifstream passcheck2;
passcheck2.open("C:/WINDOWS/system32/womv.dll");
	if(!passcheck2){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout<<"Insert your new password."<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin.ignore();
	cin.getline(newpass, 99);
	ofstream passcheck3("C:/WINDOWS/system32/womv.dll");
	passcheck3 << newpass;
	passcheck3.close();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout<<"------Password created-----------"<<endl;
	passcheck2.close();}else{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout<<"You already have password."<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout<<"If you want to change it, remove the old one first."<<endl;;}}
	if(p==2){
	
		ifstream passcheck4;
passcheck4.open("C:/WINDOWS/system32/womv.dll");
	if(!passcheck4){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout<<"You can't remove password, because you don't have one."<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout<<"Get a new password first."<<endl;
	passcheck4.close();}else{
removal2="C:/WINDOWS/system32/womv.dll";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<"----------Password removed-----------------"<<endl;}
	}remove(removal2.c_str());}

void lock(){
string komanda1="ren";
string komanda2=".{20D04FE0-3AEA-1069-A2D8-08002B30309D}";
string komanda3;
string sakinys;
int k=1;
int fake=NULL;
string num;
stringstream out;

fstream skaityti1;
skaityti1.open("C:/WINDOWS/mui/multima.txt");
if(!skaityti1){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout<<"File not found"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("pause");
	exit(-1);
}
while(!skaityti1.eof()){
getline(skaityti1, komanda3);
if(k<10){
num="0";
}
out<<k;
num=num+out.str();
sakinys=komanda1 + " " + komanda3 + " "+ num + komanda2;
system(sakinys.c_str());
komanda3="";
k++;
num="";
out.str("");
}
skaityti1.close();
}

void unlock(){
string komanda1="ren";
string komanda2=".{20D04FE0-3AEA-1069-A2D8-08002B30309D}";
string komanda3;
string sakinys;
int k=1;
int fake=NULL;
string num;
stringstream out;


fstream skaityti;
fstream skaityti1;
skaityti1.open("C:/WINDOWS/mui/multima.txt");
if(!skaityti1){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout<<"File not found"<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	system("pause");
	exit(-1);
}
while(!skaityti1.eof()){
getline(skaityti1, komanda3);
if(k<10){
num="0";
}
out<<k;
num=num+out.str();

sakinys=komanda1 + " " + num + komanda2 + " " + komanda3;
system(sakinys.c_str());
komanda3="";
k++;
num="";
out.str("");
}
skaityti1.close();
}
