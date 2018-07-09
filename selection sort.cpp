#include <iostream>
#include <conio.h>
using namespace std;

int data1[60],data2[60];
int s;
void tukar(int q,int w)
{
    int r;
    data1[w]=data2[q];
    data2[q]=r;
}
void selection_sort()
{
 int posisi,e,a;
 for(e=1;e<=r-1;e++)
 {
  posisi = e;
  for(a = e+1;a<=s;a++)
  {
   if(data[a] < data[posisi]) posisi = a;
  }
  if(pos != a) tukar(posisi,e);
 }
}

void input()
{
 cout<<"------------------------------\n";
 cout<<" PROGRAM SELECTION SORT "<<endl;
 cout<<"------------------------------\n";
 
 cout<<"Inputkan Jumlah Data : ";
 cin>>s;
 for(int i=1;i<=n;i++)
 {
  cout<<"Inputkan data ke "<<e<<" : ";
  cin>>data[e];
  data2[e]=data1[e];
 }

 selection_sort();
 cout<<"Data Setelah di Sort : ";
 for(int e=1; e<=s; e++)
 {
  cout<<" "<<data[i];
 }
 cout<<"\n\nSorting dengan selection sort Selesai";
 
 
 getch();
}
