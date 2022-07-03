#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    
    const int seq_size = 18;
    vector <int> pell_Seq(seq_size);
    pell_Seq[0]=1;
    pell_Seq[1]=2;
    for (int index = 1; i < seq_size; index++)
    {
        pell_Seq[index]=2*pell_Seq[index-1]+pell_Seq[index-2];
    }
    cout<<"the first" <<pell_Seq.size()<<"element of the pell series:";
    for (int index = 0; index < seq_size; index++)
    {
        cout<<pell_Seq[index]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}