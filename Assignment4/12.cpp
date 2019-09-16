/*12. Write a program to accept a string from the user.
Write separate functions to perform the following:
a. Find the number of occurrences of given character in the string
b. Find the number of blank spaces in the string.
c. Find the number of words in the string.
d. Find the total number of all the vowels in the string.*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void occu(string,char);
void blank(string);
void word(string);
void vowel(string);

int main()
{
	int ch;
	char c[50],cc;
	string str;
	while(ch!=5)
	{
		cout<<"\nChoose the option:\n"<<endl;
		cout<<"1.Find the number of occurr given character in the string"<<endl;
		cout<<"2.Find the number of blank spaces in the string"<<endl;
		cout<<"3.Find the number of words in the string"<<endl;
		cout<<"4.Find the total number of all the vowels in the string"<<endl;
		cout<<"5.Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:cin.clear();
    				cin.sync();
					cout<<"Enter the string :"<<endl;
					getline(cin,str);
					cout<<"Enter the character:\n"<<endl;
					cin>>cc;
					occu(str,cc);
					
					break;
			case 2:
					cin.clear();
    				cin.sync();
					cout<<"Enter the string with blank space:"<<endl;
					getline(cin,str);
					blank(str);
					break;
			case 3: cin.clear();
    				cin.sync();
					cout<<"Enter the string with blank space:"<<endl;
					getline(cin,str);
					word(str);
					break;
			case 4:	cin.clear();
    				cin.sync();
					cout<<"Enter the string with blank space:"<<endl;
					getline(cin,str);
					vowel(str);
				 	break;
			case 5:cout<<"Bye"<<endl;	
					return(0);
					break;
			default:
					cout<<"Wrong Choice"<<endl;	
			
		}
		
	}
	
	
	return 0;
}
void occu(string str,char ca)
{

	int i,j,len,cnt=0;
	len=str.length();
	cout<<len<<endl;
	for(i=0;i<len;i++)
	{
		if(str[i]==ca)
		{
			cnt++;
		}
	}
	cout<<ca<<" occurance of character is :"<<cnt<<endl;
	
	
	
	
}
void blank(string str)
{
	

	int len,cnt=0;
	
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			cnt++;
		}
	}

	cout<<" Number of blank spaces is :"<<cnt<<endl;
	
}

void word(string str)
{
	int cnt=1;
	cout<<str.size()<<endl;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' ')
		{
			cnt++;
		}
	}
cout<<" Number of Words is :"<<cnt<<endl;
	
}
void vowel(string str)
{
	int cnt=0;
	cout<<str.size()<<endl;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='a'||str[i]== 'e' ||str[i]== 'i' ||str[i]== 'o' || str[i]=='u' ||str[i]=='A'|| str[i]=='E' || str[i]=='I' ||str[i]== 'O' ||str[i]== 'U' )
		{
			cnt++;
		}
	}
cout<<" Number of vowels is :"<<cnt<<endl;
	
}


