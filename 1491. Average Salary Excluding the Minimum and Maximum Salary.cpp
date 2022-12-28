class Solution {
public:
    double average(vector<int>& vtr) {
        //   Unique Solution
        int min=INT_MAX;
        int max=0;
        for(int i=0;i<vtr.size();i++){
            if(vtr[i]>max){
                max=vtr[i];
            }
            if(vtr[i]<min){
                min=vtr[i];
            }
        }
        return (accumulate(vtr.begin(),vtr.end(),0.0)-min-max)/(vtr.size()-2);






        
        // ////////////// Selection Sort
        // int min=0;
        // for (int m = 0; m < vtr.size(); m++)
        // {
        //     min=m;
        //     for (int i = m+1; i < vtr.size(); i++)
        //     {
        //         if (vtr[i] < vtr[min] )
        //         {
        //             min=i;
        //         }
        //     }
        //     swap(vtr[m],vtr[min]);
        //     min=0;
        // }
        // return accumulate(vtr.begin()+1,vtr.end()-1,0.0)/(vtr.size()-2);        //   10ms || 12%

        
        // /////////////////// Bubble Sort
        // bool flag = true;
        // for (int m = 0; m < vtr.size(); m++)
        // {
        //     for (int i = 0; i < vtr.size() - m - 1; i++)
        //     {
        //         if (vtr[i] > vtr[i + 1])
        //         {
        //             swap(vtr[i], vtr[i + 1]);
        //             flag = false;
        //         }
        //     }
        //     if (flag)
        //         break;
        // }
        // return accumulate(vtr.begin()+1,vtr.end()-1,0.0)/(vtr.size()-2);      //   0ms || 100%

        
        // //////////// Insertion Sort
        // for (int m = 1; m <= vtr.size(); m++)
        // {
        //     for (int i = m-1; i > 0; i--)
        //     {
        //         if (vtr[i-1] > vtr[i])
        //         {
        //             swap(vtr[i-1], vtr[i]);
        //         }
        //         else
        //             break;
        //     }
        // }
        // return accumulate(vtr.begin()+1,vtr.end()-1,0.0)/(vtr.size()-2);      //   7ms || 40%

        // /////////////// Merge Sort
        // sort(vtr.begin(),vtr.end());
        // return accumulate(vtr.begin()+1,vtr.end()-1,0.0)/(vtr.size()-2);      //   0ms || 100%
    }
};