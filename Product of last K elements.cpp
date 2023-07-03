// Leetcode 1352    Product of last K elements    @devottam2809

class ProductOfNumbers {
public:
vector<int>ans;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
        int ANS=1;
        int n=ans.size();
        for(int i=0;i<k;i++)
            ANS*=ans[n-i-1];
    return ANS;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
