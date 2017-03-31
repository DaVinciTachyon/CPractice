import java.io.*;
interface linkMaker
{
	void setLink(String l);
	void setGeoRegion(String g);
	void setNetworkLevel(int n);
	
	String getGeoRegion();
	String getNetworkLevel();
	
	String makeLink();
	void makeLinkedInLinks(String file) throws IOException;
}