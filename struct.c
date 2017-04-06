#include <stdio.h>
#include <string.h>

#define N 3

struct info
{
	int id;
	double cost;
	char name[20];
};

void sort(struct info *);
void swap(struct info *, struct info *);

int main()
{
	struct info part[N];
	int i;
	char dump;
	
	for(i = 0; i < N; i++)
	{
		printf("Input the id of the part:\n\t");
		scanf("%d%c", &part[i].id, &dump);
		printf("Input the cost of the part:\n\t");
		scanf("%lf%c", &part[i].cost, &dump);
		printf("Input the name of the part:\n\t");
		gets(part[i].name);
	}
	
	sort(part);
	
	for(i = 0; i < N; i++)
		printf("id: %d\ncost: %lf\nname: %s\n\n", part[i].id, part[i].cost, part[i].name);
	
	return 0;
}

void sort(struct info *a)
{
	int i,
		j;
	struct info temp[2];
	struct info *b;
		
	for(i = 0, b = a; i < N; i++)
		for(j = 0, a = b; j < N - i - 1; j++, a++)
		{
			temp[0] = *a;
			temp[1] = *(a + 1);
			if(temp[0].id > temp[1].id)
				swap(a, a + 1);
			if(temp[0].id == temp[1].id)
			{
				if(temp[0].cost > temp[1].cost)
					swap(a, a + 1);
				if(temp[0].cost == temp[1].cost)
				{
					int m = -1;
					do
					{
						m++;
						if(temp[0].name[m] > temp[1].name[m])
							swap(a, a + 1);
					} while(temp[0].name[m] == temp[1].name[m] && m < 20);
				}
			}
		}
}

void swap(struct info *a, struct info *b)
{
	struct info t;
	
	t = *a;
	*a = *b;
	*b = t;
}