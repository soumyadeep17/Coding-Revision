int majorityElement(int arr[], const int size)
{
    int counter[1000000] = {0};
    for (int i = 0; i<size ; i++)
        counter[arr[i]]++ ;
    for (int i = 0; i<size ; i++)   
    {
    if (counter[i]>size/2)
    return i;
    }
    return -1;
}