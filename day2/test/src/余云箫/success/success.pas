program success;
  var
    x,ans:real;
    n,i:integer;
begin
assign(input,'success.in');
assign(output,'success.out');
reset(input);
rewrite(output);
read(x,n);
for i := 1to n do
ans:=ans+exp(ln(x))/i;
write(ans:0:4);
close(input);
close(output);
end.
