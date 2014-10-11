program cafetable;
  var
    b:array[1..100000]of longint;
    a:array[1..10000,1..10000] of boolean;
    j,i,x,y,n,maxy,maxx,count:longint;
begin;
assign(input,'cafetable.in');
assign(output,'cafetable.out');
reset(input);
rewrite(output);
read(n);
count:=1;
maxx:=0;
for i :=2 to n do
  begin
  read(x);
  read(y);
  a[x,y]:=true;
  if x>maxx then maxx:=x;
  if y>maxy then maxy:=y;
  end;
for i:= maxx downto 1 do
  begin
  for j:= i to maxy do
    begin
    if a[i,j] then if b[j]=0 then count:=count+1
                             else b[i]:=b[i]+b[j];
    end;
  b[i]:=b[i]+(count div 2);
  count:=1;
  end;
write(b[1]);
close(output);
close(input);
end.
