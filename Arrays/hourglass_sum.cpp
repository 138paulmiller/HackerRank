// https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int sum ;
    int maxSum = numeric_limits<int>::min();
    for(int j = 1; j < arr.size()-1; j++)
        for(int i = 1; i < arr[j].size()-1; i++)
        {
             sum = 
                arr[j-1][i-1] + arr[j-1][i] + arr[j-1][i+1] +
                                arr[j][i]   +
                arr[j+1][i-1] + arr[j+1][i] + arr[j+1][i+1];
            if( maxSum < sum) maxSum = sum;
        }
    return maxSum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
