
    {
        if (arr[midPoint] == key)
        {
            cout << "the element is in the index " << midPoint;
        }
        else if (arr[midPoint] > key)
        {
            end = midPoint - 1;
        }
        else (