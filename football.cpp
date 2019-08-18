#include <iostream>
using namespace std;
int main()
{
   
    int n,j,k=0,players;
     cin>>n;                        //total number of iterations
    int final_score[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>players;               //total number of players
        int goal[players]={0};
        for(j=0;j<players;j++)
        {
            cin>>goal[j];           //array storing goals of each player
        }
        int foul[players]={0};
        for(j=0;j<players;j++)
        {
            cin>>foul[j];           //array storing fouls of each player
        }
        
        int score[players]={0};
        for(j=0;j<players;j++)
        {
            score[j] =  20*goal[j] - 10*foul[j];   //calculation of score
        }
        
        int max=score[0];                       //
        for(j=0;j<players;j++)                  //
        {                                       //
            if(max < score[j])                  //
            {                                   //max function storing maximum 
                max=score[j];                   //value in an array(final_score)
            }                                   //
        }                                       //
        final_score[k]=max;                     //
        k++;                                    //
    }
    for(j=0;j<n;j++)
    {
        if(final_score[j] >= 0)
         cout<<final_score[j]<<endl;            //printing max array
        else
         cout<<0<<endl;
    }
    return 0 ;
}
