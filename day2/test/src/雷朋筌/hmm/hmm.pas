program hmm;


begin
  readln(n,m,q);    

  for i:=1 to n read(pi[i]);   

  readln;
  
  for i:=1 to n 
  begin
    for j:=1 to q do read(a[i,j]);    
    readln;
  end;

  for i:=1 to n
  begin
    for j:=1 to n read(b[i,j]);
    readln;  
  end;

  for i:=1 to m do read(o[i]);

  
end.