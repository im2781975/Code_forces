int x;
		cout<<"enter no. of programs\n";
		cin>>x;
		float *arr=new float [x];
		float *bur=new float [x];
		float *bur2=new float [x];
		float *prr=new float [x];
		float *end=new float [x];
		int z=0,prrr=0;
		while(z++<x)
		{
			cout<<"enter the arrival time of p"<<z<<endl;
			cin>>arr[z-1];
			cout<<"and its burst time\n";
			cin>>bur[z-1];
			bur2[z-1]=bur[z-1];
						prrr+=bur[z-1];
			cout<<"and its priority\n";
			cin>>prr[z-1];
		}
arr[x]=1000000;
	int c=0,s=0,min=0,miny=0;
	    float *fin=new float [x];
	    z=0;
	    int max=0;
	    while(s++<x)
	    {
	    	end[s-1]=0;
	    }
	    s=0;
	    while(c<prrr)
	    {
	    	s=0,min=0;
	    	while(s++<x)
	    	if(arr[s-1]<=c&&end[s-1]==0&&prr[s-1]<prr[min]&&bur[s-1]>0)   	min=s-1;
	    	s=0;
	    //	if(c>=arr[max]) miny=arr[x];
	    //	else miny=min+1;
	    //	while(s++<x)
	    //	if(arr[miny]>=arr[s-1]&&arr[s-1]>=0&&s-1!=min) miny=s-1;

	    	bur[min]--;
	    		c++;

	    	if(bur[min]==0) {
	    	end[min]=1;
	    	fin[min]=c;
	    	prr[min]=100000;
			}
	    }
	    z=0;
	    while(z++<x) cout<<fin[z-1]<<endl;
	    z=0;
	    float suma=0,sumw=0;
	    while(z++<x)
		{
			float t=fin[z-1]-arr[z-1];
			float w=t-bur2[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
				//-----------------------------------------------------------------------------------
		/*int x;
		cout<<"enter no of process";
		cin>>x;
		int all[x][3],max[x][3],ava[1][3];
		int i,j;
		for(i=0;i<x;i++)
		{
			cout<<"enter the allocation of P"<<i+1<<" sperated each digit with a space\n";
			for(j=0;j<3;j++)
			cin>>all[i][j];
		}
		for(i=0;i<x;i++)
		{
			cout<<"enter the max. of P"<<i+1<<" sperated each digit with a space\n";
			for(j=0;j<3;j++)
			cin>>max[i][j];
		}
		cout<<"enter the available sperated each digit with a space\n";
		cin>>ava[0][0]>>ava[0][1]>>ava[0][2];
		for(i=0;i<x;i++){
		for(j=0;j<3;j++)
		max[i][j]-=all[i][j];}
		int z=0,c=0,min=0;
		while(z++<x)
		{
			for(i=0;i<x;i++)
			{
				c=0;
				for(j=0;j<3;j++)
				{
					if(max[i][j]<=ava[0][j]&&max[i][0]!=-1)
					c++;
					if(c==3)
					{
						min=i;
						goto dd;
					}
				}
			}
		dd:	if(c<3)
			{
				cout<<"The system is not in safe-state\n";
				return 0;
			}
			for(i=0;i<3;i++)
			ava[0][i]+=all[min][i];
			max[min][0]=-1;
			cout<<"P"<<min+1<<" &new work="<<ava[0][0]<<" "<<ava[0][1]<<" "<<ava[0][2];
			if(z!=x) cout<<" --->";
		}
		cout<<"\nThe system is in safe-state";*/
//-----------------------------------------------------------
       /*string s;
       int x;
       cin>>s;
       cin>>x;
       int z=0;
       string k="Final";
       while(z++<x)
       {
    	   if(z==1){
    		   cout<<s<<endl;
    		  s+='-';
    		   continue;
    	   }
    	   s+=k;
    	   if(z==x){
    		   s+="Wallahy";
    	      	   }
    	  if(z==x) cout<<s;
    	  else cout<<s<<endl;*/
//-------------------------------------------
       /* string x;
        string v="vaporeon",j="jolteon",f="flareon",e="espeon",u="umbreon",l="leafeon",g="glaceon",s="sylveon";
       cin>>x;
       int z=0,count[8]={0,0,0,0,0,0,0,0};
       while(z++<8)
       {
    	   if(x[0]!='.')
    	   {
    		                if(x[0]==v[0]) count[0]++;
    		                if(x[0]==j[0]) count[1]++;
    		                if(x[0]==f[0]) count[2]++;
    		                if(x[0]==e[0]) count[3]++;
    		                if(x[0]==u[0]) count[4]++;
    		                if(x[0]==l[0]) count[5]++;
    		                if(x[0]==g[0]) count[6]++;
    		                if(x[0]==s[0]) count[7]++;
    		                break;
    	   }
    	   if(x[z-1]!='.')
    	   {
    		   if(x[z-1]==v[z-1]) count[0]++;
    		   if(x[z-1]==j[z-1]) count[1]++;
    		   if(x[z-1]==f[z-1]) count[2]++;
    		   if(x[z-1]==e[z-1]) count[3]++;
    		   if(x[z-1]==u[z-1]) count[4]++;
    		   if(x[z-1]==l[z-1]) count[5]++;
    		   if(x[z-1]==g[z-1]) count[6]++;
    		   if(x[z-1]==s[z-1]) count[7]++;

    	   }
       }
       z=0;
       int max=0;
       while(z++<8)
    	   if(count[z-1]>count[max]) max=z-1;
       switch(max){
       case(0): {cout<<"vaporeon"; break;}
       case(1): {cout<<"jolteon"; break;}
       case(2): {cout<<"flareon"; break;}
       case(3): {cout<<"espeon"; break;}
       case(4): {cout<<"umbreon"; break;}
       case(5): {cout<<"leafeon"; break;}
       case(6): {cout<<"glaceon"; break;}
       case(7): {cout<<"sylveon"; break;}
       }*/
//----------------------------------------------------
     /* int x,z=0;
      cin>>x;
      string y[x];
      while(z++<x) cin>>y[z-1];
      int f,m;
      cin>>f;
      string name[f],d;
      int scr[f];
      z=0;
      while(z++<f) scr[z-1]=0;
      z=0;
      while(z++<f)
      {
    	  cin>>name[z-1];
    	  cin>>m;
    	  int dd=0;
    	  while(dd++<m)
    	  {
    		  cin>>d;
    		  int r=0;
    		  while(r++<x)
    			  if(d==y[r-1])
    				  scr[z-1]++;
    	  }
      }
      int max=0;
      z=1;
      while(z++<f)
      {
    	  if(scr[z-1]>scr[max]) max=z-1;
    	  if(scr[z-1]==scr[max])
    		  if(name[z-1]<name[max])
    			  max=z-1;
      }
      cout<<name[max];*/
//-----------------------------------------------
    /* int m,n,d=0;
     cin>>m>>n;
     string x,y,z,s,res[m*n];
     while(d++<m*n)
     {
    	 cin>>x>>y>>z;
    	 if(y=="0000000000"&&z=="0000000000") {
    		 if(d==1) cout<<x;
    		 else cout<<endl<<x;
    	 }
    	 else {if(z==s) cout<<x;
    	 if(z=="0000000000") cout<<endl<<x;
    	 }
    	 s=x;
     }*/
//--------------------------------------------------
     /*string s;
     getline(cin,s);
     unsigned int i;
     for(i=0;i<s.size();i++)
        	 s[i]=tolower(s[i]);
     for(i=0;i<s.size();i++)
     {
    	 if(s[i]<97||s[i]>122)
    	 {
    		 s.erase(i,1);
    		 i--;
    	 }
     }
     unsigned int z=0,c=0,f=s.size()-1;
     z=0;
     while(z++<s.size()/2)
     {
    	 if(s[z-1]!=s[f--])
    	 {
    		 c++;
    		 break;
    	 }
     }
     if(c==0) cout<<"I'll make the saddle";
     else cout<<"Alas, Jon, You failed my test";*/
//--------------------------------------------------------
     /*int x;
     string s;
     cin>>x>>s;

     if(s.size()<=x) cout<<s;
     else{
    	 cout<<s[0];
    	 if(s[0]==s[s.size()-1]&&s.size()-1>0)
    	 {
    		 cout<<s.size()-1;
    		 return 0;
    	 }
    	 else{
    		 if(s.size()-2>0) cout<<s.size()-2<<s[s.size()-1];
    		 else cout<<s[s.size()-1];
    	 }
     }*/
//------------------------------------------------------------
    /*string s;
    cin>>s;
    unsigned long long sum=0,sumn=0,z=0;
    while(z++<s.size())
    	sum+=(s[z-1]-48);
    while(true){
    	if(sum<10) break;
    	else{
    		sumn=0;
    		while(sum>0)
    		{
    			sumn+=sum%10;
    			sum/=10;
    		}
    		sum=sumn;
    	}
    }
    cout<<sum;*/
//---------------------------------------------------------
     /*string x,y;
     cin>>x>>y;
     int z=0,c=0;
     while(z++<x.size())
    	 if(x[z-1]!=y[z-1])
    		 c++;
     cout<<c;*/
//-----------------------------------------------------
    /* string s;
     int c=0,d=0,z=0;
     cin>>s;
    while(true)
    {
    	if(s[z]==s[++z]) c++;
    	else break;
    }
    while(z<s.size())
    {
    	d=0;
    	while(z<s.size())
    	{
    		if(s[z]==s[++z]) d++;
    		else break;
    	}
    	if(c!=d) {
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";*/
//------------------------------------------
     /*int x,z=0,maxl=0,maxch=0,maxchi=0;
     cin>>x;
     string s[x];
     while(z++<x)
    	 cin>>s[z-1];
     z=0;
     while(z++<x)
     {
    	 if(s[z-1].size()>=s[maxl].size()) maxl=z-1;
    	 int y=0;
    	 long long sum=0;
    	 while(y++<s[z-1].size())
    		 sum+=(s[z-1][y-1]-64);
    	 if(sum>=maxch)
    	 {
    		 maxch=sum;
    		 maxchi=z-1;
    	 }
     }
     cout<<s[maxchi]<<endl<<s[maxl];*/
//-------------------------------------------------
      /*string s,d;
      cin>>s;
      for(int i=0;i<s.size();i++)
    	  s[i]=tolower(s[i]);
      int z=0,f=0;

      while(z++<s.size())
      {
    	  if(s[z-1]!='a'&&s[z-1]!='u'&&s[z-1]!='o'&&s[z-1]!='i'&&s[z-1]!='e'&&s[z-1]!='y')
    	  {
    		  d[f]='.';
    		  d[f+1]=s[z-1];
    		  f+=2;
    	  }
      }
      z=0;
      while(z++<f) cout<<d[z-1];*/
//-----------------------------------------------------
      /*int a,b,c,x=0,y=0,d,z=0;
      double f=0;
      cin>>a>>b;
      c=a+b;
      while(a>0)
      {
    	  if(a%10!=0) x+=((a%10)*pow(10,f++));
    	  a/=10;
      }
      f=0;
      while(b>0)
            {
          	  if(b%10!=0) y+=((b%10)*pow(10,f++));
          	  b/=10;
            }
      f=0;
           while(c>0)
                 {
               	  if(c%10!=0) z+=((c%10)*pow(10,f++));
               	  c/=10;
                 }
      d=x+y;
      if(z==d) cout<<"YES";
      else cout<<"NO";*/
//----------------------------------------------------------
     /* int y[102],z[102],i,j,f=0,d=0;
      while(cin>>y[d++]);
      d--;
      if(d==1) {cout<<-1; return 0;}
      for(i=0;i<d;i++)
    	  for(j=i+1;j<d;j++)
    		  z[f++]=gcd(y[i],y[j]);
      i=0,j=0;
      while(i++<f)
    	  if(z[i-1]>j) j=z[i-1];
      cout<<j;*/
//----------------------------------------------------------------
     /*string s,y;
     int i=0;
     char c=' ';
     cin>>s;
     int d=0;
     while(i<s.size())
     {
    	 if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    	 { i+=3; d++;}
    	 else {
    		 if(y.size()!=0&&d!=0){
    		 y+=c;
    		 y+=s[i];}
    		 else y+=s[i];
    		 i++;
    		 d=0;
    	 }
     }
     cout<<y;*/
//--------------------------------------------------------------------
     /*int n;
     cin>>n;
     string s;
     cin>>s;
     char cc;
     int i=0,f=s.size()-1;
     int b=0,e=s.size()-1;
     for(int j=0;j<n;j++)
                         {
                             int min=j;
                             for(int i=j+1;i<n;i++)
                                 if(s[i]<s[min]) min=i;
                             cc=s[min];
                             s[min]=s[j];
                             s[j]=cc;
                         }
     for(int j=n;j<s.size();j++)
                              {
                                  int min=j;
                                  for(int i=j+1;i<s.size();i++)
                                      if(s[i]<s[min]) min=i;
                                  cc=s[min];
                                  s[min]=s[j];
                                  s[j]=cc;
                              }
     i=0;
      if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f--])
    		 {
    			goto x;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
      else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f--])
    	     		 {
    	     			goto x;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
   //  if(s[b]==s[e]){
   // 		 goto x;
   //  }
     x: i=0,b=0,e=n,f=n;
     if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f++])
    		 {
    			 cout<<"NO";
    			     	 return 0;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
     else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f++])
    	     		 {
    	     			 cout<<"NO";
    	     	     	 return 0;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
    // if(s[b]==s[e]){
    	//	 cout<<"NO";
    	//	 return 0;}

//---------------------------------------------------------------------
     /*string s,s2;
     cin>>s;
     int i=0,f=s.size()-1,c=0,count=0;
     char d;
     while(true)
     {
    	 c=0,f=s.size()-1,i=0;
    	 while(i<s.size()/2)
    		 if(s[i++]!=s[f--])
    		 {
    			 c++;
    			 break;
    		 }
    	 if(c==0) break;
    	 s2=s;
    	 i=0,f=s.size()-1;
    	 while(i<s.size()/2)
    	 {
    		 d=s[i];
    		 s[i]=s[f];
    		 s[f]=d;
    	 }
    	 i=0;
    	 while(i<s.size()){
    		 d=(s[i]-48)+(s2[i++]-48);
    		 s[i]=d;

    	 }

    	 count++;
     }
     cout<<count<<" "<<s;*/
//--------------------------------------------------------------------------
// 4A
    /* int x;
     cin>>x;
     for(int i=2;i<x;i+=2)
    	 if((x-i)%2==0)
    	 {
    		 cout<<"YES";
    		 return 0;
    	 }
     cout<<"NO";*/
//-------------------------------------------------------------------------
    //231A
    /*int x=0,c=0,i=0,d=0,y=0,z=0;
    cin>>x;
    while(z++<x)
    {
    	i=0,c=0;
    	while(i++<3)
    	{
    		cin>>y;
    		if(y==1) c++;
    	}
    	if(c>1) d++;
    }
    cout<<d;*/
//---------------------------------------------------------------------------
   /*char y[3][3];
   int i,j,x=0,o=0,no=0;
   for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	   {
		   cin>>y[i][j];
		   if(y[i][j]=='X') x++;
		   if(y[i][j]=='O') o++;
		   if(y[i][j]=='.') no++;
	   }
   if((x==o||x-1==o))
   {
	   for(i=0;i<3;i++)
	   {

		   if(y[i][0]==y[i][1]&&y[i][0]==y[i][2])
			   {if(y[i][0]=='X')
			   {
				   if(x-1==o){
				   cout<<"the first player won";
				   return 0;}
				   goto ff;
			   }
			   if(y[i][0]=='O')
			  			   {
				               if(x==o){
			  				   cout<<"the second player won";
			  				   return 0;}
				               goto ff;
			  			   }}
		   if(y[0][i]==y[1][i]&&y[0][i]==y[2][i]){
			   if(y[0][i]=='X')
			   			   {
				   if(x-1==o){
				  				   cout<<"the first player won";
				  				   return 0;}
				  				   goto ff;
			   			   }
			   			   if(y[0][i]=='O')
			   			  			   {
			   				 if(x==o){
			   							  				   cout<<"the second player won";
			   							  				   return 0;}
			   								               goto ff;
			   			  			   }}
			   }
       if((y[0][0]==y[1][1]&&y[0][0]==y[2][2])||(y[0][2]==y[1][1]&&y[0][2]==y[2][0]))
       {if(y[1][1]=='X')
       			   { if(x-1==o){
	  				   cout<<"the first player won";
	  				   return 0;}
	  				   goto ff;
       			   }
       			   if(y[1][1]=='O')
       			  			   {
       				 if(x==o){
       							  				   cout<<"the second player won";
       							  				   return 0;}
       								               goto ff;
       			  			   }}
	   if(no==0)
	   {
		   cout<<"draw";
		   return 0;
	   }
	   if(x==o)
	   {
		   cout<<"first";
		   return 0;
	   }
	   if(x-1==o)
	   	   {
	   		   cout<<"second";
	   		   return 0;
	   	   }
   }
   ff:cout<<"illegal";*/
//--------------------------------------------------------------------------
   //69A
   /*int x,z=0,i=0,a=0,b=0,c=0,suma=0,sumb=0,sumc=0;
   cin>>x;
   while(z++<x)
	   {
	    cin>>a>>b>>c;
	    suma+=a;
	    sumb+=b;
	    sumc+=c;
	   }
   if(suma==0&&sumb==0&&sumc==0) cout<<"YES";
   else cout<<"NO";*/
//-----------------------------------------------------------------------
   /*long long x,y,z,x2,y2,z2,c;
   cin>>x>>y>>z;
   x2=x/z,y2=y/z,c=x2*y2;
   if(x%z) c+=y2;
   if(y%z) c+=x2;
   if(x%z&&y%z) c++;
   cout<<c;*/
//------------------------------------------------------------------------
  /* int x;
   cin>>x;
   int y[x][x];
   for(int i=0;i<x;i++)
   {
	   int f=i,d=1;
	   for(int k=0;k<=i;k++)
	   {
		   y[f][x-d]=i+1;
		   if(i+1!=x) y[x-d][f]=i+1;
		   d++,f--;
	   }
   }
   for(int i=0;i<x;i++)
   { for(int k=0;k<x;k++)
   {  cout<<y[i][k];
      if(k!=x-1) cout<<" ";
   }
   if(i!=x-1) cout<<endl;}*/
//------------------------------------------------------------
   /*string x,y="heavy",z="metal";
   cin>>x;
   long long h=-5,m,c=0;
   for(int i=0;;i++)
   {
	   h=x.find(y,h+5);
	   if(h>-1)
	   {
		   m=x.length();
		   for(int j=0;;j++)
		   {
			   m=x.rfind(z,m-1);
			   if(m>-1&&m>h+4) c++;
			   else break;
		   }
	   }
	   else break;
   }
   cout<<c;*/
   //------------------------------------------------------------------
    /*string s;
	cin>>s;
	int z=0,c=0;
	while(z++<s.size())
	{
		if(s[z-1]=='h'&&c==0)
		{
			c++;
			continue;
		}
		if(s[z-1]=='e'&&c==1)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==2)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==3)
		{
			c++;
			continue;
		}
		if(s[z-1]=='o'&&c==4)
		{
			c++;
			break;
		}
	}
	if(c==5) cout<<"YES";
	else cout<<"NO";*/
//---------------------------------------------------------------
    /*string s,d,r;
    int z=0;
    cin>>s>>d;
    while(z++<s.size())
    {
    	if(s[z-1]==d[z-1]) r+='0';
    	else r+='1';
    }
    cout<<r;*/
//------------------------------------------------------------
   /*int x,z=0;
   cin>>x;
   int y[x];
   while(cin>>y[z++]);
   int l=0,k=x;
   for(int i=0;i<x;i++)
   {
	   if(y[i]){
		   int m=0;
		   for(int j=i+1;j<x;j++)
		   {
			   if(y[i]==y[j])
			   {
				   m++;
				   y[j]=0;
			   }
		   }
		   if(m>0) k-=m;
		   if(m>l) l=m;
	   }
   }
   cout<<l+1<<" "<<k;*/
//---------------------------------------------------------------
    /*int x,z=0,even=0,odd=0,eve=0,od=0;
    cin>>x;
    int y[x];
    while(z<x) cin>>y[z++];
    z=0;
    while(z++<x)
    {
    	if(y[z-1]%2==0) {even++; eve=z-1;}
    	else {odd++; od=z-1;}
    }
    if(even==1) cout<<eve+1;
    else cout<<od+1;
//---------------------------------------------------------------
   int n,k,z=0,c=0;
   cin>>n>>k;
   int y[n];
   while(cin>>y[z++]);
   z=0;
   while(z++<n)
   {
	   if(y[z-1]>=y[k-1])
		   {if(y[z-1]>0)
			   c++;}
	   else break;
   }
   cout<<c;
        return 0;
}
 
