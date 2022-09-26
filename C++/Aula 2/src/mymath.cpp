float potencia(float b, int exp)
{
	float r = b;
	for(int i=1;i<exp;i++)
	{
		r *=b;
	}
	return r;
}

int Factorial(int Fac){
int Result = 1;
for(int i=Fac;i>1;i--){
	Result*=i;
}
return Result;
}

float Y(float x){
	return Factorial(5)*potencia(x,3)+Factorial(4)*potencia(x,2)+Factorial(3)*x+2;
}