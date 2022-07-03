#include <iostream>
#include <string>

using namespace std;
int main()
{
    string user_name;
    int val = 0;
    int num_tries = 0;
    int user_guess = 0;
    int num_right(0);
    double user_score=0.0;
    char user_more;
    char user_rsp;
    bool go_for_it=true;
    bool got_it=true;
    bool next_seq=true;

    const int max_tries=3;
    const int seq_size=18;
    const int max_seq=6;
    int elem_seq[seq_size]={
        1,2,3,
        3,4,7,
        2,5,12,
        3,6,10,
        4,9,16,
        5,12,22
    };
    string seq_name[max_seq]=
    {
        "Fibonacci",
        "Lucas",
        "Pell",
        "Triangular",
        "Square",
        "Pentagona"
    };
    int cur_index= 0;
    while (next_seq == true && cur_index<seq_size)
    {
        cout<<"the first 2 elements of the sequence are:"<< elem_seq[cur_index]<<","<< elem_seq[cur_index+1]<<endl;
        cout<<"what is hte next element? ";
        int tries_cnt=0;
        next_seq=true;
        go_for_it=true;
        got_it=false;
        while (!got_it&&go_for_it&&(++tries_cnt<=max_tries))
        {   if (user_guess==elem_seq[cur_index+2])
        {
            ++num_right;
            got_it=true;
        }else{
            switch (tries_cnt)
            {
            case 1:
                cout<<"Oops,Nice guess but not quite it."<<endl;
                break;
            case 2:
                cout<<"Sorry.Wrong a second time."<<endl;
                break;
            case 3:
                cout<<"Ah,this is  harder than it looks,isn't it?"<<endl;
                break;
        
            default:
                cout<<"It must be getting pretty frustrating by more tries."<<endl;
                break;
            }
        }
        cout<<"do you want to continue?(y/n):"<<endl;
        cin >> user_rsp;
        if (user_rsp=='y'||user_rsp=='Y')
            {
            go_for_it=true;
            }else if (user_rsp=='n'||user_rsp=='N')
                {
            go_for_it=false;
                }
    
        }
    }
    return 0;
}
