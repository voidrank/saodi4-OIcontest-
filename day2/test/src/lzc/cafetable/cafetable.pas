program t1; 
 type 
   dim=array[1..100,1..100]of integer;
   dim2=array[1..10000]of integer;
 var 
  a:dim;
  b:dim2;
  y,x,i,j,m,n,k,s,ss:integer;
  f:boolean;
 procedure  tongji;
  var i,j,ww,ee:integer;ff:boolean;
  begin 
    ww:=0;ee:=0;ff:=true;
    for i:=1 to n do 
	 begin 
	  for j:=1 to n do 
	   begin 
		if a[i,j]=1 then ww:=ww+1;
		if a[i,j]=2 then ee:=ee+1;
	   end;
	  if ww<>ee then ff:=false;
	  ww:=0;ee:=0;
	end;
    s:=0;
	for i:=1 to n do 
	 if b[i]=1 then s:=s+1;
	if not(ff) then s:=0;
    if s>ss then ss:=s;
   end;
 function pd(b:dim2):boolean;
   var i:integer; 
	 begin 
     pd:=true;
	 for i:=1 to n do 
	 if b[i]=0 then pd:=false;
  end;
 procedure try(q,p:integer);
  var i:integer;  
  begin 
     if pd(b) then tongji
	 else begin
		     b[q]:=p;
	         for i:=1 to 3 do 
				try(q+1,i);
		    end;
  end;
 begin 
  assign(input,'cafetable.in');
  reset(input);
  assign(output,'cafetable.out');
  rewrite(output);
  readln(n);
  for i:=1 to n do 
	a[i,1]:=i;
  for i:=1 to n do 
	begin 
     readln(x,y);
     for j:=1 to n do 
	  for m:=1 to n do 
		if a[j,m]=x then begin
		                         f:=true;	
		                         k:=m;
								 while f do
								  begin 
								    k:=k+1;
		                        	if a[j,k]=0 then begin 
										                          a[j,k]:=y;
									                              f:=false;
								                                end;
								  end;
								end;
							end;
 for i:=1 to 3 do 
  try(1,i);
 write(ss);
  close(input);close(output);
end.