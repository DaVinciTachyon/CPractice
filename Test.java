import java.io.*;
class Test
{
	public static void main(String[] args) throws IOException
	{
		linkMakerLinkedIn li = new linkMakerLinkedIn();
		li.makeLinkedInLinks("countries.txt");
	}
}