#include <bits/stdc++.h>
using namespace std;

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

// Function to generate sieve of Eratosthenes
// to find all prime numbers up to a specified integer 'n'
vector<int> getSieve(int n)
{
    // Create a Sieve with size 'n + 1'
    // and initialize all elements to 1,
    // assuming all numbers are prime initially
    vector<int> prime(n + 1, 1);
    // Mark 0 and 1 as not prime
    prime[0] = prime[1] = 0;

    // Iterate from 2 to the
    // square root of 'n'
    for (int i = 2; i <= sqrt(n); ++i)
    {
        // Check if the current
        // number 'i' is prime
        if (prime[i] == 1)
        {
            // Mark multiples of
            // 'i' as not prime
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    // Return the vector
    // containing prime indicators
    return prime;
}

// Function to count primes
// between given numbers in queries
vector<int> countPrimes(vector<vector<int>> &queries)
{
    // Generate sieve of Eratosthenes
    // up to a limit of 1000000
    vector<int> prime = getSieve(1000000);
    // Initialize vector 'ans' to store
    // the counts of primes for each query
    vector<int> ans;
    int cnt = 0;
    // Count the primes up to each index
    for (int i = 2; i < prime.size(); i++)
    {
        cnt = cnt + prime[i];
        prime[i] = cnt;
    }

    // Iterate through the queries
    for (int i = 0; i < queries.size(); i++)
    {
        int l = queries[i][0];
        int r = queries[i][1];
        // Calculate the count of primes
        // within the range [l, r]
        ans.push_back(prime[r] - prime[l - 1]);
    }
    return ans;
}

int main()
{
    int Q = 3;
    vector<vector<int>> queries = {{3, 10}, {8, 20}, {1, 5}};
    cout << "No. of Queries: " << queries.size() << endl;
    cout << "Queries: ";
    for (auto query : queries)
    {
        cout << "(" << query[0] << ", " << query[1] << ")  ";
    }

    vector<int> result = countPrimes(queries);

    cout << endl
         << "Number of primes between the ranges: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

int main()
{

    return 0;
}