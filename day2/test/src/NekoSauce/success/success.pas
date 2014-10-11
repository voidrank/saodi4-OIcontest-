const
	fIN = 'success.in';
	fOUT = 'success.out';

var
	base, last, counter: Double;
	lpctrl, time: QWORD;

begin
	Assign(Input, fIN);
	Assign(Output, fOUT);
	Reset(Input);
	Rewrite(Output);
	
	Read(base, time);
	lpctrl := 0;
	counter := 0;
	last := 1;
	while true do
		begin
			Inc(lpctrl);
			last := last * base;
			counter := counter + last / lpctrl;
			//Writeln(base:0:4, '^', lpctrl, '=', (last / base):0:4, '*', last:0:4, '/', lpctrl, '=', (last / lpctrl):0:4);
			last := Trunc(last * 100000) / 100000;
			if last = 0 then
				Break;
			if lpctrl = time then
				Break;
		end;
	Writeln(counter:0:4);
	
	Close(Input);
	Close(Output);
end.
