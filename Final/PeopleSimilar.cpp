#include<bits/stdc++.h>
using namespace std;
vector<string> names;
void init()
{
        puts("\t[Here are the available Options to choose]\n");
    cout<<"\t\t1. See the available people"<<endl<<"\t\t2. Add new people"<<endl<<"\t\t3. End"<<endl<<endl;
}
void choice()
{
    cout<<"\n\tEnter your choice: ";

}
void Read()
{
    puts("\n\t\t[Here are some people you would like to know]\n");
    ifstream ok;
    ok.open("lis.txt");
    string s,b,p,a,nw;
    int i=1,co=0;
    while(getline(ok,s))
    {
        if(s=="")break;
        printf("\t\t%2d. ",i++);
        names.push_back(s);
        co++;
        cout<<s<<endl;
    }
    if(!co)
    printf("\t\tdata are  not found.\n");

    cout<<"\n\t\tEnter the name to find the similarity: ";
    ok.close();
    cin.ignore();
    getline(cin,s);
    a=s;
    nw=s;
    b=s+".txt";
    ofstream ok1;
    s+="_com.txt";

    ok1.open(s.c_str());
ifstream x,read(s.c_str());

    for(int i=0;i<names.size();i++)
    {            ifstream y;

        if(nw!=names[i])
        {
            x.open(b.c_str());
         //   cout<<"Chl " <<b;
            a=names[i]+".txt";
            string un="",l="";
            int cn=0;
            y.open(a.c_str());
             while(getline(x,l) && getline(y,un))
            {
                    if(un==l && un!="")
                    {
                        cn++;
                    }

            }
            ok1<<names[i]<<" "<<(cn*100/co)<<"%"<<endl;
            }
            x.close();
            y.close();

    }
    string o;
    cout<<"\n\t\t=============[Showing Result]=================\n"<<endl;

    x.close();
    ok1.close();

    ok.open(s.c_str());
    while(getline(ok,s))
    {
        if(s=="")break;
        printf("\t\t");

        cout<<s<<endl;
    }
    ok.close();
    }

void Add(string s)
{
    ofstream ok;
    ok.open(s.c_str());
    string x,y;
    printf("\n\t\t[Please Fill up the info.]\n\t\tName: ");
    getline(cin,x);
    ok<<x<<endl;
    printf("\t\tInstitution: ");
    getline(cin,x);
    ok<<x<<'\n';
    printf("\t\tProfession: ");
    getline(cin,x);
    ok<<x<<'\n';

    printf("\t\tReligion: ");
    getline(cin,x);
    ok<<x<<'\n';
    printf("\t\tMarital Status: ");
    getline(cin,x);
    ok<<x<<'\n';
    printf("\t\tHobby: ");
    getline(cin,x);
    ok<<x<<'\n';
    printf("\t\tBirth Place: ");
    getline(cin,x);
    ok<<x<<'\n';
    printf("\t\tNationality: ");
    getline(cin,x);
    ok<<x<<'\n';
    printf("\t\tLanguage: ");
    getline(cin,x);
    ok<<x<<'\n';
    printf("\t\t[Thank you]\n");
    ok.close();

}
void New()
{
    string a,b,s;
    char c;

    cout<<"\n\t\tEnter the new person to add: ";
    cin.ignore();
    getline(cin,a);
    s=a+".txt";
    ofstream out(s.c_str());
    cout<<"\t\t"<<a<< " is added"<<endl;

    out.close();
    Add(s);

 fstream filestr;

  filestr.open ("lis.txt", fstream::app);

  filestr<<a<<" "<<b<<endl;
    filestr.close();

}
void view()
{

    cout<<" ";
	for(int i=0;i<115;i++)
		cout<<"=";
		puts("");
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<116;j++)
		{
            if(j==0 ||j==115)
                cout<<"|";
                cout<<" ";
		}
		puts("");
	}

        cout<<" ";
            for(int i=0;i<22;i++)
            {
                cout<<"<<";
            }
            cout<<" Project : #PeopleSimilarity ";
            for(int i=0;i<21;i++)
            {
                cout<<">>";
            }
            puts("");
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<116;j++)
		{
            if(j==0 ||j==115)
                cout<<"|";
                cout<<" ";
		}
		puts("");
	}
cout<<" ";
	for(int i=0;i<115;i++)
		cout<<"=";
    cout<<endl<<endl<<endl;
    cout<<" ";
    for(int i=0;i<115;i++)
        cout<<"=";
        puts("");
    cout<<"    Peoplesimilarity is a project which focuses on identifying analogous historical figures. The idea is based on           various factors which is used to find the similarity between public figures."<<endl<<" ";
for(int i=0;i<115;i++)
		cout<<"=";
cout<<endl<<endl;

    init();
}
int  main()
{

    view();
    int x,f=0;
    while(1)
    {
            choice();
            cin>>x;
            if(x>3)
            choice();
        if(x==3)
        {
            return puts("\n\t\tThanks for using the features"),0;
        }
        else{
            if(x==1)
                Read();
            else New();
        }

    }
    return 0;
}
