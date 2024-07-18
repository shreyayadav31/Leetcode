class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int buy=prices[0],profit;
		if(prices.size()==0|| prices.size()==1){
			return 0;
		}

		for(int i=0;i<prices.size();i++){
			if(buy>prices[i]){          //execute for decreasing order
				buy=prices[i];     //minimum
			}
			else if( profit <prices[i]-buy){     //will not execute descreasing order
				profit=prices[i]-buy;          //maximum profit
			}			
		}
		return profit;
	}
};
