volatile int io_port; // 하드웨어와 연결된 변수

void wait(void) {
	io_port = 0;
	while (io_port != 255)
		;
}
void main()
{
	wait();
}