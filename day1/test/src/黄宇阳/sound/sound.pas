program x;
  const
    f1='sound.in';
	f2='sound.out';
  var
    data:array[1..1000000] of longint;
	m,n,k,i,sum,total,ans,p,t:longint;
  function get_exp(a1,a2:longint):longint;
    var
	  a3:longint;
	begin
	  a3:=1;
	  if a2=1 then get_exp:=a1
		  else
	        for i:=1 to a2 do
	        a3:=a3*a1;
	   get_exp:=a3;
	 end;
	procedure next_step;
	  var
	    x,y:longint;
	  begin
	    x:=k*sum-p;
		y:=(k+1)*sum-p;	
		if abs(x)>=abs(y) then ans:=(k+1)*sum
		else ans:=k*sum;
	  end;
	procedure first_step;
	   begin 
	      k:=p div sum;
		  if (k*sum<=p) and (p<=(k+1)*sum) then next_step;
	   end;
begin
  assign(input,f1);
  assign(output,f2);
  reset(input);
  rewrite(output);
  
  readln(n,m);
  sum:=get_exp(2,m);
  total:=0;
  k:=0;
  for i:=1 to n do
    begin  
	  read(p);
      ans:=0;
      first_step;
	  inc(total);
	  data[total]:=ans;
    end;
  for i:=1 to n do 
  write(data[i],' ');
  
  close(input);
  close(output);
end. 