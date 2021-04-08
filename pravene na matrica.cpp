#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#define dolu 1
#define dqsno 2
#define gore 3
#define lqwo 4
using namespace std;
 
int main(int argc, char *argv[])
{
    int a;
    cout<<"Strana na kwadratnata matrica: ";
    cin>>a;
    int matrix[a][a],r,k,x=1,n=a;
    int r_dqsno=n-1, r_lqwo=0, k_dolu=0, k_gore=n-1;
    int posoka=dolu;
    for (r=0; r<a; r++)
        for (k=0; k<a; k++)
            matrix[r][k]=0;
    while (x<=a*a)
    {
          switch (posoka){
               case (dolu):  k=k_dolu++;
                             for ( r=0; r<n; r++ )
                             if (matrix[r][k]==0)
                             matrix[r][k]=x++;
                             posoka=dqsno;
                             break;
                                            
               case (dqsno): r=r_dqsno--;
                             for ( k=0; k<n; k++)
                             if (matrix[r][k]==0)
                             matrix[r][k] = x++;
                             posoka=gore;
                             break;      
                
               case (gore):  k=k_gore--;
                             for (r=n-1; r>=0; r--)
                             if (matrix[r][k]==0)
                             matrix[r][k]=x++;
                             posoka=lqwo;
                             break;
                            
               case (lqwo):  r=r_lqwo++;
                             for (k=n-1; k>0; k--)
                             if (matrix[r][k]==0)
                             matrix[r][k]=x++;
                             posoka=dolu;
                             break;
              }
          
    }
    for ( r=0; r<a;r++)
    {
        for ( k=0; k<a; k++)
        cout<<setw(3)<<matrix[r][k]<<" ";
        cout<<endl;
    }
             
              
    system("PAUSE");
    return 0;
}
