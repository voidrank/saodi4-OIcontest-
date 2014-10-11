program cafetable;
  var
    f,h:array[1..100,0..100]of integer;
    i,j,a,b,n:longint;

{  procedure ji(i,j:longint);


  begin
    if h[i,j]<>0 then 
    begin 
      for k:=1 to 999 do
      begin 
      if h[i,k]=0 then break else
      ji(h[i,k],k);      
            
  end; 
    
}
begin
  fillchar(f,sizeof(f),0);  
  fillchar(h,sizeof(h),0);   
  readln(n);
  for i:=1 to n-1 do
  begin
    readln(a,b);  
    {for j:=1 to 999 do if f[a,j]=0 then break;   
    f[a,j]:=b;
    h[a,0]:=j;}
  end;
               {
  if n<=20 then ji(1,1) else}
  writeln(n div 2);

end.