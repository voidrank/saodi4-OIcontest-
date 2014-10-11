program success;
    var
       x,n,i:longint;
       s:real;

    function suan(j:longint):real;
        var
            k,h:longint;
    begin
	    h:=1;
        for k:=1 to j do h:=h*x;
        suan:=h;
    end;

begin
	s:=0;
    readln(x,n);
    for i:=1 to n do s:=s+(suan(i)/i);
    writeln(s:0:4);
end.
