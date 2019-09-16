	
	int i,j,up,ch;
	Employee arr[4];
	for(i=0;i<4;i++)
	{
		arr[i].Accept();
		
	}

	for(j=0;j<4;j++)
	{
		arr[j].Display();
		cout<<"Array call OP--->"<<j<<endl;

	}
	cout<<"Enter the emp_id to be updated"<<endl;
	cin>>up;
	arr[up].Accept();
