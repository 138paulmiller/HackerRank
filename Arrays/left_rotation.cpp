//https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) 
{
    vector<int> res;
    int n = a.size();
    int pivot = d % n;
    res.resize(n);
    for(int i = 0;i < n; i++)
        res[i] = a[(i+pivot)%n];
    return res;
}
