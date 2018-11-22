#include <iostream>
using namespace std;
//pascal triangle
int pascal(int row,int col)
{
    if(row ==col || col==0 )
    {
        return 1;
    }
    else
        return pascal(row-1,col)+pascal(row-1,col-1);//to output the number output above the number below two number
}
int main()
{
    //user will input the row he want
    int row ;
    cout<<"Enter number of row : ";
    cin>>row;
    for(int i=0 ; i<row ; i++)
    {
        for(int k= row - i - 1  ; k>0 ; k--)
        {
            cout<<" "; // cout<<space
        }
        for(int j=0 ; j<= i ; j++) // special for the output of triangle
        {
            cout<<pascal(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

