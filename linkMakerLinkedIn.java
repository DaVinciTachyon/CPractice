import java.util.*;
import java.io.*;
class linkMakerLinkedIn implements linkMaker
{
	private String GeoRegion;
	private String NetworkLevel;
	private String Link;
	private String oLink;
	public ArrayList<ArrayList> Links;
	
	linkMakerLinkedIn(String g, int n)
	{
		setGeoRegion(g);
		setNetworkLevel(n);
		Link = oLink = "https://www.linkedin.com/search/results/people/?";
		Links = new ArrayList<ArrayList>();
	}
	
	linkMakerLinkedIn(String g)
	{
		this(g, -1);
	}
	
	linkMakerLinkedIn(int n)
	{
		this("", n);
	}
	
	linkMakerLinkedIn()
	{
		this("", -1);
	}
	
	public void setLink(String l)
	{
		//Does not allow setting of links yet
	}
	
	public void setGeoRegion(String g)
	{
		GeoRegion = g;
	}
	
	public void setGeoRegion(char c1, char c2)
	{
		StringBuilder sb = new StringBuilder();
		sb.append(c1);
		sb.append(c2);
		setGeoRegion(sb.toString());
	}
	
	public void setNetworkLevel(int n)
	{
		switch(n)
		{
			case 1:
				NetworkLevel = "F";
				break;
			case 2:
				NetworkLevel = "S";
				break;
			default:
				NetworkLevel = "";
		}
	}
	
	public String getGeoRegion()
	{
		return GeoRegion;
	}
	
	public String getNetworkLevel()
	{
		return NetworkLevel;
	}
	
	public String makeLink()
	{
		String 	open,
				close,
				doubleQuote,
				colon;
		
		open = "%5B";
		close = "%5D";
		doubleQuote = "%22";
		colon = "%3A";
		
		Link = oLink;
		if(GeoRegion != "")
		{
			amp();
			Link += "facetGeoRegion=" + open + doubleQuote + getGeoRegion() + colon + "0" + doubleQuote + close;
		}
		if(NetworkLevel != "")
		{
			amp();
			Link += "facetNetwork=" + open + doubleQuote + getNetworkLevel() + doubleQuote + close;
		}
		if(Link != oLink)
			Link += "&origin=FACETED_SEARCH";
		
		return Link;
	}
	
	public void makeLinkedInLinks(String file) throws IOException
	{
		Scanner in = new Scanner(new FileReader("countries.txt"));
		String gR;
		int i;
		String temp;
		while(in.hasNextLine())
		{
			gR = in.nextLine();
			setGeoRegion(gR.charAt(3), gR.charAt(4));
			ArrayList<String> LinkG = new ArrayList<String>();
			for(i = 1; i <= 2; i++)
			{
				setNetworkLevel(i);
				LinkG.add(makeLink()); //printToFile()
			}
			Links.add(LinkG);
		}
	}
	
	void amp()
	{
		if(Link != oLink)
			Link += "&";
	}
}