
int combination(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;

    long long result = 1;
    r = min(r, n - r); // nCr is same as nC(n-r)

    for (int i = 0; i < r; ++i)
    {
        result *= (n - i);
        result /= (i + 1);
    }

    return static_cast<int>(result); // Cast to int if needed
}