var n,i,j,js,js1,gd,x,max,maxl:integer;
       pan:boolean;
       dfs,bfs,high:array[1..1000]of integer;
	   sy:array[1..1000]of integer;
	 
	   cs:array[1..1000,1..1000]of boolean; 
begin
     fillchar(high,sizeof(high),0);
     assign(input,'tree.in');
     reset(input);
	 assign(output,'tree.out');
	 rewrite(output);
	 fillchar(cs,sizeof(cs),false);
	 read(n);

	 for i:=1 to n do 
		 read(dfs[i]);
	 for i:=1 to n do 
		 read(bfs[i]);	 
	 if n=1 
	 then begin
		          writeln('0.000');
	              exit;
		      end; 
	 for i:=1 to n do 
		 if i<>bfs[1] then 
			 cs[bfs[1],i]:=true;
	 j:=0;
	 gd:=1;
	 pan:=true;
	 js1:=7;gd:=0;
	 while pan do 
	 begin
	    gd:=gd+1;
	    pan:=false;
	     for i:=1 to js do 
			  dfs[i]:=sy[i];
		 js:=js1;
		 i:=0; js1:=0;
	     while i<js do 
	     
	      if dfs[i+1]=bfs[j+1] 
		  then begin
			            i:=i+1;
		                 j:=j+1; 
		                 high[j]:=gd;
			       end
		  else begin
			           i:=i+1;
			           pan:=true;
		               js1:=js1+1;
		               sy[js1]:=dfs[i];
		               cs[bfs[j],sy[js1]]:=true;
		           end;
	 end;
     high[1]:=0;
	 
		  maxl:=0;
	 for i:=1 to n do 
	    for j:=1 to n do 
	    begin
		max:=0;
		     for x:=1 to n do 
				 begin
			          if (cs[x,i]=true)and(cs[x,j]=true)and(high[x]>=max)
			         then begin
						           max:=high[x];
					           end;
			     end;
			if (high[i]+high[j])-2*max>maxl then 
				maxl:=(high[i]+high[j])-2*max;
        end;	
		writeln(maxl,'.000');
	 close(input);
	 close(output);
end.
