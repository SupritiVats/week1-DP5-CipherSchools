
#include<iostream>
#include<vector>
using namespace std;

int firstoccurence(vector<int> &v, int start, int end, int target)
{
    if(start>end)
    {
        return -1;
    }
    else if(start==end)
    {
        return (v[start]==target ? start: -1);
    }

    else
    {

        int mid=start+(end-start)/2;
        if(v[mid]<target)
        {

            return firstoccurence(v,mid+1,end,target);
        }

        else if(v[mid]>target)
        {
            return firstoccurence(v,start, mid-1,target);
        }
        else
        {
            if((mid==0) || (mid>=1 && v[mid-1]<v[mid]))
            {
                return mid;
            }
                return firstoccurence(v,start, mid-1,target);

        }
    }

}
int lastoccurence(vector<int> &v, int start, int end, int target)
{
   if(start>end)
    {
        return -1;
    }
    else if(start==end)
    {
        return (v[start]==target ? start: -1);
    }

    else
    {

        int mid=start+(end-start)/2;
        if(v[mid]<target)
        {

            return lastoccurence(v,mid+1,end,target);
        }

        else if(v[mid]>target)
        {
            return lastoccurence(v,start, mid-1,target);
        }
        else
        {
            if((mid==end) || (mid+1<=end && v[mid] < v[mid+1]))
            {
                return mid;
            }
                return lastoccurence(v, mid+1 ,end, target);

        }
    }
}

vector<int> myfunc(vector<int> &v, int target)
{


     int first=firstoccurence(v, 0, v.size()-1, target);
     int last=lastoccurence(v, first, v.size()-1, target);
     //vector<int> ans=myfunc()

     return{first,last};

}
int main()
{              vector<int> v={1,3,5,6,6,6,6,9};
           vector<int> ans=myfunc(v,6);

           for(int i=0; i<2; i++)
           {

               cout<<ans[i]<<endl;
           }

}
