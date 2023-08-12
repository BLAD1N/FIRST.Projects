extern "C" __declspec(dllexport) int Sum(int a, int b)
{
	return a + b;
}
extern "C" __declspec(dllexport) int Min(int a, int b)
{
	return a - b;
}
extern "C" __declspec(dllexport) int Mult(int a, int b)
{
	return a * b;
}
extern "C" __declspec(dllexport) double Div(int a, int b)
{
	return (double)a / (double)b;
}