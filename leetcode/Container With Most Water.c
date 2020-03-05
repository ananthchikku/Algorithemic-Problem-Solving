
int mymin(int a,int b)
{
    return (a<=b)?( a):( b);
}
int maxArea(int* height, int heightSize){

    int max = INT_MIN;
    int i=0, j=heightSize-1;
    int temp;
    while(i<j)
    {
        temp = mymin(height[i],height[j])*(j-i);
        if(temp>max)
            max=temp;
        if(height[i]<height[j])
            i++;
        else
            j--;
    }
    
    return max;
}

