class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int seconds = 0;
        int j=0;
        while (tickets[k] > 0)
        {
            if (tickets[j] > 0)
            {
                tickets[j] -= 1;
                seconds++;
            }
            j=(j+1)%tickets.size();
        }
        return seconds;
    }
};