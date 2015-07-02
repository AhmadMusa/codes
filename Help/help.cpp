/*
Ahmad Musa,
Dept. Of CSE, KUET.
This is an Object Oriented Project in CPP
Project Name : Shortest Path
*/

#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <cstring>
#include <cstdio>

using namespace std;

class Area
{
protected:
    string nameOfArea;
    static int totalArea;
    int numberAssigned;
public:
    Area() {}
    Area( string );
    void setName(string);
    void setNumber(int);
    string getName();
    int getNumber() { return numberAssigned; }


};

vector<Area> areaStore;
class Road
{
    Area start;
    Area stop;
    int distance;
  public:
      Road(){}
      Road( Area&, Area&, int);
      Area getStartArea() { return start; }
      Area getStopArea() { return stop; }
      int getDistance() { return distance; }
      friend ostream& operator<<(ostream&, Road&);
};

class City
{
    string cityName;
    Area *cityAreas;
    int currentAreas;
    Road *cityRoads;
    int currentRoads;
    int cal_dis[100];
    vector< pair<int,int> > roadMap[100];
public:
    City();
    City(string, int, int );
    friend City& operator>>(City&, Area&);
    friend City& operator>>(City&, Road&);
    void showMap();
    void showShortestDistance(Area& , Area& , int);
     int dijkstra( Area &, Area &);
};


int Area::totalArea=0;
Area::Area(string name)
{
    nameOfArea = name;
    numberAssigned = totalArea++;
}
string Area::getName()
{
    return nameOfArea;
}

void Area::setName(string name)
{
    nameOfArea = name;
}
void Area::setNumber(int n)
{
    numberAssigned = n;
}


Road::Road( Area& area1, Area & area2, int d)
{
    start = area1;
    stop = area2;
    distance = d;
}
ostream& operator<<(ostream& out, Road& r)
{
    Area st = r.getStartArea();
    Area en = r.getStopArea();

    int d = r.getDistance();

    printf("\t\t\t     %d \n",d);
    printf("\t ");
    cout<<"("<<st.getNumber()+1<<") "<<st.getName();
    printf("\t----------> \t");
    cout<<"("<<en.getNumber()+1<<") "<<en.getName()<<endl;
    return out;

}


City::City()
{
    currentAreas = 0;
}
City::City(string name , int t, int p)
{
    cityName = name;
    cityAreas = new Area[t+1];
    currentAreas =0;
    cityRoads= new Road[p+1];
    currentRoads=0;
}

void City::showMap()
{
    cout<<"\t\tWelcome to "<<cityName<<"  CITY !!!\n\n";

    cout<<"\t Area Name\tDistance(k.m.)  Area Name\n";
    printf("       ---------------------------------------------\n");
    for(int i =0; i<currentRoads; i++)
    {
        cout<<cityRoads[i]<<endl;
    }
}
void City::showShortestDistance(Area & area1, Area& area2, int dis)
{
    cout<<" \n\n   The shortest distance from "<<area1.getName()<<"  to "<<area2.getName()<<endl;
    cout<<" \n\t\t\t is only "<<dis<<" kilometers"<<endl;
}

City& operator>>(City &c, Area &a)
{

    c.cityAreas[c.currentAreas].setName(a.getName());

    c.currentAreas++;

    return c;
}
City& operator>>(City &c, Road &a)
{
    c.cityRoads[c.currentRoads++]= a;
    Area st = a.getStartArea();
    Area en = a.getStopArea();
    int d = a.getDistance();
    int u = st.getNumber();
    int v = en.getNumber();

   c.roadMap[u].push_back( pair<int,int> (v,d));

    return c;
}


//dijkstra algorithm for shortest path


int City::dijkstra( Area& st, Area &des)
{
    int s = st.getNumber();
    int destination = des.getNumber();
    priority_queue<pair<int,int> > Q;
    for(int i =0; i<100; i++)
        cal_dis[i]=1000;

    cal_dis[s]=0;
    Q.push(pair<int,int>(0,s));
    while(!Q.empty())
    {
        pair<int,int> top = Q.top();
        Q.pop();
        int v = top.second;
        int d = top.first;

        for (vector< pair<int,int> >::const_iterator it = roadMap[v].begin(); it != roadMap[v].end(); it++)
        {

            int v2 = it->first;
            int cost = it->second;

            if (cal_dis[v2] > cal_dis[v] + cost)
            {
                cal_dis[v2] = cal_dis[v] + cost;
                Q.push(pair<int,int>(cal_dis[v2], v2));
            }
        }
    }
    showShortestDistance( st, des, cal_dis[destination]);
}


int main()
{

Area teligati("Teligati");areaStore.push_back(teligati);
Area shibbari("Shib bari");areaStore.push_back(shibbari);
Area newMarket("New market");areaStore.push_back(newMarket);
Area rupsha("Rupsha");areaStore.push_back(rupsha);

// Road ( name , start area, end area , distance )
Road r(teligati, shibbari, 12);
Road r1(newMarket, rupsha , 5);
Road r2(teligati, rupsha, 30);
Road r3(shibbari, newMarket, 5);

// City ( City name, number of areas , number of roads )

City khulna("Khulna", 4 , 4);

khulna>>teligati>>shibbari>>newMarket>>rupsha;
khulna>>r>>r1>>r2>>r3;

khulna.showMap();

cout<<" Enter the numbers of the two area you want to calculate the shortest distance \n";
int n1, n2 ;
cin>>n1>>n2;

khulna.dijkstra(areaStore[n1-1],areaStore[n2-1]);
//khulna.dijkstra(teligati, rupsha);

return 0;

}

