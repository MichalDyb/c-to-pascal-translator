program Tlumaczenie;

const
f= 'abc';
a= 5;

var
i:Integer;

Begin
i:= 10;
while i>= 1 do 
begin
write('Liczba i wynosi: ', i, #10);
dec(i);
if i>5 then 
begin
write('Liczba i jest wieksza od 5.', #10);
end else
begin
write('Liczba i jest mniejsza od 5.', #10, 'O ile chcesz zwiekszyc liczbe i?:  ');
read(        i);
if i<= -1 then 
begin
write('I nie może być mniejsze od zera.', #10);
for i:=5 downto 1 do
write('Program zostanie wylaczony ', i, #10);
exit;
end;
end;
end;
End.