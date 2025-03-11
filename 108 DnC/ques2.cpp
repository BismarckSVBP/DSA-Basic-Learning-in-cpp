void merg(vector<int> prr, vector<int> qrr, int start, int end, vector<int> &brr)
{
    int l1 = prr.size();
    int l2 = qrr.size();
    int n = 0;
    int o = 0;

    for (int m = start; m < end; m++)
    {
        if (n < l1 && o < l2)
        {
            if (prr[n] > qrr[o])
            {
                brr.push_back(qrr[o]);
                o++;
            }
            else
            {
                brr.push_back(prr[n]);
                n++;
            }
        }
        else if (o < l2)
        {

            brr.push_back(qrr[o]);
            o++;
        }

        else if (n < l1)
        {

            brr.push_back(prr[n]);
            n++;
        }
    }
    return;
}