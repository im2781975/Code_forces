
#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
int n=0;
        while(cin>>n)
        {
            int d=pow(3,n);
            int **x = new int*[d];
    for(int w = 0; w < d; ++w)
        x[w] = new int[5];
            bea(x,n);
                for(int r=0;r<pow(3,n);r++)
                {
                    for(int c=0;c<n;c++)
                        cout<<x[r][c];
                    cout<<"\n";
                }
    for(int q = 0; q < d ; ++q)
        delete(x[q]);
    delete [] x;
    cout<<endl;
}*/
    //-------------------------------------------------------------------------------------------------------------------
        /*c=0,odd=0;
            cout<<req(1024,5);*/
    //-------------------------------------------------------------------------------------------------------------------
        /*  c=0,odd=0;
            cout<<rev(524130);*/
    //-------------------------------------------------------------------------------------------------------------------
    /*int x[5],y=5;
    while(y-->0) cin>>x[y];
    for(int j=0;j<5;j++)
    {
        int min=j;
        for(int i=j+1;i<5;i++)
            if(x[i]<x[min]) min=i;
        swap(x[min],x[j]);
    }
    cout<<x[2]<<endl;*/
    //----------------------------------------------
    /*int x,z,c=0,f=0;
    cin>>x;
    int *y=new int [x];
    z=x;
    while(z-->0) cin>>y[f++];
    z=x;
    f=0;
    while(z-->1)
    {
        if(y[f]<y[f+++1]) continue;
        else {c=-1; break;}
    }
    if(c==0) cout<<"Ordered\n0\n";
    else{
        c=0;
        for(int i=0;i<x-1;i++)
            for(int j=0;j<(x-1)-i;j++)
                if(y[j]>y[j+1]){swap(y[j+1],y[j]); c++;}
        f=1;
        cout<<y[0];
        while(x-->1) cout<<" "<<y[f++];
        cout<<endl<<c<<endl;
    }*/
    //--------------------------------------------
    /*int x=0,z=0,m=0,c=0;
    cin>>x;
    z=x;
    char *y=new char[x];
    while(z-->0&&++m)
    {
        int f=0,s=x;
        while(s-->0) {cin>>y[f++]; if(y[f-1]=='#') {cout<<m<<" "<<f<<endl; c++;}}
    }
    if(c==0) cout<<"No hiding places"<<endl;
    else cout<<c<<endl;*/
    //-----------------------------------------------
    /*unsigned long long z,x,y,c,m,s;
    cin>>x;
    while(x-->0)
    {
        cin>>y;
        c=0;
        m=1;
        s=y;
        while(y-->0)
        {
            cin>>z;
            if(z%2==0&&m%2==0) c++;
            if(z%2!=0&&m%2!=0) c++;
            m++;
        }
        if(c==s) cout<<"YES\n";
        else cout<<"NO\n";
    }*/
    //------------------------------------------
    /*int n,m,z,c,f,po;
    while(cin>>n>>m&&n>0&&m>0)
    {
        c=0,f=0;
        while(n-->0)
        {
            cin>>z;
            if(z==m)
            {
                if(c==0) po=f;
                c++;
            }
            f++;
        }
        if(c==0) cout<<"-1"<<endl;
        else cout<<c<<" "<<po<<endl;
        //----------------------------------------------------
    }*/
      /*int x;
      cin>>x;
      int z=0;
      char *y=new char[x];
       double *f=new double[x+1];
      while(z++<x) cin>>y[z-1];
      z=0;
      while(z++<=x) cin>>f[z-1];
      z=0;
      while(z++<x)
      {
          switch(y[z-1]){
          case('+'): f[z]=f[z-1]+f[z]; break;
          case('-'): f[z]=f[z-1]-f[z]; break;
          case('*'): f[z]=f[z-1]*f[z]; break;
          case('/'): f[z]=f[z-1]/f[z]; break;
          }
      }
      printf("%0.2f\n",f[x]);*/
//-------------------------------------------------------------
      /*char x[10][10],y;
      int c=0;
      for(int i=0;i<10;i++)
      {
          c=0;
          for(int j=0;j<10;j++)
          {
              cin>>y;
              x[i][j]=y;
              if(y=='*') c++;
          }
          if(c==10){cout<<"YES\n"; return 0;}
      }
      for(int i=0;i<10;i++)
            {
              c=0;
              for(int j=0;j<10;j++)
                  if(x[j][i]=='*') c++;
              if(c==10){cout<<"YES\n"; return 0;}
            }
      cout<<"NO\n";*/
//----------------------------------------------------------------
      /* int m,s=0,w=0;
       char r;
       cin>>m;
       struct x f[1000];
       while(s++<m)
       {
           cin>>f[s].y>>f[s].z;
       }
       cin>>r;
       s=0,w=0;
       while(s++<m)
       {
           if(f[s].y[0]==r) w+=f[s].z;
       }
       cout<<w<<endl;*/
//------------------------------------------------------------
      /* int x,z,f,c=0,h=100001;
       cin>>x;
       int y[h];
       z=0;
       while(z++<h) y[z-1]=-1;
       z=0;
       while(z++<x)
       {
    	   cin>>f;
    	   y[f]=f;
       }
       z=0;
              while(z++<h)
              {
           	   if(y[z-1]==-1) continue;
           	   else{
           		   c++;
           	   }
              }
       z=0;
       cout<<c<<endl;
       while(z++<h)
       {
    	   if(y[z-1]==-1) continue;
    	   else{
    		   cout<<y[z-1];
    		   f=z-1;
    		   break;
    	   }
       }
       z=0;
       while(z++<h)
       {
    	   if(y[z-1]==-1||z-1==f) continue;
    	   else cout<<" "<<y[z-1];
       }
       cout<<endl;*/
//-----------------------------------------------------------
       /*int x;
       cin>>x;
       char *y=new char[x];
       int *s=new int[x];
       int *r=new int [x];
       int z=0,i=0,h=26;
       char a[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
       while(z++<x) cin>>y[z-1];
       for(z=0;z<x;z++)
    	   for(i=0;i<h;i++)
    		   if(y[z]==a[i])
    			   s[z]=i+1;
       i=x;
       for(z=0;z<x;z++)
       {
    	   int max=0;
    	   for(h=0;h<x;h++)
    		   if(s[h]>=s[max])
    			   max=h;
    	   r[max]=i--;
    	   s[max]=0;
       }
       z=1;
       cout<<r[0];
       while(z++<x) cout<<" "<<r[z-1];
       cout<<endl;*/
//-----------------------------------------------------------
    /*char x[1000][1000];
       int r,c,minr,minc,min,p=0,i,j;
       cin>>r>>c;
       for(i=0;i<r;i++)
           for(j=0;j<c;j++)
               cin>>x[i][j];
       for(i=0;i<r;i++)
           for(j=0;j<c;j++)
           {
               if(x[i][j]=='E')
               {
                   if(p==0)
                   {
                       min=(i-1)+(j-1);
                       minr=i+1,minc=j+1;
                       p++;
                   }
                   else{
                       if(min>((i-1)+(j-1)))
                       {
                           min=(i-1)+(j-1);
                           minr=i+1,minc=j+1;
                       }
                   }
               }
           }
       if(p==0) cout<<"-1"<<endl;
       else cout<<minr<<" "<<minc<<endl;*/
//----------------------------------------------------------------
/*long long x=0,z=0,f=0,ie=-1,io=-1,so=0,se=0;
      cin>>x;
      long long *e=new long long [x];
      long long *o=new long long [x];
      while(z++<x)
      {
          cin>>f;
          if(f%2==0) e[++ie]=f;
          else {
             o[++io]=f;
          }
      }
      z=0;
      if(io>-1){cout<<o[io];
      so++;
      while(io-->0){
          cout<<" "<<o[io];so++;}}
      z=0;
      if(ie>-1){
          if(so>0) cout<<" ";
          cout<<e[z];
          se++;
      while(z++<ie){
          cout<<" "<<e[z]; se++;}}
      z=0;
      cout<<endl;*/
//-------------------------------------------------------
      /*unsigned long long x,y;
      cin>>x;
      y=x*365*24*60;
      cout<<y<<endl;*/
//---------------------------------------------------
    /*  int x,y,z;
      cin>>x;
      while(x-->0){
          cin>>y>>z;
          int *a=new int [z];
          int f=0,s=0,c=0;
          while(s++<z) cin>>a[s-1];
          for(int j=0;j<z;j++)
                    {
                        int min=j;
                        for(int i=j+1;i<z;i++)
                            if(a[i]<a[min]) min=i;
                        swap(a[min],a[j]);
                    }
         // cout<<a[0]<<" "<<a[z-1]<<endl;
          s=0;
          while(s++<z)
          {
              if(f+a[s-1]<=y)
              {
                  f+=a[s-1];
                  c++;
              }
              else break;
          }
          cout<<c<<" "<<f<<endl;
      }*/
//---------------------------------------------------------------
     /* char c;
      int x,y;
      while(cin>>c>>x>>y){
          if(x<y) swap(&x,&y);
          switch(c){
          case('R'):{
              for(int i=0;i<y;i++)
                  {for(int j=0;j<x;j++)
                      cout<<"*";
                   cout<<endl;
                  }
              break;
          }
          case('S'):{
                      for(int i=0;i<y;i++)
                          {for(int j=0;j<x;j++)
                              cout<<"*";
                           cout<<endl;
                          }
                      break;
                  }
          case('T'):{
                      for(int i=0;i<x;i++)
                          {for(int j=0;j<=i;j++)
                              cout<<"*";
                           cout<<endl;
                          }
                      break;
                  }
          }
      }*/
//----------------------------------------------------------------------
      /*int x[12];
      int y=0;
      while(y++<12) cin>>x[y-1];
      cin>>y;
      int min=22,mini=0,minj=0,i=0,j=0,po=0;
      for(i=0;i<11;i++)
      {
          for(j=i+1;j<12;j++)
          {
              if(x[i]+x[j]>y)
              {
                  po++;
                  if(((i-0)+(j-0))<min)
                  {
                      min=(i-0)+(j-0);
                      mini=i;
                      minj=j;
                  }
              }
          }
      }
      if(po==0) cout<<"NULL";
      else cout<<mini+1<<" "<<minj+1;*/
      /*char x[10];
      int f=0,y=0;
      cin>>x;
      while(y++<10)
          if(x[y-1]=='F')
              f++;
      if(f==1||f==2||f==5||f==8||f==9)
          cout<<"NO"<<endl;
      else
          cout<<"YES"<<endl;*/
//------------------------------------------------------------
      /*long double l=0,r=0,x=0,y=0;
      cin>>l>>r;
      if(l<1||r<1) return 0;
      x=l*l;
      y=.5*r*r;
      if(x<=y) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;*/
//----------------------------------------------------------
/*long long x[3],c=0;
      int y=0;
      while(y++<3) cin>>x[y-1];
      y=0;
      int min=0;
      while(y++<3){
    	  if(x[min]>x[y]) min=y;
      }
      int ff=0;
      float ffs=x[min],sds=10;
      while(ffs>10)
      {
    	  ffs/=10;
    	  ff++;
      }
      ffs=pow(sds,ff-1);
      y=0;
      while(y++<3) x[y-1]-=ffs;
      while(true){
          if(x[0]==x[1]&&x[0]==x[2])
          {
              c=c+x[0];
              break;
          }
           if(x[0]>x[1]&&x[0]>x[2])
      {
          swap(x[0],x[2]);
          if(x[0]>x[1])
              swap(x[0],x[1]);
      }
      if(x[0]>x[1]&&x[0]<=x[2])
      {
          swap(x[0],x[1]);
      }
      if(x[0]>x[2]&&x[0]<=x[1])
            {
              swap(x[0],x[2]);
            swap(x[1],x[2]);
            }
      if(x[0]<=x[1]&&x[0]<=x[2]&&x[1]>x[2])
           {
              swap(x[2],x[1]);
           }
      if(x[0]==0&&x[1]==0) break;
          if(x[0]+x[1]+x[2]>3)
          {
              x[2]-=2;
              x[1]-=1;
              c++;
          }
          else{
              if(x[0]+x[1]+x[2]==3)
              {
                  c++;
                 break;
              }
              else break;
          }
      }
      cout<<c+ffs<<endl;*/
//-----------------------------------------------------------
      /*int x;
      cin>>x;
      char y[1000][3];
      char *z=new char[x];
      int f=0,gr=0,pi=0,green=0,pink=0;
      for(int s=0;s<x;s++)
      {
          for(int ss=0;ss<3;ss++)
              cin>>y[s][ss];
      }
      for(int r=0;r<x;r++)
      {
          int g=0,rr=0;
          if(pi==5)
          {
              z[f++]='g';
              r++;
              green++;
              pi=0;
          }
          if(gr==5)
                  {
                      z[f++]='p';
                      r++;
                      pink++;
                      gr=0;
                  }
          for(int c=0;c<3;c++)
          {
              if(y[r][c]=='G')
              {
                  g++;
                  break;
              }
              if(y[r][c]=='B')
                          {
                              rr++;
                          }
          }
          if(g==1)
          {
              z[f++]='g';
              gr++;
              green++;
          }
          if(rr==3){
              z[f++]='p';
              pi++;
              pink++;
          }
      }
      gr=0;
      cout<<pink*3<<" "<<green*3<<endl;
      while(gr++<x)
      {
          if(z[gr-1]=='g') cout<<"Green"<<endl;
          if(z[gr-1]=='p') cout<<"Pink"<<endl;
      }
*/

//------------------------------------------------------------------
    /* int n=0,x=0,c=0,s=0;
     char y[3];
     cin>>n;
     while(c++<n)
     {
    	 cin>>y;
    	 s=0;
    	 while(s++<2)
    	 {
    		 if(y[s-1]=='+'){
    			 x++;
    			 break;
    		 }
    		 if(y[s-1]=='-'||y[s-1]=='�'){
    		     			 x--;
    		     			 break;
    		     		 }
    	 }
     }
     cout<<x<<endl;*/
//-------------------------------------------------------------------
    /*int x;
	cout<<"enter no. of programs\n";
	cin>>x;
	float *arr=new float [x];
	float *bur=new float [x];
	float *burw=new float [x];
	bool *boo=new bool [x];
	float *fin=new float [x];
	int z=0;
	while(z++<x)
	{
		cout<<"enter the arrival time of p"<<z<<endl;
		cin>>arr[z-1];
		cout<<"and its burst time\n";
		cin>>bur[z-1];
	}
	cout<<"enter the fixed time:\n";
	int q=0;
	cin>>q;
	z=0;
	float sum=0;
	while(z++<x)
	{
		sum+=bur[z-1];
		burw[z-1]=bur[z-1];
		fin[z-1]=-1;
	}
	int c=0,min=0,mini=0;
	while(c<sum)
	{
		z=0;
		while(z++<x)
		{
			if(arr[z-1]<=c&&fin[z-1]==-1)
			{
				boo[z-1]==true;
			}
		}
		min=-1,z=0;
		while(z++<x)
		{
			if(min>bur[z-1]&&boo[z-1]==true)
			{
				mini=z-1;
				min=bur[z-1];
			}
		}
		if(bur[mini]>=q)
		{
			burw[mini]-=q;
		}
		else
		{
			burw[mini]=0;
		}
		if(bur[mini]==0)
		{
			fin[mini]=c;
		}
	}
	z=0;
	while(z++<x)
	{
		float fff=fin[z-1]-arr[z-1];
		cout<<"T(a) of p"<<z-1<<" = "<<fff;
		cout<<"\nT(w) of p"<<z-1<<" = "<<fff-bur[z-1]<<endl;
	}*/
//--------------------------------------------------------------
/* long long n,y,max=1,c=0;
    cin>>n>>y;
    long long x=n;
    while(x<=y)
    {
    	n=x;
    	c=1;
    	 while(n>1)
    	    {

    	    	if(n%2!=0) n=3*n+1;
    	    	else n=n/2;
    	    	c++;
    	    }
    	 if(c>max) max=c;
    	 x++;
    }
    cout<<max;*/
//----------------------------------------------------------------
   /* int x,z=1,h=0,l=0,y,f;
    cin>>x;
    cin>>y;
    while(z++<x)
    {
    	cin>>f;
    	if(f>y) h++;
    	if(f<y) l++;
    	y=f;
    }
    cout<<h<<" "<<l;*/
//-------------------------------------------------------------------
     /*float y=0,z[3],sum=0;
     int x=0;
     while(x++<4)
     {
    	 cin>>y;
    	 sum=sum+y;
     }
     int min=0;
     x=0;
     while(x++<3)
     {
    	 cin>>z[x-1];
    	 if(z[min]>z[x-1]) min=x-1;
     }
     x=0;
     float f=0;
     while(x++<3)
     {
    	 if(x-1==min) continue;
    	 f+=z[x-1];
     }
     sum+=f/2;
     if(sum>=90) {cout<<"A"; return 0;}
     if(sum>=80&&y<90) {cout<<"B"; return 0;}
     if(sum>=70&&y<80) {cout<<"C"; return 0;}
     if(sum>=60&&y<70) {cout<<"D"; return 0;}
     if(sum<60) {cout<<"F"; return 0;}*/
//-------------------------------------------------------------------------
    /*int x;
while( cin>>x){

     int l[x],r[x];
     int z=0,c=0;
     while(z++<x) cin>>l[z-1];
     z=0;
     while(z++<x) cin>>r[z-1];
     for(z=0;z<x;z++)
     {
    	 int m=0;
    	 for(int f=0;f<x;f++)
    	 {
    		 if(l[z]==r[f])
    		 {
    			 r[f]=0;
    			 m++;
    			 break;
    		 }
    	 }
    	 if(m==0) c++;
     }
     cout<<c;}*/
//---------------------------------------------------------------------------------------
     /*int n,b;
     cin>>n>>b;
     int res=n/b;
     int x[3]={abs(res-1)*b,res*b,(res+1)*b};
     int y[3]={abs(n-(abs(res-1)*b)),abs(n-(res*b)),((res+1)*b)-n};
     int z=0,min=0;
     while(z++<2)
     {
    	 if(y[z]<y[min]) min=z;
    	 if(y[z]==y[min])
    	 {
    		 if(x[z]>x[min]) min=z;
    	 }
     }
     cout<<x[min];*/
//---------------------------------------------------------------------------------------------
     /*int n,v,x,m;
     cin>>n>>v;
     int yy[n],d=0;
     while(d++<n) yy[d-1]=1;
     for(int i=0;i<n;i++)
     {
    	 cin>>x;
    	 for(int j=0;j<x;j++)
    	 {
    		 cin>>m;
    		 if(v>m) yy[i]=0;
    	 }
     }

     int z=0,c=0,r=-1;
     while(z++<n)
     {
    	 if(yy[z-1]==0) c++;
    	 if(c==1&&r==-1) r=z-1;
     }
     cout<<c<<endl;
     if(c>0) cout<<r+1;
     z=0;
     while(z++<n)
     {
    	 if(z-1==r) continue;
    	 if(yy[z-1]==0) cout<<" "<<z;
     }*/
//------------------------------------------------------------------------------------------------------------
    /* int t,k,n,z=0;
     cin>>n>>k>>t;
     while(z++<n)
     {
    	 if(t>=k)
    	 {
    		 if(z==n) {cout<<k;
    		 t=t-k;}
    		 else{cout<<k<<" ";
    		 t=t-k;
    		 }
    	 }
    	 else{
    		 if(t>0)
    		 {
    			 if(z==n) {cout<<t;
    			     		 t=t-t;}
    			     		 else{cout<<t<<" ";
    			     		 t=t-t;
    			     		 }
    		 }
    		 else{
    			 if(z==n) {cout<<"0";
    			     		}
    			     		 else{cout<<"0"<<" ";

    			     		 }
    		 }
    	 }
     }*/
//--------------------------------------------------------------
   /*  int x,y,z,g,f=0;
     char c;
     cin>>x;
     while(f++<x)
     {
    	 cin>>y>>c>>z;
    	 if(y%z==0) { if(f==x) cout<<y/z;
		 else cout<<y/z<<endl;}
    	 else{
    	 if(z==1)
    	 {
    		 if(f==x) cout<<y;
    		 else cout<<y<<endl;
    	 }
    	 else{
    		 if(y==1)
    		 {
        		 if(f==x) cout<<y<<c<<z;
        		 else cout<<y<<c<<z<<endl;
    		 }
    		 else{
    			 if(y<z)  g=gcd(z,y);
    			 else g=gcd(y,z);
        		 if(f==x) cout<<y/g<<c<<z/g;
        		 else cout<<y/g<<c<<z/g<<endl;
    		 }
    	 }
     }}*/
//-----------------------------------
     /* long long n,p=0,z=0,f=0,k=0;
     cin>>n;
     char *c=new char[n];
     cin>>c;
     while(z++<n)
    	 if(c[z-1]!='*') p++;
     z=0,f=1,k=20-p;
     while(z++<n-p) f=f*k--;
     cout<<f;*/
//----------------
     /*unsigned long long m,n,x;
     cin>>n>>m;
     x=m%n;
     if(x==0) cout<<"Yes";
     else cout<<"No";*/
//------------------------
    /* int x,y;
     cin>>x>>y;
     cout<<x+y;*/
//------------
    /* unsigned long long x,y;
     cin>>x;
     y=x*x;
     cout<<y;*/
//------------
/* int x,z=0,y;
  cin>>x;
  while(z++<x)
  {
      cin>>y;
      if(check(y)==1)
      {
          if(z==x) cout<<"Intelligent";
          else cout<<"Intelligent"<<endl;
      }
      else{
          if(z==x) cout<<"Stupid";
           else cout<<"Stupid"<<endl;
      }
  }*/
  //--------------------------------------
 /* long long z,f=0;
sd: while( cin>>z)
{
  for(long long  y=2;y<35;y++)
  {
   f=0;
   for(long long  x=2;x<=y&&f<z;x++)
   {
       f=pow(x,y)+pow(y,x);
       if(f==z){
           cout<<"YES"<<endl<<x<<" "<<y<<endl;
          goto sd;
       }
   }
  }
  cout<<"NO"<<endl;}*/
  //----------------------------------------
  /* int x;
   cin>>x;
   int z[x];
   int d=0,f=0,m=0,n=0,first=0,last=0,i=0,sum=0;
   while(d++<x) cin>>z[d-1];
   cin>>f;
   d=0;
   while(d++<f)
   {
	   sum=0;
	   cin>>m>>n;
	   if(m>n) swap(&m,&n);
	   first=m-1,last=n-1;
	   int max=first,min=first;
	   for(i=first;i<=last;i++)
	   {
		   sum=sum+z[i];
		   if(z[i]>z[max]) max=i;
		   if(z[i]<z[min]) min=i;
	   }
	   if(d==f) cout<<z[max]<<" "<<z[min]<<" "<<sum;
	   else cout<<z[max]<<" "<<z[min]<<" "<<sum<<endl;
   }*/
//--------------------------------------------
      /* int x,y;
       cin>>x>>y;
       if(x>y) cout<<lcm(y,x);
       else cout<<lcm(x,y);*/
//-----------------------------------
     /* int x,i=0,sum=0;
      cin>>x;
      while(x>0)
      {
    	  sum+=((x%10)*pow(2,i++));
    	  x/=10;
      }
      cout<<sum;*/
//--------------------------------
   /* int x;
    cin>>x;
    if(luck(x)==1) cout<<"YES";
    else cout<<"NO";*/
//----------------------------
    /* int x=0;
     cin>>x;
     cout<<binary(x)<<" "<<hex(x);*/
//-----------------------------------
     /*int x;
     cin>>x;
     char y[x];
     cin>>y;
     int z=0,f=x-1,c=0;
     while(z++<x/2)
     {
    	 if(y[z-1]==y[f]);
    	 else{
    		 c++;
    		 if(y[z-1]<y[f]) y[f]=y[z-1];
    		 else y[z-1]=y[f];
    	 }
    	 f--;
     }
     cout<<c<<endl<<y;*/
//-------------------------------------
     /*int n,m,x,y;
     cin>>n>>m;
     char z[n+1][m+1],f;
     for(x=0;x<n;x++)
    	 for(y=0;y<m;y++)
    	 {
    		 cin>>f;
    		 if(f=='.') z[x][y]='0';
    		 else z[x][y]=f;
    	 }
     for(x=0;x<n;x++)
        	 for(y=0;y<m;y++)
        	 {if(z[x][y]=='*')
        	 {
        		 if(z[x+1][y]!='*'&&x+1>-1&&y>-1) z[x+1][y]++;
        		 if(z[x+1][y+1]!='*'&&x+1>-1&&y+1>-1) z[x+1][y+1]++;
        		 if(z[x+1][y-1]!='*'&&x+1>-1&&y-1>-1) z[x+1][y-1]++;
        		 if(z[x-1][y]!='*'&&x-1>-1&&y>-1) z[x-1][y]++;
        		 if(z[x-1][y-1]!='*'&&x-1>-1&&y-1>-1) z[x-1][y-1]++;
        		 if(z[x-1][y+1]!='*'&&x-1>-1&&y+1>-1) z[x-1][y+1]++;
        		 if(z[x][y-1]!='*'&&x>-1&&y-1>-1) z[x][y-1]++;
        		 if(z[x][y+1]!='*'&&x>-1&&y+1>-1) z[x][y+1]++;
        	 }
        	 }
     for(x=0;x<n;x++)
     { for(y=0;y<m;y++)
         	 {
         		 cout<<z[x][y];
         	 }
     if(x!=n-1) cout<<endl;
     }*/
//-------------------------------------------
     /*int a,b,n;
     cin>>a>>b>>n;
     while(true)
     {
    	 if(a>n) n-=gcd(a,n);
    	 else n-=gcd(n,a);
    	 if(n==0){
    		 cout<<"0";
    		 break;
    	 }
    	 if(n<0){
    		 cout<<"1";
    		    		 break;
    	 }
    	 if(b>n) n-=gcd(b,n);
    	    	 else n-=gcd(n,b);
    	 if(n==0){
    	     		 cout<<"1";
    	     		 break;
    	     	 }
    	     	 if(n<0){
    	     		 cout<<"0";
    	     		    		 break;
    	     	 }
     }*/
//---------------------------------------------------------
     /*unsigned long long x;
     cin>>x;
     x=pow(x,2)+x+41;
     cout<<x;*/
//--------------------------------------------------------
	/*int x;
		cout<<"enter no. of programs\n";
		cin>>x;
		float *arr=new float [x];
		float *bur=new float [x];
		int z=0;
		while(z++<x)
		{
			cout<<"enter the arrival time of p"<<z<<endl;
			cin>>arr[z-1];
			cout<<"and its burst time\n";
			cin>>bur[z-1];
		}
		cout<<"Enter 1 for FCFS or 2 for SJF-non primitive\n";
		int ff=0;
		cin>>ff;
		if(ff==1){
		float j=0,t=0,w=0;
		z=0;
		float suma=0,sumw=0;
		while(z++<x)
		{
			j+=bur[z-1];
			t=j-arr[z-1];
			w=t-bur[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
			cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	    }
	    if(ff==2){
	    int c=0,s=0,min=0;
	    float *fin=new float [x];
	    z=0;
	    while(z++<x)
	    {
	    	s=0,min=0;
	    	while(s++<x)
	    	if(arr[s-1]<=c&&arr[s-1]>=0&&bur[s-1]<bur[min])   	min=s-1;
	    	arr[min]*=-1;
	    	c+=bur[min];
	    	fin[min]=c;
	    }
	    z=0;
	    while(z++<x) cout<<fin[z-1]<<endl;
	    z=0;
	    float suma=0,sumw=0;
	    while(z++<x)
		{
			float t=fin[z-1]-(arr[z-1]*-1);
			float w=t-bur[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	    }*/
	    //--------------------------------------------------------------------
       /*int x;
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
 
