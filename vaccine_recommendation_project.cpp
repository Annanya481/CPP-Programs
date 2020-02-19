#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<stdio.h>
#include<Windows.h>
#include<string.h>
using namespace std;
int chikenpox(int date, int month, int year);
int D_T_WC(int date, int month, int year);
int Influenza(int date, int month, int year);
int HepatitusA(int date, int month, int year);
int HepatitusB(int date, int month, int year);
int MMR(int date, int month, int year);
int PCV(int date, int month, int year);
int Polio(int date, int month, int year);
int RV(int date, int month, int year);

	//public health centres
class Health_Centres
{
	public:
		char add[100];
		int n;
		int m;
		int c;

		void Add()
		{
			cout<<"Please enter your locality to know the address of the closest Public"<<"\n";
			cout<<"Health Centre."<<"\n";
			cin>>add;
			n=0;
			n=strlen(add);
			for(int i=0;i<n;i++)
			{
				if((add[i]>=65)&&(add[i]<=91))
				{
					tolower(add[i]);
				}
			}

			//loop to check for all the public health centres in bangalore
			//anekal
			if(strcmp(add,"anekal")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Anekal UPHC Urban Primary Health Center"<<"\n";
				cout<<"Gh Anekal Premises, Primary Health Centre Anekal,"<<"\n";
				cout<<"Taluk Office Road, Near Ksrtc Busstand, Anekal Taluk - 562106."<<"\n";
			}
			else if(strcmp(add,"attibele")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Attibele Health Sub-center"<<"\n";
				cout<<"Hosur Main Road, Near Busstand, Anekal Taluk - 562107"<<"\n";
			}
			else if(strcmp(add,"balluru")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Balluru UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Balluru, Attibele To Mattigiri Road,"<<"\n";
				cout<<"Near Nagarakunte, Anekal Taluk - 562107"<<"\n";
			}
			else if(strcmp(add,"chandapur")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Chandapura 24X7 UPHC Urban Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Chandapura, Dommasandra"<<"\n";
				cout<<"Road, Opp. Larves College Of Nursing, Anekal Taluk - 560099"<<"\n";
				cout<<"Phone Number: 8027835644"<<"\n";
			}
			else if(strcmp(add,"dommasandra")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Dommasandra 24X7 UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Dommasandra, Vartur"<<"\n";
				cout<<"Sarjapura Main Road, Near Busstand, Anekal Taluk - 562125."<<"\n";
			}
			else if(strcmp(add,"gudahatti")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Gudahatti UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Guddahatti, Muttanalluru Road,"<<"\n";
				cout<<"Attached To Vetarnary Hospital, Anekal Taluk - 562107."<<"\n";
			}
			else if(strcmp(add,"haragadde")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Haragadde 24X7 UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Haragadde,"<<"\n";
				cout<<"Bannerugatta & Anekal Main Road, Near Busstand, Anekal Taluk - 560105."<<"\n";
			}
			else if(strcmp(add,"hebbagodi")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Hebbagodi 24X7 UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Hebbagodi, Tirupalya, Industrial Near Govt "<<"\n";
				cout<<"School, Anekal Taluk - 560099."<<"\n";
			}
			else if(strcmp(add,"indlawadi")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Indlawadi UPHC Primary Health Cente"<<"\n";
				cout<<"Harohalli Main Road, Near Governament School,"<<"\n";
				cout<<"Anekal Taluk - 562106."<<"\n";
			}
			else if(strcmp(add,"jigani")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Jigani 24X7 UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Jigani, Bannerugatta & Anekal"<<"\n";
				cout<<"Main Road, Near Telephone Exchange, Anekal Taluk - 560105."<<"\n";
			}
			else if(strcmp(add,"mahanthalingapura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Mahanthalingapura UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Mahanthalingapura, Harohalli"<<"\n";
				cout<<"Jigani Road, Near Harohalli Road, Anekal Taluk - 560105."<<"\n";
			}
			else if(strcmp(add,"marsur")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Marsur UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Marasuru, Chandapura & Anekal"<<"\n";
				cout<<"Main Road, Near Railway Level Cross, Anekal Taluk - 562106."<<"\n";
			}
			else if(strcmp(add,"sarjapura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Sarjapura UPHC Primary Health Center"<<"\n";
				cout<<"Primary Health Centre Sarjapura, Sarjapura & Dommasandra"<<"\n";
				cout<<"Main Road, Opp. Police Station, Anekal Taluk - 562125."<<"\n";
			}
			//bbmp
			else if(strcmp(add,"a d halli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"A. D. Halli H.C."<<"\n";
				cout<<"#4, 17th Cross, 4th Stage, 3rd Block, Basaveshwaranagar - 47."<<"\n";
				cout<<"Phone Number: 22975671"<<"\n";
			}
			else if(strcmp(add,"audugodi")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Audugodi H.C."<<"\n";
				cout<<"Koramangala Road, Bangalore - 30."<<"\n";
				cout<<"Phone Number: 22975870"<<"\n";
			}
			else if(strcmp(add,"anjanappa garden")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Anjanappa Garden H.C."<<"\n";
				cout<<"Near Balemandi, Binnypet, Bangalore."<<"\n";
				cout<<"Phone Number: 22975680"<<"\n";
			}
			else if(strcmp(add,"avalahalli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Avalahalli H.C."<<"\n";
				cout<<"17th Main, Muneshwara Block, Avalahalli, Bangalore - 85."<<"\n";
				cout<<"Phone Number: 22975782"<<"\n";
			}
			else if(strcmp(add,"bagalur")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Bagalur H.C."<<"\n";
				cout<<"Old Bagalur Layout, Bangalore."<<"\n";
				cout<<"Phone Number: 22975885"<<"\n";
			}
			else if(strcmp(add,"bapujinagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Bapujinagar H.C."<<"\n";
				cout<<"2nd Main Road, Mysore Road, Near Ragavendra Road, Bangalore - 26."<<"\n";
				cout<<"Phone Number: 22975793"<<"\n";
			}
			else if(strcmp(add,"bhuvaneshwari nagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Bhuvaneshwari Nagar H.C."<<"\n";
				cout<<"Opp. Ganesha temple, C.V. Raman Nagar, Bangalore - 93."<<"\n";
				cout<<"Phone Number: 22975884"<<"\n";
			}
			else if(strcmp(add,"c t bed")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"C. T. Bed H. C."<<"\n";
				cout<<"4th Cross, Chennamanakere, BSK 2nd Stage, Near SSM School, Bangalore - 28."<<"\n";
				cout<<"Phone Number: 22975775"<<"\n";
			}
			else if(strcmp(add,"j p nagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"J. P. Nagar H.C."<<"\n";
				cout<<"1st Phase, Sarakki, Bangalore - 78."<<"\n";
				cout<<"Phone Number: 22975771"<<"\n";
			}
			else if(strcmp(add,"k g halli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"K. G. Halli H.C."<<"\n";
				cout<<"Behind K.G. Halli PHC, Near K.G. Halli Police Station, K.G. Halli, Bangalore."<<"\n";
				cout<<"Phone Number: 22975779"<<"\n";
			}
			else if(strcmp(add,"kodihalli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Kodihalli H.C."<<"\n";
				cout<<"Next to Maruthi Towers, Airport Road, Bangalore - 08."<<"\n";
				cout<<"Phone Number: 22975879"<<"\n";
			}
			else if(strcmp(add,"kumaraswami layout")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Kumaraswami Layout H. C."<<"\n";
				cout<<"Opp. To Police Station, K.S. Layout, Bangalore."<<"\n";
				cout<<"Phone Number: 22975789"<<"\n";
			}
			else if(strcmp(add,"mathikere")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Mathikere H.C."<<"\n";
				cout<<"B.K. Nagar, Bangalore - 22."<<"\n";
				cout<<"Phone Number: 22975822"<<"\n";
			}
			else if(strcmp(add,"moodalapalaya")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Moodalapalya H.C."<<"\n";
				cout<<"GKW Layout & Saraswathi, Bangalore - 40."<<"\n";
				cout<<"Phone Number: 22975768"<<"\n";
			}
			else if(strcmp(add,"pantharpalya")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Pantharpalya H.C."<<"\n";
				cout<<"Mysore Road main road, Nayanadahalli, Pantharapalya, Bangalore - 26."<<"\n";
				cout<<"Phone Number: 22975890"<<"\n";
			}
			else if(strcmp(add,"shankar nagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Shankar Nagar H. C."<<"\n";
				cout<<"6th Cross, Vijayanandnagar, Mahalakshmi Layout, Bangalore - 57."<<"\n";
				cout<<"Phone Number: 22975674"<<"\n";
			}
			else if(strcmp(add,"thavarkere")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Thavarekere H. C."<<"\n";
				cout<<"1st Main Road, DRC Post, Bangalore - 76."<<"\n";
				cout<<"Phone Number: 22975777"<<"\n";
			}
			else if(strcmp(add,"azadnagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Azadnagar UFWC"<<"\n";
				cout<<"Kasturba Nagar, Mysore Road, Bangalore - 26."<<"\n";
				cout<<"Phone Number: 22975787"<<"\n";
			}
			else if(strcmp(add,"chellaram")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Chellaram UFWC"<<"\n";
				cout<<"Opp. Vihal Theatre, Magadi Main Road, Kamakshipalya, Bangalore - 70."<<"\n";
				cout<<"Phone Number: 22975669"<<"\n";
			}
			else if(strcmp(add,"cox town")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Cox Town UFWC"<<"\n";
				cout<<"M. M. Road, Opp. Cox Town Market, Bangalore - 05."<<"\n";
				cout<<"Phone Number: 22975881"<<"\n";
			}
			else if(strcmp(add,"d j halli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"D. J. Halli UFWC"<<"\n";
				cout<<"Opp. Football Stadium, Near Ananth Theatre, Bangalore - 45."<<"\n";
				cout<<"Phone Number: 22975684"<<"\n";
			}
			else if(strcmp(add,"ganganagara")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Ganganagara UFWC"<<"\n";
				cout<<"3rd Main, 3rd Cross, HMT Layout, Banglore - 32."<<"\n";
				cout<<"Phone Number: 22975795"<<"\n";
			}
			else if(strcmp(add,"jayanagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Jayanagar UFWC"<<"\n";
				cout<<"9th Main, 2nd Block, Jayanagar, Bangalore - 11."<<"\n";
				cout<<"Phone Number: 22975871"<<"\n";
			}
			else if(strcmp(add,"m r palya")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"M.R. Palya UFWC"<<"\n";
				cout<<"J. C. Nagar, Main Road, Bangalore - 06."<<"\n";
				cout<<"Phone Number: 22975676"<<"\n";
			}
			else if(strcmp(add,"magadi road")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Magadi Road UFWC"<<"\n";
				cout<<"2nd Cross, Near BWSSB Water Tank, Magadi Road, Bangalore - 23."<<"\n";
				cout<<"Phone Number: 22975682"<<"\n";
			}
			else if(strcmp(add,"n r colony")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"N. R. Colony UFWC"<<"\n";
				cout<<"Subbaraam Shetty Road, Basavanagudi, Bangalore - 04."<<"\n";
				cout<<"Phone Number: 22975667"<<"\n";
			}
			else if(strcmp(add,"shantinagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Shanthinagar UFWC"<<"\n";
				cout<<"Near Hockey Stadium, Nanjappa Circle, Bangalore - 27."<<"\n";
				cout<<"Phone Number: 22975790"<<"\n";
			}
			else if(strcmp(add,"sirsi road")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Sirsi Road UFWC"<<"\n";
				cout<<"7th Cross, Chamarajpet, Bangalore - 18."<<"\n";
				cout<<"Phone Number: 22975781"<<"\n";
			}
			else if(strcmp(add,"sonnenahalli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Sonnenahalli UFWC"<<"\n";
				cout<<"Opp. Ganesha Temple, Vanarpet, Viveknagar, Bangalore - 47."<<"\n";
				cout<<"Phone Number: 22975876"<<"\n";
			}
			else if(strcmp(add,"t r mill")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"T. R. Mill UFWC"<<"\n";
				cout<<"Opp. Deer Park, Dhobhighat."<<"\n";
				cout<<"Phone Number: 22975685"<<"\n";
			}
			//bangalore north
			else if(strcmp(add,"apts yelahanka")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"APTS Yelahanka UPHC"<<"\n";
				cout<<"Armed Police Training School, Bagaluru Cross - 560063."<<"\n";
			}
			else if(strcmp(add,"abbigere")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Abbigere 24/7 UPHC"<<"\n";
				cout<<"Kempegowda Gardern, Near Abbigere Park - 560090."<<"\n";
			}
			else if(strcmp(add,"rajajinagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Rajajinagar UPHC"<<"\n";
				cout<<"Near Malleshwaram, Close to Shantinagar."<<"\n";
			}
			else if(strcmp(add,"mallacandara")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Mallacandara UPHC"<<"\n";
				cout<<"Jalahalli West, MEL Layout"<<"\n";
			}
			//bangalore south
			else if(strcmp(add,"agara")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Agara UPHC"<<"\n";
				cout<<"143/3, Saibaba Nagar, Srirampura - 560021."<<"\n";
			}
			else if(strcmp(add,"viveknagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Viveknagar DISP"<<"\n";
				cout<<"Near Anjenya Temple, Main Road - 560047."<<"\n";
			}
			else if(strcmp(add,"anjanapura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Anjanapura UPHC"<<"\n";
				cout<<"Anjanapura 2nd Block, Anjanapura Twp - 560062."<<"\n";
			}
			else if(strcmp(add,"rajagopala nagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Rajagopala Nagar UPHC"<<"\n";
				cout<<"137, Rajagopala Nagar Main Road, 3rd Cross, K.G Nagar,"<<"\n";
				cout<<"Lagerre - 560086."<<"\n";
			}
			else if(strcmp(add,"arakere")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Arakere UPHC"<<"\n";
				cout<<"Residential Area on Bannerghatta Road."<<"\n";
			}
			else if(strcmp(add,"bomanahalli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Bomanahalli UPHC"<<"\n";
				cout<<"Begur Main Road, BBMP, Word Ofice - 560068."<<"\n";
			}
			else if(strcmp(add,"uttarahalli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Uttarahalli UPHC"<<"\n";
				cout<<"Near Raghavendra Temple, 2nd Main Uttarahalli - 560061."<<"\n";
			}
			else if(strcmp(add,"vasanthpura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Vasanthpura UPHC"<<"\n";
				cout<<"Banashankari, 5th Stage, Subaramanyapura 560078."<<"\n";
			}
			//bangalore east
			else if(strcmp(add,"a narayananapura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"A Narayanapura UPHC"<<"\n";
				cout<<"Mahadevapura - 560016."<<"\n";
			}
			else if(strcmp(add,"azad nagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Azad Nagar DISP"<<"\n";
				cout<<"Basvanagudi (Head Office) - 560026."<<"\n";
			}
			else if(strcmp(add,"dodakanahalli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Dodakanahalli UPHC"<<"\n";
				cout<<"Janath Colony, Chikka Bellandur - 560035."<<"\n";
			}
			else if(strcmp(add,"doddanakundi")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Doddanakundi 24/7"<<"\n";
				cout<<"CT Road, Marathahalli Road - 560037."<<"\n";
			}
			else if(strcmp(add,"gunjuru")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Gunjuru UPHC"<<"\n";
				cout<<"Gunjuru Varthure Hobali, Gunjuru Post - 560087."<<"\n";
			}
			else if(strcmp(add,"hagadur")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Hagadur UPHC"<<"\n";
				cout<<"Immadahalli, Whitefield - 560066."<<"\n";
			}
			else if(strcmp(add,"halanayakanahalli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Halanayakanahalli"<<"\n";
				cout<<"Gattahalli, Sai Sree Layout, Rajiv Nagar are nearby localities."<<"\n";
			}
			else if(strcmp(add,"jeevan bima nagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Jeevan Bima Nagar"<<"\n";
				cout<<"2km from Soft Road, Indiranagar, near HAL Airport - 560075."<<"\n";
			}
			else if(strcmp(add,"k narayanapura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"K Narayanapura"<<"\n";
				cout<<"Kaveri Nagar, Near Dr.Bendre Layout - 560077."<<"\n";
			}
			else if(strcmp(add,"k.s halli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"K.S Halli UPHC"<<"\n";
				cout<<"Yerrapanahalli Road, Mitganahalli, Kadurosonahalli - 562149."<<"\n";
			}
			else if(strcmp(add,"kadugodi")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Kadugodi 24/7"<<"\n";
				cout<<"Whitefield - 560067."<<"\n";
			}
			else if(strcmp(add,"kannur")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Kannur"<<"\n";
				cout<<"Chikkagubi Village, Sonam Layout."<<"\n";
			}
			else if(strcmp(add,"kodathi")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Kodathi"<<"\n";
				cout<<"1st floor, 6th Cross, 1st Main Block, Koramangala - 560034."<<"\n";
			}
			else if(strcmp(add,"konena agrahara")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Konena Agrahara"<<"\n";
				cout<<"Murgesh Pallya = 560017."<<"\n";
			}
			else if(strcmp(add,"koramangala")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Koramangala NS"<<"\n";
				cout<<"Koramangala - 560095."<<"\n";
			}
			else if(strcmp(add,"mandur")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Mandur"<<"\n";
				cout<<"Near Kaveri Grameena Bank - 562129."<<"\n";
			}
			else if(strcmp(add,"marathahalli")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Marathahalli"<<"\n";
				cout<<"CT Road, Marathahalli Road - 560037."<<"\n";
			}
			else if(strcmp(add,"rammamurthynagar")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Rammamurthynagar UPHC"<<"\n";
				cout<<"Kuvempunagar, Doovavaninagar - 560016."<<"\n";
			}
			else if(strcmp(add,"siddapura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Siddapura UPHC"<<"\n";
				cout<<"CT Road, Marathahalli Road - 560037."<<"\n";
			}
			else if(strcmp(add,"sigehalli mantax")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Sigehalli Mantax"<<"\n";
				cout<<"Krishnarajapuram - 560049."<<"\n";
			}
			else if(strcmp(add,"thanisandra")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Thanisandra UPHC"<<"\n";
				cout<<"Mesthri Palya, Srirampura."<<"\n";
			}
			else if(strcmp(add,"varthuru")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Varthuru 24/7 PHC"<<"\n";
				cout<<"Balagere Road, Varthuru kere, Dharmaraya Temple - 560082."<<"\n";
			}
			else if(strcmp(add,"vibuthipura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Vibuthipura UPHC"<<"\n";
				cout<<"Basavanagar, Rajanna Colony."<<"\n";
			}
			else if(strcmp(add,"vijayapura")==0)
			{
				cout<<"The adress to the nearest public health centre is: "<<"\n";
				cout<<"Vijayapura UPHC"<<"\n";
				cout<<"Near Devanahalli."<<"\n";
			}
			else
			{
				cout<<"We are unable to find your location. Please enter the following"<<"\n";
				cout<<"number based on your location.\n";
				bts:
				cout<<"1.Bangalore North"<<"\n";
				cout<<"2.Bangalore South"<<"\n";
				cout<<"3.Bangalore East"<<"\n";
				cout<<"4.BBMP"<<"\n";
				cout<<"5.Annekal"<<"\n";
				cin>>m;
				cout<<"Choose the closest location to know the nearest PHC.\n";
				if(m==1)
				{
					cout<<"1.APTS Yelahanka"<<"\n";
					cout<<"2.Abbigere"<<"\n";
					cout<<"3.Rajajinagar"<<"\n";
					cout<<"4.Mallacandara"<<"\n";
					cin>>c;
					switch(c)
					{
						case 1:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"APTS Yelahanka UPHC"<<"\n";
								cout<<"Armed Police Training School, Bagaluru Cross - 560063."<<"\n";
								break;
							}
						case 2:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Abbigere 24/7 UPHC"<<"\n";
								cout<<"Kempegowda Gardern, Near Abbigere Park - 560090."<<"\n";
								break;
							}
						case 3:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Rajajinagar UPHC"<<"\n";
								cout<<"Near Malleshwaram, Close to Shantinagar."<<"\n";
								break;
							}
						case 4:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Mallacandara UPHC"<<"\n";
								cout<<"Jalahalli West, MEL Layout"<<"\n";
								break;
							}
						default:
							{
								cout<<"Wrong Entry. Please type in the correct number."<<"\n";
								goto bts;
							}
					}
				}
				else if(m==2)
				{
					cout<<"1.Agara"<<"\n";
					cout<<"2.Viveknagar"<<"\n";
					cout<<"3.Rajagopala Nagar"<<"\n";
					cout<<"4.Arakere"<<"\n";
					cout<<"5.Bomanahalli"<<"\n";
					cout<<"6.Uttarahalli"<<"\n";
					cout<<"7.Vasanthpura"<<"\n";
					cout<<"8.Anjanapura"<<"\n";
					cin>>c;
					switch(c)
					{
						case 1:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Agara UPHC"<<"\n";
								cout<<"143/3, Saibaba Nagar, Srirampura - 560021."<<"\n";
								break;
							}
						case 2:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Viveknagar DISP"<<"\n";
								cout<<"Near Anjenya Temple, Main Road - 560047."<<"\n";
								break;
							}
						case 3:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Rajagopala Nagar UPHC"<<"\n";
								cout<<"137, Rajagopala Nagar Main Road, 3rd Cross, K.G Nagar,"<<"\n";
								cout<<"Lagerre - 560086."<<"\n";
								break;
							}
						case 4:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Arakere UPHC"<<"\n";
								cout<<"Residential Area on Bannerghatta Road."<<"\n";
								break;
							}
						case 5:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Bomanahalli UPHC"<<"\n";
								cout<<"Begur Main Road, BBMP, Word Ofice - 560068."<<"\n";
								break;
							}
						case 6:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Uttarahalli UPHC"<<"\n";
								cout<<"Near Raghavendra Temple, 2nd Main Uttarahalli - 560061."<<"\n";
								break;
							}
						case 7:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Vasanthpura UPHC"<<"\n";
								cout<<"Banashankari, 5th Stage, Subaramanyapura 560078."<<"\n";
								break;
							}
						case 8:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Anjanapura UPHC"<<"\n";
								cout<<"Anjanapura 2nd Block, Anjanapura Twp - 560062."<<"\n";
								break;
							}
						default:
							{
								cout<<"Wrong Entry. Please type in the correct number."<<"\n";
								goto bts;
							}
					}
				}
				else if(m==3)
				{
					cout<<"1.A Narayanapura"<<"\n";
					cout<<"2.Azad Nagar"<<"\n";
					cout<<"3.Dodakanahalli"<<"\n";
					cout<<"4.Gunjuru"<<"\n";
					cout<<"5.Hagadur"<<"\n";
					cout<<"6.Halanayakanahalli"<<"\n";
					cout<<"7.Jeevan Bima Nagar"<<"\n";
					cout<<"8.K Narayanapura"<<"\n";
					cout<<"9.K.S Halli UPHC"<<"\n";
					cout<<"10.Kadugodi"<<"\n";
					cout<<"11.Kannur"<<"\n";
					cout<<"12.Kodathi"<<"\n";
					cout<<"13.Konena Agrahara"<<"\n";
					cout<<"14.Koramangala NS"<<"\n";
					cout<<"15.Mandur"<<"\n";
					cout<<"16.Marathahalli"<<"\n";
					cout<<"17.Rammamurthynagar"<<"\n";
					cout<<"18.Siddapura"<<"\n";
					cout<<"19.Sigehalli Mantax"<<"\n";
					cout<<"20.Thanisandra"<<"\n";
					cout<<"21.Varthuru"<<"\n";
					cout<<"22.Halanayakanahalli"<<"\n";
					cout<<"23.Vibuthipura"<<"\n";
					cout<<"24.Vijayapura"<<"\n";
					cin>>c;
					switch(c)
					{
						case 1:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"A Narayanapura UPHC"<<"\n";
								cout<<"Mahadevapura - 560016."<<"\n";
								break;
							}
						case 2:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Azad Nagar DISP"<<"\n";
								cout<<"Basvanagudi (Head Office) - 560026."<<"\n";
								break;
							}
						case 3:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Dodakanahalli UPHC"<<"\n";
								cout<<"Janath Colony, Chikka Bellandur - 560035."<<"\n";
								break;
							}
						case 4:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Doddanakundi 24/7"<<"\n";
								cout<<"CT Road, Marathahalli Road - 560037."<<"\n";
								break;
							}
						case 5:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Gunjuru UPHC"<<"\n";
								cout<<"Gunjuru Varthure Hobali, Gunjuru Post - 560087."<<"\n";
								break;
							}
						case 6:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Hagadur UPHC"<<"\n";
								cout<<"Immadahalli, Whitefield - 560066."<<"\n";
								break;
							}
						case 7:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Halanayakanahalli"<<"\n";
								cout<<"Gattahalli, Sai Sree Layout, Rajiv Nagar are nearby localities."<<"\n";
								break;
							}
						case 8:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Jeevan Bima Nagar"<<"\n";
								cout<<"2km from Soft Road, Indiranagar, near HAL Airport - 560075."<<"\n";
								break;
							}
						case 9:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"K Narayanapura"<<"\n";
								cout<<"Kaveri Nagar, Near Dr.Bendre Layout - 560077."<<"\n";
							}
						case 10:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"K.S Halli UPHC"<<"\n";
								cout<<"Yerrapanahalli Road, Mitganahalli, Kadurosonahalli - 562149."<<"\n";
								break;
							}
						case 11:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Kadugodi 24/7"<<"\n";
								cout<<"Whitefield - 560067."<<"\n";
								break;
							}
						case 12:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Kannur"<<"\n";
								cout<<"Chikkagubi Village, Sonam Layout."<<"\n";
								break;
							}
						case 13:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Kodathi"<<"\n";
								cout<<"1st floor, 6th Cross, 1st Main Block, Koramangala - 560034."<<"\n";
								break;
							}
						case 14:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Konena Agrahara"<<"\n";
								cout<<"Murgesh Pallya = 560017."<<"\n";
								break;
							}
						case 15:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Koramangala NS"<<"\n";
								cout<<"Koramangala - 560095."<<"\n";
								break;
							}
						case 16:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Mandur"<<"\n";
								cout<<"Near Kaveri Grameena Bank - 562129."<<"\n";
								break;
							}
						case 17:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Marathahalli"<<"\n";
								cout<<"CT Road, Marathahalli Road - 560037."<<"\n";
								break;
							}
						case 18:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Rammamurthynagar UPHC"<<"\n";
								cout<<"Kuvempunagar, Doovavaninagar - 560016."<<"\n";
								break;
							}
						case 19:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Siddapura UPHC"<<"\n";
								cout<<"CT Road, Marathahalli Road - 560037."<<"\n";
								break;
							}
						case 20:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Sigehalli Mantax"<<"\n";
								cout<<"Krishnarajapuram - 560049."<<"\n";
							}
						case 21:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Thanisandra UPHC"<<"\n";
								cout<<"Mesthri Palya, Srirampura."<<"\n";
								break;
							}
						case 22:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Varthuru 24/7 PHC"<<"\n";
								cout<<"Balagere Road, Varthuru kere, Dharmaraya Temple - 560082."<<"\n";
								break;
							}
						case 23:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Vibuthipura UPHC"<<"\n";
								cout<<"Basavanagar, Rajanna Colony."<<"\n";
								break;
							}
						case 24:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Vijayapura UPHC"<<"\n";
								cout<<"Near Devanahalli."<<"\n";
								break;
							}
						default:
							{
								cout<<"Wrong Entry. Please type in the correct number."<<"\n";
								goto bts;
							}
					}
				}
				else if(m==4)
				{
					cout<<"1.A. D. Halli"<<"\n";
					cout<<"2.Audugodi"<<"\n";
					cout<<"3.Anjanappa Garden"<<"\n";
					cout<<"4.Avalahalli"<<"\n";
					cout<<"5.Bagalur"<<"\n";
					cout<<"6.Bapujinagar"<<"\n";
					cout<<"7.Bhuvaneshwari nagar"<<"\n";
					cout<<"8.C. T. Bed"<<"\n";
					cout<<"9.J. P. Nagar"<<"\n";
					cout<<"10.K. G. Halli"<<"\n";
					cout<<"11.Kodihalli"<<"\n";
					cout<<"12.Mathikere"<<"\n";
					cout<<"13.Moodalapalya"<<"\n";
					cout<<"14.Pantharpalya"<<"\n";
					cout<<"15.Shankar Nagar"<<"\n";
					cout<<"16.Thavarekere"<<"\n";
					cout<<"17.Azadnagar"<<"\n";
					cout<<"18.Chellaram"<<"\n";
					cout<<"19.Cox Town"<<"\n";
					cout<<"20.D. J. Halli"<<"\n";
					cout<<"21.Ganganagara"<<"\n";
					cout<<"22.Jayanagar"<<"\n";
					cout<<"23.M.R. Palya"<<"\n";
					cout<<"24.Magadi Road"<<"\n";
					cout<<"25.N. R. Colony"<<"\n";
					cout<<"26.Shanthinagar"<<"\n";
					cout<<"27.Sirsi Road"<<"\n";
					cout<<"28.Sonnenahalli"<<"\n";
					cout<<"29.T. R. Mill"<<"\n";
					cin>>c;
					switch(c)
					{
						case 1:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"A. D. Halli H.C."<<"\n";
								cout<<"#4, 17th Cross, 4th Stage, 3rd Block, Basaveshwaranagar - 47."<<"\n";
								cout<<"Phone Number: 22975671"<<"\n";
								break;
							}
						case 2:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Audugodi H.C."<<"\n";
								cout<<"Koramangala Road, Bangalore - 30."<<"\n";
								cout<<"Phone Number: 22975870"<<"\n";
								break;
							}
						case 3:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Anjanappa Garden H.C."<<"\n";
								cout<<"Near Balemandi, Binnypet, Bangalore."<<"\n";
								cout<<"Phone Number: 22975680"<<"\n";
								break;
							}
						case 4:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Avalahalli H.C."<<"\n";
								cout<<"17th Main, Muneshwara Block, Avalahalli, Bangalore - 85."<<"\n";
								cout<<"Phone Number: 22975782"<<"\n";
								break;
							}
						case 5:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Bagalur H.C."<<"\n";
								cout<<"Old Bagalur Layout, Bangalore."<<"\n";
								cout<<"Phone Number: 22975885"<<"\n";
								break;
							}
						case 6:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Bapujinagar H.C."<<"\n";
								cout<<"2nd Main Road, Mysore Road, Near Ragavendra Road, Bangalore - 26."<<"\n";
								cout<<"Phone Number: 22975793"<<"\n";
								break;
							}
						case 7:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Bhuvaneshwari Nagar H.C."<<"\n";
								cout<<"Opp. Ganesha temple, C.V. Raman Nagar, Bangalore - 93."<<"\n";
								cout<<"Phone Number: 22975884"<<"\n";
								break;
							}
						case 8:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"C. T. Bed H. C."<<"\n";
								cout<<"4th Cross, Chennamanakere, BSK 2nd Stage, Near SSM School, Bangalore - 28."<<"\n";
								cout<<"Phone Number: 22975775"<<"\n";
								break;
							}
						case 9:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"J. P. Nagar H.C."<<"\n";
								cout<<"1st Phase, Sarakki, Bangalore - 78."<<"\n";
								cout<<"Phone Number: 22975771"<<"\n";
							}
						case 10:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"K. G. Halli H.C."<<"\n";
								cout<<"Behind K.G. Halli PHC, Near K.G. Halli Police Station, K.G. Halli, Bangalore."<<"\n";
								cout<<"Phone Number: 22975779"<<"\n";
								break;
							}
						case 11:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Kodihalli H.C."<<"\n";
								cout<<"Next to Maruthi Towers, Airport Road, Bangalore - 08."<<"\n";
								cout<<"Phone Number: 22975879"<<"\n";
								break;
							}
						case 12:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Mathikere H.C."<<"\n";
								cout<<"B.K. Nagar, Bangalore - 22."<<"\n";
								cout<<"Phone Number: 22975822"<<"\n";
								break;
							}
						case 13:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Moodalapalya H.C."<<"\n";
								cout<<"GKW Layout & Saraswathi, Bangalore - 40."<<"\n";
								cout<<"Phone Number: 22975768"<<"\n";
								break;
							}
						case 14:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Pantharpalya H.C."<<"\n";
								cout<<"Mysore Road main road, Nayanadahalli, Pantharapalya, Bangalore - 26."<<"\n";
								cout<<"Phone Number: 22975890"<<"\n";
								break;
							}
						case 15:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Shankar Nagar H. C."<<"\n";
								cout<<"6th Cross, Vijayanandnagar, Mahalakshmi Layout, Bangalore - 57."<<"\n";
								cout<<"Phone Number: 22975674"<<"\n";
								break;
							}
						case 16:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Thavarekere H. C."<<"\n";
								cout<<"1st Main Road, DRC Post, Bangalore - 76."<<"\n";
								cout<<"Phone Number: 22975777"<<"\n";
								break;
							}
						case 17:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Azadnagar UFWC"<<"\n";
								cout<<"Kasturba Nagar, Mysore Road, Bangalore - 26."<<"\n";
								cout<<"Phone Number: 22975787"<<"\n";
								break;
							}
						case 18:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Chellaram UFWC"<<"\n";
								cout<<"Opp. Vihal Theatre, Magadi Main Road, Kamakshipalya, Bangalore - 70."<<"\n";
								cout<<"Phone Number: 22975669"<<"\n";
								break;
							}
						case 19:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Cox Town UFWC"<<"\n";
								cout<<"M. M. Road, Opp. Cox Town Market, Bangalore - 05."<<"\n";
								cout<<"Phone Number: 22975881"<<"\n";
						}
						case 20:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"D. J. Halli UFWC"<<"\n";
								cout<<"Opp. Football Stadium, Near Ananth Theatre, Bangalore - 45."<<"\n";
								cout<<"Phone Number: 22975684"<<"\n";
								break;
							}
						case 21:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Ganganagara UFWC"<<"\n";
								cout<<"3rd Main, 3rd Cross, HMT Layout, Banglore - 32."<<"\n";
								cout<<"Phone Number: 22975795"<<"\n";
								break;
							}
						case 22:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Jayanagar UFWC"<<"\n";
								cout<<"9th Main, 2nd Block, Jayanagar, Bangalore - 11."<<"\n";
								cout<<"Phone Number: 22975871"<<"\n";
								break;
							}
						case 23:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"M.R. Palya UFWC"<<"\n";
								cout<<"J. C. Nagar, Main Road, Bangalore - 06."<<"\n";
								cout<<"Phone Number: 22975676"<<"\n";
								break;
							}
						case 25:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"N. R. Colony UFWC"<<"\n";
								cout<<"Subbaraam Shetty Road, Basavanagudi, Bangalore - 04."<<"\n";
								cout<<"Phone Number: 22975667"<<"\n";
								break;
							}
							case 26:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Shanthinagar UFWC"<<"\n";
								cout<<"Near Hockey Stadium, Nanjappa Circle, Bangalore - 27."<<"\n";
								cout<<"Phone Number: 22975790"<<"\n";
								break;
							}
							case 27:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Sirsi Road UFWC"<<"\n";
								cout<<"7th Cross, Chamarajpet, Bangalore - 18."<<"\n";
								cout<<"Phone Number: 22975781"<<"\n";
								break;
							}
							case 28:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Sonnenahalli UFWC"<<"\n";
								cout<<"Opp. Ganesha Temple, Vanarpet, Viveknagar, Bangalore - 47."<<"\n";
								cout<<"Phone Number: 22975876"<<"\n";
							}
							case 29:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"T. R. Mill UFWC"<<"\n";
								cout<<"Opp. Deer Park, Dhobhighat."<<"\n";
								cout<<"Phone Number: 22975685"<<"\n";
							}
						default:
							{
								cout<<"Wrong Entry. Please type in the correct number."<<"\n";
								goto bts;
							}
					}
				}
				else if(m==5)
				{
					cout<<"1.Anekal"<<"\n";
					cout<<"2.Attibele"<<"\n";
					cout<<"3.Balluru"<<"\n";
					cout<<"4.Chandapura"<<"\n";
					cout<<"5.Dommasandra"<<"\n";
					cout<<"6.Gudahatti"<<"\n";
					cout<<"7.Haragadde"<<"\n";
					cout<<"8.Hebbagodi"<<"\n";
					cout<<"9.Indlawadi"<<"\n";
					cout<<"10.Jigani"<<"\n";
					cout<<"11.Mahanthalingapura"<<"\n";
					cout<<"12.Marsur"<<"\n";
					cin>>c;
					switch(c)
					{
						case 1:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Anekal UPHC Urban Primary Health Center"<<"\n";
								cout<<"Gh Anekal Premises, Primary Health Centre Anekal,"<<"\n";
								cout<<"Taluk Office Road, Near Ksrtc Busstand, Anekal Taluk - 562106."<<"\n";
								break;
							}
						case 2:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Balluru UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Balluru, Attibele To Mattigiri Road,"<<"\n";
								cout<<"Near Nagarakunte, Anekal Taluk - 562107"<<"\n";
								break;
							}
						case 3:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Chandapura 24X7 UPHC Urban Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Chandapura, Dommasandra"<<"\n";
								cout<<"Road, Opp. Larves College Of Nursing, Anekal Taluk - 560099"<<"\n";
								cout<<"Phone Number: 8027835644"<<"\n";
								break;
							}
						case 4:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Dommasandra 24X7 UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Dommasandra, Vartur"<<"\n";
								cout<<"Sarjapura Main Road, Near Busstand, Anekal Taluk - 562125."<<"\n";
								break;
							}
						case 5:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Gudahatti UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Guddahatti, Muttanalluru Road,"<<"\n";
								cout<<"Attached To Vetarnary Hospital, Anekal Taluk - 562107."<<"\n";
								break;
							}
						case 6:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Haragadde 24X7 UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Haragadde,"<<"\n";
								cout<<"Bannerugatta & Anekal Main Road, Near Busstand, Anekal Taluk - 560105."<<"\n";
								break;
							}
						case 7:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Hebbagodi 24X7 UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Hebbagodi, Tirupalya, Industrial Near Govt "<<"\n";
								cout<<"School, Anekal Taluk - 560099."<<"\n";
								break;
							}
						case 8:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Indlawadi UPHC Primary Health Cente"<<"\n";
								cout<<"Harohalli Main Road, Near Governament School,"<<"\n";
								cout<<"Anekal Taluk - 562106."<<"\n";
								break;
							}
							case 9:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Jigani 24X7 UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Jigani, Bannerugatta & Anekal"<<"\n";
								cout<<"Main Road, Near Telephone Exchange, Anekal Taluk - 560105."<<"\n";
								break;
							}
						case 10:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Mahanthalingapura UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Mahanthalingapura, Harohalli"<<"\n";
								cout<<"Jigani Road, Near Harohalli Road, Anekal Taluk - 560105."<<"\n";
								break;
							}
						case 11:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Marsur UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Marasuru, Chandapura & Anekal"<<"\n";
								cout<<"Main Road, Near Railway Level Cross, Anekal Taluk - 562106."<<"\n";
								break;
							}
						case 12:
							{
								cout<<"The adress to the nearest public health centre is: "<<"\n";
								cout<<"Sarjapura UPHC Primary Health Center"<<"\n";
								cout<<"Primary Health Centre Sarjapura, Sarjapura & Dommasandra"<<"\n";
								cout<<"Main Road, Opp. Police Station, Anekal Taluk - 562125."<<"\n";
								break;
							}
						default:
							{
								cout<<"Wrong Entry. Please type in the correct number."<<"\n";
								goto bts;
							}
					}
				}
			}
		}
};






class user
{
	char locality[100];
	char city[100];
	char state[100];
	char bgrp;
	char phno[50];

	int chuser;
	int chpass,name,d;

	public:

		void check_validity_username();
		void modify();
		char username[10];
			char vno;
			char fname[100];
			char lname[100];
			int child_date,child_month,child_year;

	char password[10];
		user()
		{
			name=1;
			d=1;
			strcpy(lname,"NULL");
			strcpy(fname,"NULL");
			child_date=child_month=child_year=0;
			strcpy(locality,"NULL");
			strcpy(city,"NULL");
		    strcpy(state,"NULL");

		}
		void input()
		{
			cout<<"\tENTER THE FOLLOWING DETAILS:\t";

			beg:
			cout<<endl<<"FIRST NAME:";
			cin>>fname;
			name=1;
			valid_name(fname);
			if(name==0)
			{
				cout<<"INVALID ENTRY. RE-ENTER DETAILS:"<<endl;
				goto beg;
			}

		    starthere:
		    cout<<"LAST NAME:";
			cin>>lname;
			name=1;
			valid_name(lname);
			if (name==0)
			{
				cout<<"INVALID ENTRY.MUST ENTER ONLY CHARACTERS. RE-ENTER DETAILS:"<<endl;
				goto starthere;
			}

			start:
			cout<<"DATE:";
			cin>>child_date;
			cout<<"MONTH:";
			cin>>child_month;
			cout<<"YEAR:";
			cin>>child_year;
			int c = valid_date(child_date,child_month,child_year);
			if(c==0)
   	    	{
		    	cout<<endl<<"INVALID ENTRY OF DATE. PLEASE RE-ENTER DETAILS :"<<endl;
   	    		goto start;
   	    	}


			go:
			cout<<endl<<"CITY:";
			cin>>city;
			if(strcmpi(city,"BANGALORE")!=0&&strcmpi(city,"BENGALURU")!=0)
			{
				cout<<"INVALID ENTRY.RE-ENTER CITY NAME.";
				goto go;

			}

			gohere:
			cout<<endl<<"STATE:";
			cin>>state;
			if(strcmpi(state,"KARNATAKA")!=0)
			{
				cout<<"INVALID ENTRY.RE-ENTER PHONE NUMBER";
			goto gohere;

			}

   	        from:
   	        	cout<<endl<<"PHONE NUMBER:(without std code and spaces)";
   	        	cin>>phno;
   	        	if(strlen(phno)!=10)
   	        	{
   	        	    cout<<"INVALID ENTRY.RE-ENTER PHONE NUMBER";
					   goto from;
			    }
			    	cout<<endl<<endl;
	cout<<"These are the list of vaccines the child must take."<<endl;
    cout<<"1.Varicella for ChickenPox"<<endl;
    cout<<"2.DTaP for Pertussis"<<endl;
    cout<<"3.Hib for Haemophilius, Influenzae type B"<<endl;
    cout<<"4.Hep A for Hepatitus A"<<endl;
    cout<<"5.Hep B for Hepatitus B"<<endl;
    cout<<"6.MMR for Mumps,Measels,Rubella"<<endl;
    cout<<"7.PCV for Pneumoceal"<<endl;
    cout<<"8.PV for Polio"<<endl;
    cout<<"9.RV for Rotavirus."<<endl;
    cout<<"*************************************************************************"<<endl;
	vacc:
	cout<<"How many vaccines have you taken?(enter 0 if no vaccine has been taken):"<<endl;
	cin>>vno;
			account:
			check_validity_username();
			    cout<<endl<<"ENTER PASSWORD(of max 10 characters .Include :numbers and alphabets):";
			    pass:
				cin>>password;
				check_validity_password();
				if(strlen(password)<5)
				{
				    cout<<endl<<"Too short.\nRe-enter password:";
				    goto pass;
			    }
				else if(strlen(password)>10)
				{
				   cout<<"Too long. Re-enter password:";
				   goto pass;
			    }
				else if(chpass!=1)
				{
					cout<<"Parameters for password not followed.\n Please enter valid password , containing numbers and alphabets";
					goto pass;
				}

				else
				{
				cout<<"ACCOUNT CREATED.";
			    }
		}

		void valid_name(char nm[100])
		{
			for(int j=0;j<strlen(nm);j++)
    	   {
    	    	while(!isalpha(nm[j]))
    		  {
    			    name=0;
    			    break;
			  }
		   }
		}
		int valid_date(int date,int month,int year)
		{
			int d=1;
        	if((year>=2000)&&(year<=2018))
    		{
    	  		if((year%4==0)&&(year%100!=0)||(year%100==0)&&(year%400==0))
    	  		{
        			if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        			{
            			if(date>31)
                			d=0;
					}
        			else if(month==2)
        			{
            			if (date>29)
                			d=0;
        			}
        			else if(month==4||month==6||month==9||month==11)
        			{
            			if(date>30)
                		d=0;
         			}
        			else if(month>12)
        			{
        				d=0;
					}
    	  		}
    	  		else
    	  		{
        			if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        			{
            			if(date>31)
                		d=0;
        			}
        			else if(month==2)
        			{
            			if (date>28)
                		d=0;
        			}
        			else if(month==4||month==6||month==9||month==11)
        			{
            			if(date>30)
                		d=0;
        			}
        			else if(month>12)
        			{
        				d=0;
					}
    	  		}
    	    }
    	  	else
    	  	{
    	  		d=0;
			}
    	  	return d;
      	}

	void check_validity_password()
	{
		int counta=0,count=0;
		for(int i=0;i<strlen(password);i++)
		{
			if(password[i]>='0'&&password[i]<='9')
			count++;
			else if((password[i]>='a'&&password[i]<='z')||(password[i]>='A'&&password[i]<='Z'))
			counta++;
		}
		if(count!=0&&counta!=0)
		chpass=1;
		else
		chpass=0;
	}
	char *getpassword()
	{
		return password;
	}
	char *getusername()
	{
		return username;
	}

}U;


void user::check_validity_username()
	{
		usercheck:
		cout<<"ENTER USERNAME : ";
		cin>>username;
	   chuser=1;
	   if(strlen(username)>10)
	   {
	   	cout<<"Too long. Re-enter username.";
	   	chuser=0;
	   }
	   else if(strlen(username)<4)
	   {
	   	cout<<"Too short.Re-enter username.";
	   	chuser=0;
	   }
	   else
	   {
	   		   ifstream fon("Vaccineuser1.dat",ios::in|ios::binary);
	     while(fon)
	     {
	     	fon.read((char*)&U,sizeof(U));
	     	if(strcmp(U.username,username)==0)
	     	{
	     		chuser=0;
	     		break;
			 }
		 }
		 fon.close();
	    }
	    if(chuser==0)
	    {
	    	cout<<"USERNAME ALREADY CHOSEN. RE-ENTER USERNAME."<<endl;
	         goto usercheck;
	    }
	}
	class vaccine
    {
		public:
			void output(user u)
			{
				int child_date=u.child_date;
				int child_month=u.child_month;
				int child_year=u.child_year;
				char c;
	        cout<<"\n\t\t\tWELCOME  "<<u.fname<<" "<<u.lname<<endl;
	        do
	        {
	        	welcome:
	        cout<<"\t\t \t  MENU:"<<endl;
	        cout<<"1.Vaccine details  "<<endl;
	        cout<<"2.Notifications from the government     3.Delete your account"<<endl;
	        cout<<"4.Closest public health centres"<<endl;
	        cout<<endl<<endl<<"ENTER YOUR CHOICE:";
	        int ch;
	        cin>>ch;
	        if(ch==1)
	        {
	        	if(u.vno=0)
	        	{
	        		chikenpox(child_date,child_month,child_year);
	        		D_T_WC(child_date,child_month,child_year);
                    Influenza(child_date,child_month,child_year);
                    HepatitusA(child_date,child_month,child_year);
                    HepatitusB(child_date,child_month,child_year);
                    MMR(child_date,child_month,child_year);
                    PCV(child_date,child_month,child_year);
                    Polio(child_date,child_month,child_year);
                    RV(child_date,child_month,child_year);
				}
				else if(u.vno=1)
				{
	        		D_T_WC(child_date,child_month,child_year);
                    Influenza(child_date,child_month,child_year);
                    HepatitusA(child_date,child_month,child_year);
                    HepatitusB(child_date,child_month,child_year);
                    MMR(child_date,child_month,child_year);
                    PCV(child_date,child_month,child_year);
                    Polio(child_date,child_month,child_year);
                    RV(child_date,child_month,child_year);
				}
				else if(u.vno=2)
				{
                    Influenza(child_date,child_month,child_year);
                    HepatitusA(child_date,child_month,child_year);
                    HepatitusB(child_date,child_month,child_year);
                    MMR(child_date,child_month,child_year);
                    PCV(child_date,child_month,child_year);
                    Polio(child_date,child_month,child_year);
                    RV(child_date,child_month,child_year);
				}
				else if(u.vno=3)
				{
                    HepatitusA(child_date,child_month,child_year);
                    HepatitusB(child_date,child_month,child_year);
                    MMR(child_date,child_month,child_year);
                    PCV(child_date,child_month,child_year);
                    Polio(child_date,child_month,child_year);
                    RV(child_date,child_month,child_year);
				}
				else if(u.vno=4)
				{
                    HepatitusB(child_date,child_month,child_year);
                    MMR(child_date,child_month,child_year);
                    PCV(child_date,child_month,child_year);
                    Polio(child_date,child_month,child_year);
                    RV(child_date,child_month,child_year);
				}
				else if(u.vno=5)
				{
                    MMR(child_date,child_month,child_year);
                    PCV(child_date,child_month,child_year);
                    Polio(child_date,child_month,child_year);
                    RV(child_date,child_month,child_year);
				}
				else if(u.vno=6)
				{
                    PCV(child_date,child_month,child_year);
                    Polio(child_date,child_month,child_year);
                    RV(child_date,child_month,child_year);
				}
				else if(u.vno=7)
				{
                    Polio(child_date,child_month,child_year);
                    RV(child_date,child_month,child_year);
				}
				else if(u.vno=8)
				{
					RV(child_date,child_month,child_year);
				}
				else
				{
					cout<<"All vaccines have been taken! ";
				}
			}
			else if(ch==3)
			{
				user u1;
				cout<<"\n\n \tAre you sure you want to delete your account? \n(This would mean all your data would get lost)\n";
				cout<<"\tEnter your choice('y' for Yes and 'n' for no)";
				char choice;
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					passcheck:
					cout<<"Re-enter password to confirm.";
					char passwrd[10];
					cin>>passwrd;
					if(strcmp(passwrd,u.password)==0)
					{
						ifstream f("Vaccineuser1.dat",ios::in|ios::binary);
						ofstream fo("temp.dat",ios::out|ios::binary);
						while(!f.eof())
						{
							f.read((char*)&u1,sizeof(u1));
							if(strcmp(u1.username,u.username)==0)
							{
							}
							else
							{
							fo.write((char*)&u1,sizeof(u1));
						    }
						}
						f.close();
						fo.close();

						ofstream file("Vaccineuser1.dat",ios::out|ios::binary);
						ifstream uf("temp.dat",ios::in|ios::binary);
						while(uf)
						{
							uf.read((char*)&u1,sizeof(u1));
							file.write((char*)&u1,sizeof(u1));
						}
						file.close();
						uf.close();
						ifstream fi("Vaccineuser1.dat",ios::in|ios::binary);
						while(fi)
						{
							fi.read((char*)&u1,sizeof(u1));
							cout<<u1.username<<"\t"<<u1.password<<endl;
						}
						fi.close();

					}
					else
					{
					   cout<<"Invalid password. \n  \n";
					   goto passcheck;
				    }
				}

			}
			else if(ch==2)
			{
				cout<<" Since 1985, the Government of India’s Universal Immunization Programme (UIP) has";
				cout<<"incorporated several vaccines to prevent diseases like diphtheria, pertussis (whooping cough), tetanus, poliomyelitis, tuberculosis and measles.";
				cout<<endl<<"Hepatitis B was introduced in a phased manner in the country starting 1998.";
                cout<<endl<<"Since 2014, Mission Indradhanush has covered 201 districts with poor immunization coverage and has registered some success with children";
				cout<<" who get left out or drop out of their immunisation schedule.";
				cout<<endl<<"Science Health Allied Research Education (SHARE) INDIA, a nongovernmental organization (NGO) from Andhra Pradesh, India, developed a strategy";
				cout<<" called Rural Effective Affordable Comprehensive Health Care (REACH) with the primary objective of promoting antenatal care, child immunization,";
				cout<<" and family planning. The REACH model, which was implemented in all 40 villages in mandal of Andhra Pradesh in 1994, had achieved full ";
				cout<<"immunization coverage of 96% among children aged 12 to 23 months in 2007.";
				cout<<endl<<endl<<"The success of the REACH strategy in both Andhra Pradesh and Rajasthan suggests that it could be successfully adopted as a model";
				cout<<" to enhance vaccination coverage dramatically in other areas of rural India.";
		        cout<<endl<<"For the calculation of vaccine coverage rates, the number of children in the age group of 12 to 23 months is taken as the denominator,";
				cout<<" because these children should have received all primary immunizations. Hence, children aged 12 to 23 months who received Bacille Calmette-Guerin (BCG),";
				cout<<" 3 doses each of Diphtheria-Pertussis-Tetanus (DPT) and Oral Polio Vaccine (OPV) (excluding OPV dose 0), and measles vaccine are considered to be fully immunized.";
				cout<<" This procedure was followed by National Family Health Survey (NFHS) in its different waves to work out immunization coverage rates by vaccine.";
				cout<<endl<<"The state of Karnataka is in the process of improving its rural immunization rates by taking sincere inspiration from the REACH organization of Andhra Pradesh.";
				cout<<endl<<endl<<"We hope for a literate and healthy future for the rural citizens of India!"<<endl<<endl;

			}

			else if(ch==4)
			{
				Health_Centres H;
				H.Add();
			}
			else
			{
				cout<<"Invalid choice. Please re-enter.";
				goto welcome;
			}
			cout<<endl<<"Would you like to continue?(y/Y for YES):";
			cin>>c;
		  }while(c=='y'||c=='Y');
		}

	};

	int chikenpox(int date, int month, int year)
{
    cout<<"\n";
    cout<<endl<<"Chikenpox: varicella, Var"<<"\n";
    cout<<"Your child needs 2 doses of ChikenPox vaccine."<<"\n";
	cout<<"First dose:"<<"\n";
	cout<<date<<"/"<<month<<"/"<<year+1<<"\n";
	cout<<"Second dose"<<"\n";
	cout<<date<<"/"<<month<<"/"<<year+5<<"\n";

}
int D_T_WC(int date, int month, int year)
{
    cout<<"\n";
    cout<<"Diphtheria,Tetanus and Whooping Cough: pertussis,DTaP"<<"\n";
	cout<<"Your child needs 5 doses of DTaP."<<"\n";
	cout<<"\n\n\n";
	cout<<"First dose:"<<"\n";
	month=month+2;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Second dose:"<<"\n";
	month=month+4;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Third dose:"<<"\n";
	month=month+6;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Fourth dose:"<<"\n";
	month=month+16;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Fifth dose:"<<"\n";
	cout<<date<<"/"<<month<<"/"<<year+5<<"\n";
	cout<<"\n";

}
int Influenza(int date, int month, int year)
{
    cout<<"\n";
    cout<<"Haemophilus,Influenzae type b: Hib"<<"\n";
	cout<<"Your child needs 3 doses of Hib vaccine."<<"\n";
	cout<<"\n\n\n";
	cout<<"First dose:"<<"\n";
	month=month+2;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Second dose:"<<"\n";
	month=month+4;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Third Dose:"<<"\n";
	month=month+14;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"\n";
}
int HepatitusA(int date, int month, int year)
{
    cout<<"\n";
    cout<<"Hepatitus A: HepA"<<"\n";
	cout<<"Your child needs 3 doses of HepA vaccine."<<"\n";
	cout<<"\n\n\n";
	cout<<"First dose:"<<"\n";
	cout<<date<<"/"<<month<<"/"<<year+1<<"\n";
	cout<<"Second dose:"<<"\n";
	month=month+22;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"\n";

}
int HepatitusB(int date, int month, int year)
{
    cout<<"\n";
    cout<<"Hepatitus B: HepB"<<"\n";
	cout<<"Your child needs 3 doses of HepA vaccine."<<"\n";
	cout<<"\n\n\n";
	cout<<"First dose:"<<"\n";
	cout<<"The date of Birth("<<date<<"/"<<month<<"/"<<year<<")."<<"\n";
	cout<<"Second dose:"<<"\n";
	month=month+2;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Third dose:"<<"\n";
	month=month+12;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"\n";

}
int MMR(int date, int month, int year)
{
    cout<<"\n";
    cout<<"Mumps,Measels,Rubella: MMR"<<"\n";
	cout<<"Your child needs 2 doses of MMR vaccine."<<"\n";
	cout<<"\n\n\n";
	cout<<"First dose"<<"\n";
	month=month+22;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Second dose:"<<"\n";
	cout<<date<<"/"<<month<<"/"<<year+5<<"\n";
	cout<<"\n";
}
int PCV(int date, int month, int year)
{
    cout<<"\n";
    cout<<"Pneumococcal: Prevnar[conjucate vaccine,PCV],Pneumovax";
	cout<<"[polysaccharide vaccine,PPSV]";
	cout<<"Your child needs 4 doses of Prevnar(PCV) vaccine."<<"\n";
	cout<<"\n\n\n";
	cout<<"First dose:"<<"\n";
	month=month+2;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Second dose:"<<"\n";
	month=month+4;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Third dose:"<<"\n";
	month=month+6;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Fourth dose:"<<"\n";
	month=month+14;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"\n";
	}
int Polio(int date, int month, int year)
{
    cout<<"\n";
    cout<<"Polio: IPV";
	cout<<"Your child needs 4 doses of Polio Vaccine(IPV).";
	cout<<"\n\n\n";
	cout<<"First dose:"<<"\n";
	month=month+2;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Second dose:"<<"\n";
	month=month+4;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Third dose:"<<"\n";
	month=month+12;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Fourth dose:"<<"\n";
	cout<<date<<"/"<<month<<"/"<<year+5<<"\n";
	cout<<"\n";

}
int RV(int date, int month, int year)
{
    cout<<"\n";
    cout<<"Rotavirus: RV";
	cout<<"Your child needs 2 doses of Rotavirus Vaccine(RV).";
	cout<<"\n\n\n";
	cout<<"First dose:"<<"\n";
	month=month+2;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"Second dose:"<<"\n";
	month=month+4;
	while(month>12)
	{
		year++;
		month=month-12;
	}
	cout<<date<<"/"<<month<<"/"<<year<<"\n";
	cout<<"\n";
}


int main()
{
	user u,u1,U;
	int pos=0;
	vaccine vac;
	begin:
	cout<<endl<<"\t\t\tYOUR VACCINATION CONSULTANT\t\t"<<endl;
	cout<<"  This program 'VAcciNeS' has been developed to help mothers and \n";
	cout<<"  children all throughout Bangalore by prompting and informing the user \n";
	cout<<"  about the different vaccinations the child needs to take, including the \n";
	cout<<"  number of doses needed, based on the child's details. This personal health \n";
	cout<<"  care will look into the child's vaccination procedure. \n";
	cout<<"  Thank you for choosing us to serve you! :) \n\n\n";
	cout<<"1.LOG IN\t\t 2.CREATE AN ACCOUNT";
	cout<<"\nEnter your choice(1/2):";
	int in;
	cin>>in;
	if(in==2)
	{

            u.input();
            ofstream fout("Vaccineuser1.dat",ios::app|ios::binary);
			fout.write((char*)&u,sizeof(u));
			fout.close();

	}
	else if(in==1)
	{
		check:
		cout<<"Enter USERNAME:";
			ifstream fin("Vaccineuser1.dat",ios::in|ios::binary);
		char foundu='n';
		char foundp='n';
		char usernm[10],passwrd[10];
		cin>>usernm;
		int i=0;
		fin.seekg(0);
		while(fin)
		{
			fin.read((char*)&u1,sizeof(u1));
			if(strcmp(u1.username,usernm)==0)
			{
				foundu='y';
				while((foundp='n')&&(i<5))
				{
					cout<<endl<<"Enter PASSWORD: ";
		            cin>>passwrd;
				if(strcmp(u1.password,passwrd)==0)
				{
					cout<<endl<<"LOGGED IN SUCCESSFULLY!";
					pos=fin.tellg();
					foundp='y';
					break;
				}

				else
				{
				   cout<<"INCORRECT PASSWORD."<<endl;
				   i++;
				   if(i==5)
			      {
			    	cout<<"Too many failed attempts. Please restart app.";
			    	break;
				   }
				  else
				   cout<<"RE-ENTER PASSWORD.";
			    }

			    }



			}

            if(foundu=='y'&&foundp=='y')
            {
            	vac.output(u1);
            	fin.close();
            	break;
			}

		}
		if(foundu=='n')
		{
			cout<<"Incorrect username.\nRe-enter username.\n";
			fin.close();
			goto check;
		}


	}
	else
	{
		cout<<"INCORRECT CHOICE. Re-enter choice.";
		goto begin;
}
}


