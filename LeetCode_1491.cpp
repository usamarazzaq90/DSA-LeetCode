class Solution {
public:
    double average(vector<int>& salary) {
        //Selection Sort
        for(int i=0;i<salary.size()-1;i++){
            int minI=i;
            for(int j=i+1;j<salary.size();j++){
                if(salary[j]<salary[minI]){
                    minI=j;
                }
            }
            if(minI!=i){
                swap(salary[i],salary[minI]);
            }
        }
        double count=0;
        double sum=0;
        for(int k=1;k<salary.size()-1;k++){
            count++;
            sum=sum+salary[k];
        }
        return sum/count;
    }
};
