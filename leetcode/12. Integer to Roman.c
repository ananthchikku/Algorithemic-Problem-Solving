void rvereseArray(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}  

char * intToRoman(int num){

    int temp=num,digit=0;
    
    
    while(temp)
    {
        digit++;
        temp/=10;
    }
    
    temp=num;
    
    int a[4],i;
    
    memset(a,0,sizeof(a));
    
    for(i=0;i<digit;i++)
    {
        a[i] = temp%10;
        temp/=10;
        
    }
    while(digit<4)
    {
        a[digit]=0;
        digit++;
    }
   
    rvereseArray(a,0,digit-1);
    
    char *str = (char *)malloc(50* sizeof(char));
    
    memset(str,0,sizeof(str));
    
        while(a[0])
        {
            strcat(str,"M");
            a[0]--;
        }
    
    if(a[1]<=3)
        while(a[1])
        {
            strcat(str,"C");
            a[1]--;
        }
    else if(a[1]==4)
        strcat(str,"CD");
    else if(a[1]<9)
    {
        strcat(str,"D");
        a[1]-=5;
        while(a[1])
        {
            strcat(str,"C");
            a[1]--;
        }
    }
    else
        strcat(str,"CM");
    
    
    if(a[2]<=3)
        while(a[2])
        {
            strcat(str,"X");
            a[2]--;
        }
    else if(a[2]==4)
        strcat(str,"XL");
    else if(a[2]<9)
    {
        strcat(str,"L");
        a[2]-=5;
        while(a[2])
        {
            strcat(str,"X");
            a[2]--;
        }
    }
    else
        strcat(str,"XC");
        
    
    
     if(a[3]<=3)
        while(a[3])
        {
            strcat(str,"I");
            a[3]--;
        }
    else if(a[3]==4)
        strcat(str,"IV");
    else if(a[3]<9)
    {
        strcat(str,"V");
        a[3]-=5;
        while(a[3])
        {
            strcat(str,"I");
            a[3]--;
        }
    }
    else
        strcat(str,"IX");
        
    
    printf("%s",str);
    return str;
    
    
}
