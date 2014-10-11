var a:array[1..100000,1..100000]of boolean;
      c,zy:array[1..100000]of longint;
      n,x,y,i,ji,j:longint;
procedure goushu(m:longint);
   var m1:longint;
begin
    if c[m]=1 then 
		exit;
    for m1:=1 to n do 
	begin
	    if a[m,m1]=true then
		begin	
		    if c[m1]=1 then 
			  zy[m]:=zy[m]+1;	
			a[m1,m]:=false;
		    goushu(m1);
		end;
	end;
end;

function f(jd:integer):integer;
	var zhi,xb:longint;
begin
	zhi:=0;
	for xb:=2 to n do 
    begin
         if (a[jd,xb]=true)and(c[xb]>1) then 
		   zhi:=zhi+f(xb);
	   zhi:=zhi+(zy[jd] div 2)+(zy[jd] mod 2);
    end;
		
	f:=zhi;
end;			
			
begin
   assign(input,'cafetable.in');
   reset(input);
   assign(output,'cafetable.out');
   rewrite(output);
   fillchar(a,sizeof(a),false);
   fillchar(c,sizeof(c),0);
   fillchar(zy,sizeof(zy),0);
   read(n);
   for i:=1 to n-1 do 
   begin
	   read(x,y);
       a[x,y]:=true;
       a[y,x]:=true;
       inc(c[x]);
       inc(c[y]);
   end;
   for i:=1 to n do 
   begin
       if a[1,i]=true then 
	   begin
	       a[i,1]:=false;
	       goushu(i);
	   end;
   end;
	   ji:=0;
   for i:=2 to n do
   begin
       if (a[1,i]=true)and(c[i]>1) then 
		   ji:=ji+f(i);
	   ji:=ji+(zy[1] div 2)+(zy[1] mod 2);
   end; 
	   {for i:=1 to n do 
		   writeln(c[i],' ',zy[i]);
	   for i:=1 to n do 
	   begin
		   for j:=1 to n do 
			   write(a[i,j],' ');
		   writeln;
		end;}
	   writeln(ji div 2);
   close(input);
   close(output);
end.