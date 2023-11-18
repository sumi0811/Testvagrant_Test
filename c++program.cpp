#include<iostream.h>
#include<conio.h>
using namespace std;
int Basket(vector<int> product,int unit_Price, int gst[],int quantity[])
{
    vector<int>ans;
    int amount=0;
    int n=product.size();
    sort(gst,gst+n);
    ans.push_back(gst[n-1]);
    //int max_gst=gst[n-1];
    for(int i=1;i<=n;i++)
    {
        
        amount=[(unit_Price[i]*max_gst)/100]*quantity;
    }
    for(int i=1;i<=n;i++)
    {
        if(amount[i-1]>amount[i])
        {
            ans.push_back(amount[i]);
            ans.push_back(product[i]);
        }
        
    }
    sort(ans.begin(),ans.end());
    int max_amount=ans[n-1];
    ans.push_back(max_amount);
    //max_amount=total[i];
    //ans.push_back(gst)
    return ans;
}