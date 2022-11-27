#include <bits/stdc++.h>

using namespace std;

ifstream fin("wordle_cuvinte1");
ifstream fin1("patterns");

int a[243][6],aclona[243][6];
int a1[6],a2[6];
float aparitii_patternuri[243];
float v1[12000],v2[12000];
int contorincercari=1;

int main()
{
    char v[12000][6];
    char s[6],x[6];
    int m=0,suma=0;
    int i,j,i1,counter;
    float maxim=0;
    while(fin.getline(v[m], 6))m++;
    for(i=0;i<243;i++)
        for(j=0;j<=4;j++)fin1>>a[i][j];
   /* for(m=0;m<11454;m++)
    {
        strcpy(s, v[m]);
        cout<<s;
       for(i1=0;i1<11454;i1++)
       {
           strcpy(x, v[i1]);
           for(int i=0;i<=4;i++)
            if(s[i]==x[i])a1[i]=2;
            else for(int j=0;j<=4;j++)if(s[j]==x[i])a1[j]=1;
           //for(i=0;i<5;i++)cout<<a1[i]<<" ";
           //cout<<endl;
           for(i=0;i<243;i++)
        if(a[i][0]==a1[0]&&a[i][1]==a1[1]&&a[i][2]==a1[2]&&a[i][3]==a1[3]&&a[i][4]==a1[4])aparitii_patternuri[i]++;
           for(int i=0;i<=4;i++)a1[i]=0;
       }
       for(i=0;i<243;i++)
        {
        if(aparitii_patternuri[i]!=0)v1[m]=v1[m]+(aparitii_patternuri[i]/11454)*log2(11454/aparitii_patternuri[i]);
        }
        //for(i=0;i<243;i++){
            //cout<<aparitii_patternuri[i]<<endl;
            //suma=suma+aparitii_patternuri[i];}
            //cout<<suma<<endl;
            //cout<<v1[7];
        for(i=0;i<243;i++)aparitii_patternuri[i]=0;
    }

    //for(i=0;i<243;i++){
        //for(j=0;j<=4;j++)cout<<a[i][j]<<" ";
        //cout<<endl;}
    //for(i=0;i<11454;i++)cout<<v[i]<<endl;
    for(i=0;i<11454;i++){if(v1[i]>maxim){maxim=v1[i];counter=i;}cout<<v1[i]<<" "<<i<<endl;}
    cout<<maxim<<" "<<counter<<" "<<v[counter]<<'\n';
*/
    srand((unsigned)time(NULL));
    int l1=(rand()%10+(rand()%10)*10+(rand()%10)*100+(rand()%10)*1000+(rand()%10)*10000)%11454;
    char y[6];
    counter=11999;
    strcpy(y, v[l1]);
    cout<<"cuvantul cautat este "<<y<<endl;
    strcpy(v[counter], "TAREI");
while(true){
    strcpy(s, v[counter]);
    //strcpy(s, "TAREI");
    maxim=0;
    counter=0;
    //for(j=0;j<5;j++)cin>>a2[j];
    for(i=0;i<=4;i++)
            if(s[i]==y[i])a2[i]=2;
            else for(j=0;j<=4;j++)if(y[j]==s[i])a2[i]=1;
            cout<<s<<"         ";
         for(i=0;i<=4;i++)cout<<a2[i]<<" ";
         cout<<endl;
    if(a2[0]==2&&a2[1]==2&&a2[2]==2&&a2[3]==2&&a2[4]==2){for(i=0;i<=4;i++)a2[i]=0;break;}
    suma=a2[0]+a2[1]+a2[2]+a2[3]+a2[4];
    for(i=0;i<11454;i++)v1[i]=0;
    for(i1=0;i1<11454;i1++)
    {

        strcpy(x, v[i1]);
        for(j=0;j<5;j++)
        {
            if(a2[j]==2&&s[j]!=x[j])strcpy(v[i1], "     ");
            if(a2[j]==1&&(strchr(x,s[j])==0||s[j]==x[j]))strcpy(v[i1], "     ");
            if(a2[j]==0&&strchr(x,s[j])!=0)strcpy(v[i1], "     ");
        }
        for(i=0;i<243;i++)
        {
            for(j=0;j<5;j++)if(a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4]<suma)for(j=0;j<5;j++)a[i][j]=5;
            for(j=0;j<5;j++)if(a[i][j]!=2&&a2[j]==2)for(j=0;j<5;j++)a[i][j]=5;
        }

    }
    //lista noua
//for(i=0;i<11454;i++)cout<<v[i]<<'\n';
    //for(i=0;i<243;i++){
        //for(j=0;j<=4;j++)cout<<a[i][j]<<" ";
        //cout<<endl;}



    for(m=0;m<11454;m++)
    {
        if(strcmp(v[m],"     ")!=0){strcpy(s, v[m]);
       for(i1=0;i1<11454;i1++)
       {
           strcpy(x, v[i1]);
           for(int i=0;i<=4;i++)
            if(s[i]==x[i])a1[i]=2;
            else for(int j=0;j<=4;j++)if(s[i]==x[j])a1[j]=1;
           //for(i=0;i<5;i++)cout<<a1[i]<<" ";
           //cout<<endl;
           for(i=0;i<243;i++)
        if(a[i][0]!=5)if(a[i][0]==a1[0]&&a[i][1]==a1[1]&&a[i][2]==a1[2]&&a[i][3]==a1[3]&&a[i][4]==a1[4])aparitii_patternuri[i]++;
           for(int i=0;i<=4;i++)a1[i]=0;
       }
       for(i=0;i<243;i++)
        {
        if(aparitii_patternuri[i]!=0)v1[m]=v1[m]+(aparitii_patternuri[i]/11454)*log2(11454/aparitii_patternuri[i]);
        }
        //for(i=0;i<243;i++){
            //cout<<aparitii_patternuri[i]<<endl;
            //suma=suma+aparitii_patternuri[i];}
            //cout<<suma<<endl;
            //cout<<v1[7];
        for(i=0;i<243;i++)aparitii_patternuri[i]=0;}
    }
    for(i=0;i<11454;i++)if(v1[i]>maxim){maxim=v1[i];counter=i;}/*cout<<v1[i]<<" "<<i<<endl;*/
    contorincercari++;
    for(i=0;i<=4;i++)a2[i]=0;
}
    //for(i=0;i<11454;i++)v1[i]=0;
    //for(i=0;i<11454;i++)cout<<v[i]<<'\n';
    //for(i=0;i<243;i++){
        //for(j=0;j<=4;j++)cout<<a[i][j]<<" ";
        //cout<<endl;}
        cout<<"cuvantul "<<s<<" a fost gasit in "<<contorincercari<<" incercari"<<endl;
    return 0;
}
