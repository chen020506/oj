 < str.size(); i++)
	{
		a[str[i]]++; 
        cout<<str[i];
	}
    for(int i=0;i<10;i++)
    {
        if(a[i]-48!=0)
        {
            printf("%d:%c\n",i,a[i]);
        }
    }
    return 0;
}