var
	count, times, loopctrl, calctimes, cr: Cardinal;

procedure Process(const value: Cardinal);
var
   k, c1, c2: Cardinal;
begin
	k := Trunc(value / calctimes);
	c1 := k * calctimes;
	c2 := c1 + calctimes;
	if abs(c1 - value) >= abs(c2 - value) then
		write((k + 1) * calctimes, ' ')
	else
		write(k * calctimes, ' ');
end;

begin
	Assign(Input, 'sound.in');
	Assign(Output, 'sound.out');
	Reset(Input);
	Rewrite(Output);
	read(count, times);
	calctimes := 1;
	for loopctrl := 1 to times do
		calctimes := calctimes * 2;
	for loopctrl := 1 to count do
		begin
			read(cr);
			process(cr);
		end;
	Close(Input);
	Close(Output);
end.

