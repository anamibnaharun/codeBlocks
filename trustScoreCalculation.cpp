#include<bits/stdc++.h>
using namespace std;
void updateValidatorTrustScore(pair<long long int,double>& node, queue<pair<long long int,double> >& validator,long long int createdBlockNumber)
  {
      long long int beta_tv_score=0;

        //double beta_tv_score=0.0;
       long long int TC_b=25.0*(-1);
    //System.out.println("TC_b = "+TC_b);
    double TC_b_score=((10/(1+exp(TC_b)))-5)*2;
       //System.out.println("TC_b_score = "+TC_b_score);
       long long int TT=5;
    //System.out.println("TT = "+TT);
       double TT_score=((10/(1+exp(
              (  double)(TT*(-1) )
                )))   -5)*2;

    //System.out.println("TT_score = "+TT_score);

     double avgTrust=(beta_tv_score+TC_b_score+TT_score)/2;
    //System.out.println("avgTrust = "+avgTrust);
     double temp=0;
     int counti=0;
     pair<long long int,long long int> frontNode=validator.front();
     validator.pop();
    while(node.first!=frontNode.first)
    {
        temp+=((avgTrust*node.second)/5);
        counti++;
        frontNode=validator.front();
        validator.pop();
    }
    validator.push(node);

     double tv_b=(temp/counti);
    //System.out.println("counti = "+counti);
    //System.out.println("tv_b = "+tv_b);
     double PTS_v=node.second;
     long long int PB_v=createdBlockNumber;
      //PB_v=1;
      //if(PB_v>0)System.out.println("PB_v = "+PB_v+"..........................................................................");
     double NTS_v=((PTS_v*PB_v)+tv_b)/(PB_v+1);
    //double NTS_v=(PTS_v+tv_b)/2;
    //System.out.println("NTS_v = "+NTS_v);
    node.second=NTS_v;
    return ;
  }
int main()
{
    queue<pair<long long int,double> >validators;
    validators.push(make_pair(1,3));
    validators.push(make_pair(2,3));
    validators.push(make_pair(3,3));
    validators.push(make_pair(4,3));
    validators.push(make_pair(5,3));
    long long int counti=0;
    while(counti<21)
    {
        pair<long long int,double> node=validators.front();
        validators.pop();
        validators.push(node);
        updateValidatorTrustScore(node,validators,counti/5);
        counti++;
        cout<<"Number of Block is : "<<counti<<endl;
        if(counti%5==0)
        {
            int c=0;
            while(c<5)
            {
            pair<long long int,double> frontNode=validators.front();
            validators.pop();
            cout<<frontNode.first<<" trust score is "<<frontNode.second<<endl;
            c++;
            }
        }
    }
}
