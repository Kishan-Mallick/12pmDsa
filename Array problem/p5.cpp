#include<bits/stdc++.h>
using namespace std;
int trap(vector<int> arr)
{
    int totalWater = 0;
    for(int i=1;i<arr.size()-1;i++)
    {
        int j = i-1;
        int leftMax = arr[j]; 
        while(j >= 0)
        {
            if(arr[j] > leftMax)
            {
                leftMax = arr[j];
            }
            j--;
        }

        int k = i+1;
        int rightMax = arr[k]; 
        while(k < arr.size())
        {
            if(arr[k] > rightMax)
            {
                rightMax = arr[k];
            }
            k++;
        }

        int water = min(leftMax,rightMax) - arr[i];
        if(water > 0)
        {
            totalWater += water;
        }
    }
    return totalWater;
}
int main()
{
    vector<int> arr = {4,2,0,3,2,5};
    int water = trap(arr);

    cout<<water<<endl;
}