#include <iostream>
using namespace::std;
main()
{
    int A[20];
    int i, j, nilai,batas,baru,a,b,c,d,k;
    cout<< "NIM MAHASISWA ELEKTRO UTY";
   cout<<"\nJumlah NIM yang akan dimasukan : ";cin>>batas;
   cout<<"\n==========================================================================";
   cout<<endl;


    for(i=0;i<batas;i++)
    {
        cout<<"\nNIM yang ke ["<<i<<"]= ";cin>>A[i];
    }
    cout<<endl;

    cout<<"\nMasukkan NIM yang akan dicari= ";
    cin>>nilai;

    for(j=0;j<batas;j++)
    {
    if(A[j]==nilai)
    {
    cout<<"\nNIM yang dicari terdapat pada nomor urut ["<<j<<"]";
    }
   }
   cout<<"\n\n============================================================================";

cout<<endl;
cout<<"\nMasukkan NIM yang ingin diganti : ";
cin>>c;
cout<<"\nMasukkan data pengganti : ";
cin>>baru;
a = c;
A[a] = baru;
cout<<"\nData yang baru  : \n";

for(b=0;b<batas;b++)
{
 cout<<"\nData["<<b<<"]="<<A[b]<<"\n";
}

cout<<"\n============================================================================";
cout<<endl;
cout<<"\nMasukkan NIM yang ingin dihapus : ";
cin>>d;
i=d;
cout<<"\nNilai yang dihapus : ";
cout<<" "<<A[i]<<" pada NIM ["<<i<<"] \n";
cout<<"\nNilai akhir : \n";
for(j=d;j<batas;j++)
{
 A[j]=A[j+1];
}
for(k=0;k<batas-1;k++)
{
 cout<<"\nData["<<k<<"]="<<A[k];
}
}
