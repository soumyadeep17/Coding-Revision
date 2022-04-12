
    long long findMinDiff(vector<long long> a, long long n, long long m){
    long long v;
    long long x;
    sort(a.begin(), a.end());
    v = a[m-1] -a[0];
    for (int i = 1; i<n-m+1; i++)
    {
        x = a[i+m-1] - a[i];
        if (x<v)
        v = x;
    }
    return v;
    
    }   
};