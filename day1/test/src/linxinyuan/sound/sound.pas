var i,k,m,n,p:longint;
       a:array[1..1000000]of longint;
begin
     assign(input,'sound.in');
	 reset(input);
	 assign(output,'sound.out');
	 rewrite(output);
	 read(n,m);
	 for i:=1 to n do 
	     read(a[i]);
	 p:=1;
	 for i:=1 to m do 
		 p:=p*2;
	 for i:=1 to n do 
	 begin
	     k:=a[i] div p;
         if a[i]-k*p<(k+1)*p-a[i] then 
		   a[i]:=k*p
		else
		   a[i]:=(k+1)*p;	
	 end;
		for i:=1 to n do 
			write(a[i],' ');
     close(input);
	 close(output);
end.
    