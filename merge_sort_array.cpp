#include<iostream>
#include<vector>
using namespace std;

class Mergesort
{
public:
   /* vector<int> takeinput1(vector<int> &v1)
    {
        int n,a;
        cout<<"enter the size of v1:  "<<endl;
        cin>>n;
        cout<<"enter the sorted elements: "<<endl;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);

        }
        return v1;

    }
    vector<int> takeinput2(vector<int> &v2)
    {

        int n,a;
        cout<<"enter the size of v2:  "<<endl;
        cin>>n;
        cout<<"enter the sorted elements: "<<endl;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v2.push_back(a);

        }
        return v2;
    } */

    vector<int> mergesorted(vector<int> &v1, int m ,vector<int> &v2, int n)
    {

        int i=m-1;
        int j=n-1;
        int k=m+n-1;

        while(i>=0 && j>=0)
        {
            if(v1[i]>v2[j])
            {
                v1[k]=v1[i];
                i--;
            }

            else
            {
                v1[k]=v2[j];
                j--;
            }
               k--;
        }

        while(j>=0)
        {
            v1[k]=v2[j];
            k--;
            j--;
        }
        return v1;
    }

    void show(vector<int> &v1)
    {
        cout<<"showing merged array: "<<endl;
        for(int i=0; i<8; i++)
        {
            cout<<v1[i]<<" ";
        }
    }

};
int main()
{
    vector<int> v1={1,3,5,6,9};
    vector<int> v2={2,7,10};
   // vector<int> v2;

    Mergesort obj;
    //obj.takeinput1(v1,7);
   // obj.takeinput2(v2);
   obj.mergesorted(v1,5,v2,3);
    obj.show(v1);

}
