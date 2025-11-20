#include <iostream> 
#include <vector>

bool isSorted(const std::vector<int>& v)
{
    for (int i=0; i < v.size()-1; i++)
    {
        if(v[i] > v[i+1])
        {
            return false;
        }
    }
    return true;
}

bool subSum(const std::vector<int>& nums, const std::vector<int>& indices, int target)
{
    int sum = 0;
    for (int i=0; i < indices.size(); i++)
    {
        int index = indices[i];
        if (index < 0)
        {
            return false;
        }
        if (index >= nums.size())
        {
            return false;
        }
        sum += nums[index];
    }
    return sum == target;
}

bool isPrime(int n)
{
    if (n<=1)
        return false;
    if (n==2)
        return true;
    
    for (int i=2; i* i<= n; i++)
        {
            if (n%i == 0)
                return false;
        }
        return true;
}

bool checkPrime(int num, const std::vector<int>& facs)
{
    int product = 1;
    for(int i = 0; i < facs.size(); i++)
    {
        if (!isPrime(facs[i]))
        {
            return false;
        }
        product*= facs[i];
    }
    return product == num;
}