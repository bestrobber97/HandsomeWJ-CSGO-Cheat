#include "Main.h"
#include "../RL/ReflectiveLoader.h"
#include  "atltime.h"

#define Me -228034223 //HWID goes here, use the HWID finder attached... ex. #define Me 1234567890
#define Friend1  -691488123
#define Friend2  -691488123
#define Friend3  -69148812

extern HINSTANCE hAppInstance;

UCHAR szFileSys[255], szVolNameBuff[255];
DWORD dwMFL, dwSysFlags;
DWORD dwSerial;
LPCTSTR szHD = "C:\\";


//[enc_string_enable /]
//[junk_enable /]
DWORD WINAPI CheatEntry( LPVOID lpThreadParameter )
{
	HMODULE hModule = (HMODULE)lpThreadParameter;

	if ( Engine::Initialize() )
	{
		return 0;
	}

	return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		CTime expirydatatime(2019, 5, 5, 5, 5, 5); //(year, month, days, hours, minutes, seconds)
		CTime currentdatatime = CTime::GetCurrentTime();

		if (currentdatatime >= expirydatatime)
		{
			MessageBox(NULL, "Subscription Ended", "HandsomeWJ CSGO Cheat", MB_OK);
			exit(0);
		}
		DisableThreadLibraryCalls(hinstDLL);

		Client::BaseDir = CSX::Utils::GetHackWorkingDirectory().c_str();

		if (Client::BaseDir.size() < 1)
		{
			Client::BaseDir = CSX::Utils::GetModuleBaseDir(hinstDLL);
		}
		//HWID stuff...
		GetVolumeInformation(szHD, (LPTSTR)szVolNameBuff, 255, &dwSerial, &dwMFL, &dwSysFlags, (LPTSTR)szFileSys, 255);

		if (dwSerial == Me ||
			dwSerial == Friend1 ||
			dwSerial == Friend2 ||
			dwSerial == Friend3)
		{
			Sleep(100);
		}
		else
		{
			// when HWID rejected
			MessageBox(NULL, "HWID doesn't match!", "HandsomeWJ CSGO Cheat", MB_OK);
			exit(0);
			return TRUE;
		}

#if ENABLE_DEBUG_FILE == 1
		AllocConsole();
		AttachConsole(GetCurrentProcessId());
		freopen("CONIN$", "r", stdin);
		freopen("CONOUT$", "w", stdout);
		freopen("CONOUT$", "w", stderr);

		Client::LogFile = Client::BaseDir + "\\debug.log";
		DeleteFileA( Client::LogFile.c_str() );
		CSX::Log::LogFile = Client::LogFile;
		printf("Client::BaseDir = %s\nClient::LogFile = %s\n", Client::BaseDir.c_str(), Client::LogFile.c_str());
		CSX::Log::Add( "::Init::" );

#endif

		CreateThread( 0 , 0 , CheatEntry , hinstDLL , 0 , 0 );
	}
	else if ( fdwReason == DLL_PROCESS_DETACH )
	{
		Engine::Shutdown();
	}

	return TRUE;
}

using namespace std;

class ssezokd {
public:
	bool rqmduqvepwuaasx;
	int bprltmsohwohxo;
	ssezokd();
	int dpykdonolilgjubdvz(bool nvufkjj, double wbwfaqyy, int kzybkkx, string tfnjjmexai, int ggmuafvjy, double pqyyxulqrsk, double iyerozpi, bool voldbuhrtnot);

protected:
	string aziblsttd;
	bool yxlsvvao;
	bool gstgsqwpaag;
	double aipmo;
	string wriwblvfywr;

	bool xtijhnnqjnfeojoejvfygg(double xiellqn, string avkvaqcqm, int igoflqnw, string yxlrn, string tfzknvbh);
	bool bkekeqisyhsuyjnmblaywhevu(double vspikqt, int blxmdipvqmhgxkd, string xwwijsslwa, double uafice);
	int qzqnzfrygyfsu(double pbfhrig);
	double mowdsnbsupyvsvtyzxaz(bool ibgnb, int hiwraaonxq);
	double oladrofyqkbywhbeiyd(string owwlzvjmdoffe, bool zpdxctqjtopovu, bool oyrxuqsoig, bool ojnldinoep, int dexqvzmdzucj, bool mwknee, bool jrisyjcc, double ywznwhnweroie, int plxjwgu, string dtepohqltreqxyf);
	string xuayibpczm(double uomjwneoinnf, bool oqkmpaocnkygnb, double iiyrkyonkrhmff, int hnxwmvhdt, string gicrhlexymct, double fjyswzrimohsw, string fpolsfjwystsy, bool wobolrasb, bool blzrby);

private:
	bool vexhqzikx;
	string nrjhewmzrqwnhzk;
	double xirrbkqpirzshfh;

	string srolejpxyeiuva(double mcjuwttwbdx, double zaznikmsk, double mlqwmvkk, int vljbydofztaifg);

};


string ssezokd::srolejpxyeiuva(double mcjuwttwbdx, double zaznikmsk, double mlqwmvkk, int vljbydofztaifg) {
	double qpiztmkcprgjang = 15559;
	string jvblaxi = "hedimrcltwqqyzyqprasngwdzgjzihfpqzsq";
	int nuxelnlulzvzd = 5848;
	double bconvsajhu = 15230;
	string pvgcof = "hvolreovbndjibwyyvxzwgquxtylgaihwenytqcegokvjyjnlahkitlwogulgtf";
	int mknrdkdw = 755;
	int sqibilky = 143;
	string tlizljgh = "dhvymqdgmdxjqcrqbdpdoufsfnrfetoccxg";
	if (5848 == 5848) {
		int gd;
		for (gd = 42; gd > 0; gd--) {
			continue;
		}
	}
	if (15559 == 15559) {
		int irkv;
		for (irkv = 48; irkv > 0; irkv--) {
			continue;
		}
	}
	return string("gkperrnxklhvxkdz");
}

bool ssezokd::xtijhnnqjnfeojoejvfygg(double xiellqn, string avkvaqcqm, int igoflqnw, string yxlrn, string tfzknvbh) {
	int faosxwogteiztrd = 878;
	bool pcnphkctvnrhk = true;
	int doqjhogzmnom = 4759;
	int lwfzq = 3750;
	int puminpidmzzfjz = 829;
	double fkxcio = 1258;
	if (878 != 878) {
		int ebzccqi;
		for (ebzccqi = 91; ebzccqi > 0; ebzccqi--) {
			continue;
		}
	}
	if (4759 != 4759) {
		int wycbv;
		for (wycbv = 48; wycbv > 0; wycbv--) {
			continue;
		}
	}
	return false;
}

bool ssezokd::bkekeqisyhsuyjnmblaywhevu(double vspikqt, int blxmdipvqmhgxkd, string xwwijsslwa, double uafice) {
	return true;
}

int ssezokd::qzqnzfrygyfsu(double pbfhrig) {
	int nurufsq = 826;
	int txrywmlwbqdqrg = 4862;
	double ttmgilcu = 26045;
	double ragcdnpatj = 74632;
	string tfsgwvxklefk = "kxtpkdmnoyubpxxnjofpurhxgo";
	if (4862 == 4862) {
		int nppf;
		for (nppf = 0; nppf > 0; nppf--) {
			continue;
		}
	}
	if (4862 == 4862) {
		int wlpmnzh;
		for (wlpmnzh = 48; wlpmnzh > 0; wlpmnzh--) {
			continue;
		}
	}
	if (826 != 826) {
		int tbpbxyu;
		for (tbpbxyu = 25; tbpbxyu > 0; tbpbxyu--) {
			continue;
		}
	}
	if (string("kxtpkdmnoyubpxxnjofpurhxgo") != string("kxtpkdmnoyubpxxnjofpurhxgo")) {
		int wvucqhkhg;
		for (wvucqhkhg = 81; wvucqhkhg > 0; wvucqhkhg--) {
			continue;
		}
	}
	if (74632 != 74632) {
		int yemd;
		for (yemd = 99; yemd > 0; yemd--) {
			continue;
		}
	}
	return 97973;
}

double ssezokd::mowdsnbsupyvsvtyzxaz(bool ibgnb, int hiwraaonxq) {
	bool yvude = true;
	bool kmmcqxktdhlz = false;
	string wgfozxokrzfkh = "jtpenqtgzsierzswnuhjuvfvzsjasnxadstkpxwtfvtquabzbcmttggykkgymbbsrsmmbywfpdujaxyslrwundqhqm";
	string njwkqcw = "rqidevrfqcylhyysetaimfwyuypvayxntchmfzyzarsjwyjdiftk";
	double laskaecex = 11728;
	if (true == true) {
		int leutk;
		for (leutk = 33; leutk > 0; leutk--) {
			continue;
		}
	}
	return 13687;
}

double ssezokd::oladrofyqkbywhbeiyd(string owwlzvjmdoffe, bool zpdxctqjtopovu, bool oyrxuqsoig, bool ojnldinoep, int dexqvzmdzucj, bool mwknee, bool jrisyjcc, double ywznwhnweroie, int plxjwgu, string dtepohqltreqxyf) {
	double btlkrjuwqxjk = 10329;
	bool dcivdyuxjjzravi = true;
	double dtdtfk = 40487;
	double bdvultkmrazymj = 7663;
	bool bmhhzdug = false;
	double hvsxxn = 44874;
	return 10636;
}

string ssezokd::xuayibpczm(double uomjwneoinnf, bool oqkmpaocnkygnb, double iiyrkyonkrhmff, int hnxwmvhdt, string gicrhlexymct, double fjyswzrimohsw, string fpolsfjwystsy, bool wobolrasb, bool blzrby) {
	bool jvbninmdq = false;
	string ahgfbwkzcqpk = "azokqtmdbufxntwbosmrcvlsztublqrzoedhzfazihtyyjjkfkkrqkcozckbbehzzlexoxkjnqrcokugnzsz";
	int rfwxauahqldcie = 1572;
	bool kmhrwc = true;
	string edrpd = "nqnqmunjvueulmejvihrupcogjeppbqqfktvyavgsdrzskazhaiumquhclzbdjjjeveltotfvhxnuwcwgbrljfmznbptzfiqbppx";
	bool afrakqybwbbrei = false;
	int vwwrbbkqpo = 1442;
	if (false == false) {
		int pvpaescd;
		for (pvpaescd = 61; pvpaescd > 0; pvpaescd--) {
			continue;
		}
	}
	if (false == false) {
		int erqyu;
		for (erqyu = 51; erqyu > 0; erqyu--) {
			continue;
		}
	}
	return string("wpzbkjgwgzivlnaivqfd");
}

int ssezokd::dpykdonolilgjubdvz(bool nvufkjj, double wbwfaqyy, int kzybkkx, string tfnjjmexai, int ggmuafvjy, double pqyyxulqrsk, double iyerozpi, bool voldbuhrtnot) {
	bool knjjunjgniq = false;
	double ppotsifnukqwghp = 4503;
	string kpfyrsrlmmz = "zbgguldabthcjqhfwaetrxzobuozqlqkzmphktx";
	string gdptqnmevdgvoh = "yjhtccdevoxxlsjpsykouosaxoqrwspmxddkajiypzt";
	int ievazcdju = 1550;
	double pstarvxssrhnl = 35739;
	double whrhcwfwim = 41318;
	int mdtcpvqfm = 2231;
	if (false == false) {
		int hlp;
		for (hlp = 59; hlp > 0; hlp--) {
			continue;
		}
	}
	if (false == false) {
		int vh;
		for (vh = 59; vh > 0; vh--) {
			continue;
		}
	}
	if (4503 == 4503) {
		int umtutmjowm;
		for (umtutmjowm = 13; umtutmjowm > 0; umtutmjowm--) {
			continue;
		}
	}
	if (string("yjhtccdevoxxlsjpsykouosaxoqrwspmxddkajiypzt") == string("yjhtccdevoxxlsjpsykouosaxoqrwspmxddkajiypzt")) {
		int iwgwv;
		for (iwgwv = 39; iwgwv > 0; iwgwv--) {
			continue;
		}
	}
	return 82775;
}

ssezokd::ssezokd() {
	this->dpykdonolilgjubdvz(false, 10617, 3432, string("zwlbzukfyqemzznhjeizjuejrtbyurrodznpwrpbvvxcbbhbayjrgdzqiekgrmqycbxrmxlnaj"), 3459, 56812, 14458, false);
	this->xtijhnnqjnfeojoejvfygg(19592, string("qvbobdrwfjggyxgpbqbfnyzcpopdyoehgnshrfievreooqpypjldrybnxbjdymwqymmowyizrcmnnzlz"), 3761, string("vdkfeackqdhhbnysyqlaqfggblkjrossgpwwjtshypberxfsjmnemzo"), string("yusydslvxljbfsahahuscrvbkqmojoibui"));
	this->bkekeqisyhsuyjnmblaywhevu(2104, 1037, string("bvegd"), 36049);
	this->qzqnzfrygyfsu(6974);
	this->mowdsnbsupyvsvtyzxaz(true, 969);
	this->oladrofyqkbywhbeiyd(string("mpderjbjhjuzuctnyyrutxkchpdacsaiuylegnjpwhjssfjsnvtshhssp"), true, true, false, 420, true, false, 71623, 353, string("fxxbadjhmzgjaswpbnxzvmwrasghtzswblrgbfhdivgskfcmasbtewjrbbmfrny"));
	this->xuayibpczm(1456, true, 5382, 662, string("xwvfrkcsvqksczukcexodjrktcixysunxhm"), 35878, string(""), false, false);
	this->srolejpxyeiuva(12072, 11561, 13303, 6087);
}

using namespace std;

class nhvnijk {
public:
	string biwaf;
	string soogoo;
	string icnddstfstx;
	nhvnijk();
	int gszsyjfakvrbpuii(string joadfjupkp, string hnwrqpjclqet, int yjeazmjkwvskp, string dxkuwmlbb);

protected:
	string sfzcvsvywibq;
	string pnvvszvekk;
	string inomwa;
	int hshqnlyof;

	void jtktcurvjcule(double fczjkehqibl, double zlzbrnqldixowrs);
	string zlgmjmlxqpue(int dngpkziue, bool csnpmivijc, int dzguei, int gwmyhwixvyc, bool csgitgdzndmnns, int kkqhoexqehqelaq, int hhemyqrahmguk);
	string llrgvhaaviwraitf(bool efsvoahxvelzm, bool vxfyapnlmptbhbx, int iufrswbighw, string fntlxc, int oxlkbynqlskhrby, int wuhnfloj);
	void psovlbrpjcsjxhzrgunsojv(bool zcinzzvwjgdrt, double adxldl, int dfjhmq, int vpssthol, string cngsnq, double duyesbmb);
	string necbfcztnfymybfr(int vjocbvoxjmox, int jlrpfnvd, double bucaovxsetu, string ltmjwo, string lcmrle, string cfcyveyr, double aolqovepbutuehl, bool cuxtbzksruzs, bool hmghmwaxdkthto);
	bool mcmhtayluvp(bool esqqwk, double ipuhaiuqapnju, double vbgoc, bool ntzjdc, int kbnowjit, double wugahavm, string hydhglvftwfsyn, double tueiehfk, bool rpkmckdtmisoge);

private:
	string utvocjvhxbrvou;
	int xkgrzclpxu;
	double nrawpqbiktew;
	int izysyl;
	int kjbrxrnav;

	void kjbxdenrxbgqyytija(int wlrqxqtzxahujpl);
	double wsukfrxjhitcintnvghya(double zsxzyo);
	double dirifaacghkem(double jelljhlgigxs, double lmbwwvbpf, int bvmkxjobnlne, int wblgujzr, int sqpusrchytl, string vajyffihvxko, int nyzbnqhrho, double wgskafsfkqhql, string zchjwcgwgojl, double jbiydalbay);
	int pcwytozrjld(string jyixzc);
	void dngphfozcbkxmqcjjjawsepn(double evwqcru, string tgmki, int nxpsqcr, string kkxiithyon);
	void gjdfouztaxyucnpu(bool udmrcngkcnweab, double kxjdvlwq, bool kuyavukxurw, bool scyukjesy);
	void ozbzoittvkqfzpedbeutuwt(string lqnxikva, double nfgzdup, string uiwczmyakoejbq);
	double kwbbvmmdqmdrrtwckuqdh(bool mkjnilyd, int liohuvoxn);
	string abqqucfzpwsgqkpngfyr(int gsdzwqay, string juxqyfpit, double hxnmbukmejn, double kguicvklpbfg, bool vrdkdwtu, string ohili, string wulvlzh);

};


void nhvnijk::kjbxdenrxbgqyytija(int wlrqxqtzxahujpl) {
	int udfiw = 1421;
	bool ycfool = false;
	bool psxenkvqxhy = false;
	string gyoscpcxvtfs = "bbeqzmzftiwydm";
	if (false == false) {
		int mbq;
		for (mbq = 2; mbq > 0; mbq--) {
			continue;
		}
	}
	if (false != false) {
		int eblnfbhij;
		for (eblnfbhij = 65; eblnfbhij > 0; eblnfbhij--) {
			continue;
		}
	}
	if (string("bbeqzmzftiwydm") != string("bbeqzmzftiwydm")) {
		int voembx;
		for (voembx = 66; voembx > 0; voembx--) {
			continue;
		}
	}

}

double nhvnijk::wsukfrxjhitcintnvghya(double zsxzyo) {
	int hxexovxswxyme = 367;
	string rcnsvyolyxzlrx = "oadvkttsjgcqaonrxegktslircbbnrmqxqfdywcagdtnleptirfbvynabcfboatrvqfeefoqecsthbnyzzsilopqpdlxypsw";
	string glgjneel = "iwotashwwovegma";
	string xvgvwrgcqjul = "jgokkbexzxvlzscszkopjpqbudmqvlhvkrrdkk";
	double ptsrkvjb = 34721;
	double ktekqjzlcro = 43088;
	int cokihobov = 2842;
	string adaksh = "rhyp";
	if (string("iwotashwwovegma") != string("iwotashwwovegma")) {
		int yfvcpcdh;
		for (yfvcpcdh = 33; yfvcpcdh > 0; yfvcpcdh--) {
			continue;
		}
	}
	if (34721 != 34721) {
		int civilthyr;
		for (civilthyr = 11; civilthyr > 0; civilthyr--) {
			continue;
		}
	}
	if (2842 != 2842) {
		int rukbp;
		for (rukbp = 44; rukbp > 0; rukbp--) {
			continue;
		}
	}
	if (string("rhyp") == string("rhyp")) {
		int zu;
		for (zu = 22; zu > 0; zu--) {
			continue;
		}
	}
	return 23226;
}

double nhvnijk::dirifaacghkem(double jelljhlgigxs, double lmbwwvbpf, int bvmkxjobnlne, int wblgujzr, int sqpusrchytl, string vajyffihvxko, int nyzbnqhrho, double wgskafsfkqhql, string zchjwcgwgojl, double jbiydalbay) {
	int vyhpbodbns = 2175;
	double slbjknzklr = 8985;
	double pqxpgnqvac = 63301;
	double qdhygrplph = 46229;
	if (46229 == 46229) {
		int idz;
		for (idz = 90; idz > 0; idz--) {
			continue;
		}
	}
	if (8985 != 8985) {
		int ae;
		for (ae = 100; ae > 0; ae--) {
			continue;
		}
	}
	if (46229 == 46229) {
		int alywlf;
		for (alywlf = 73; alywlf > 0; alywlf--) {
			continue;
		}
	}
	return 49904;
}

int nhvnijk::pcwytozrjld(string jyixzc) {
	int nrjzay = 2142;
	double qkdobkwxse = 12832;
	if (2142 != 2142) {
		int fbghqaxlhc;
		for (fbghqaxlhc = 11; fbghqaxlhc > 0; fbghqaxlhc--) {
			continue;
		}
	}
	if (12832 == 12832) {
		int jzox;
		for (jzox = 43; jzox > 0; jzox--) {
			continue;
		}
	}
	if (2142 != 2142) {
		int vjulye;
		for (vjulye = 92; vjulye > 0; vjulye--) {
			continue;
		}
	}
	return 13885;
}

void nhvnijk::dngphfozcbkxmqcjjjawsepn(double evwqcru, string tgmki, int nxpsqcr, string kkxiithyon) {
	double yhgjo = 6083;
	string sthfhw = "ceztakuepcoryytslsfnppvdrlkncdwmejcadhrphjogtyyiyaocp";
	int qfixyrnptg = 960;
	string gikxrjtazoz = "hscipgsxhdzgcebkrpdkawxrxjjsjbscqsobnheqlpiiaxbxlhwdvrpxdtseqepypwclqevpfogeq";
	string ghomlpfavugrws = "pbtpprqjmvtetyhgyhfpnxtzxbkmeutkbzmkfpzzphmygyjicxrkpgreeiswvlmufjzsgmxpdxovgcoqbldllvvf";
	bool jiwjueb = false;
	int hhgcpbxoppejcp = 3584;

}

void nhvnijk::gjdfouztaxyucnpu(bool udmrcngkcnweab, double kxjdvlwq, bool kuyavukxurw, bool scyukjesy) {
	string gkkrdcwjr = "rrjdxmtsotsewmcecdacfpgcmvgvjoagjdtjqazvsgkpsxncoszlqzcpffeyit";
	bool vuhxzuvlea = true;
	int tdunohwh = 5413;
	int utvcvxbyaydr = 662;
	if (string("rrjdxmtsotsewmcecdacfpgcmvgvjoagjdtjqazvsgkpsxncoszlqzcpffeyit") == string("rrjdxmtsotsewmcecdacfpgcmvgvjoagjdtjqazvsgkpsxncoszlqzcpffeyit")) {
		int ykjyal;
		for (ykjyal = 34; ykjyal > 0; ykjyal--) {
			continue;
		}
	}
	if (662 != 662) {
		int nj;
		for (nj = 58; nj > 0; nj--) {
			continue;
		}
	}
	if (5413 == 5413) {
		int ddzpysyjia;
		for (ddzpysyjia = 49; ddzpysyjia > 0; ddzpysyjia--) {
			continue;
		}
	}

}

void nhvnijk::ozbzoittvkqfzpedbeutuwt(string lqnxikva, double nfgzdup, string uiwczmyakoejbq) {
	bool eouvwyaeiaqib = true;
	int xisqmxqpzon = 5241;
	int ttijurjuw = 315;
	string yclsocs = "cshocorchexiszowgalcvxktbiszcugucmbqtqxegf";
	bool wlclc = true;
	double zplgdsafs = 31290;
	double eykuilkvbvob = 18535;

}

double nhvnijk::kwbbvmmdqmdrrtwckuqdh(bool mkjnilyd, int liohuvoxn) {
	string koanquarfxjljf = "ofpgmrtlbcnntkzrctumtlvfiuufialnlcoprgwxjholrthkpuuidmix";
	bool hklqne = false;
	int cdgkocqfhjgi = 7604;
	bool ypwriklilivlo = true;
	string ffnmturhabxvpn = "zkm";
	string imjykxkrqvm = "puzuffnqwyhdtnyyamykjixdmlfnknwxgacmjavwnebmsjgfbfprljsjtlsxyfzkhfcnqfhqyahpnh";
	int mmccy = 3234;
	double vnfjhspyrjn = 2033;
	int ejhhhcrwzdnzcsf = 4297;
	string elwma = "jzawufdpqnrbxeuuryfkuwgnjpx";
	return 55137;
}

string nhvnijk::abqqucfzpwsgqkpngfyr(int gsdzwqay, string juxqyfpit, double hxnmbukmejn, double kguicvklpbfg, bool vrdkdwtu, string ohili, string wulvlzh) {
	int umwytehreyukq = 2074;
	string oxwfzzof = "mnovznjpjfecgkfpgvdrfliuoiajlvsaccisullcxnflskevdzltugkuywsorukcmhmtzzayvwgmqlfmvyv";
	bool glatibrjkb = false;
	int lffcvqtofix = 516;
	bool xaemdpgvt = true;
	bool gkxct = false;
	if (false != false) {
		int amidcmuku;
		for (amidcmuku = 54; amidcmuku > 0; amidcmuku--) {
			continue;
		}
	}
	if (false == false) {
		int cvcjbc;
		for (cvcjbc = 33; cvcjbc > 0; cvcjbc--) {
			continue;
		}
	}
	if (2074 != 2074) {
		int kcuxkfexuu;
		for (kcuxkfexuu = 81; kcuxkfexuu > 0; kcuxkfexuu--) {
			continue;
		}
	}
	if (false == false) {
		int fqqh;
		for (fqqh = 52; fqqh > 0; fqqh--) {
			continue;
		}
	}
	return string("yhuxlfgjfgjjyi");
}

void nhvnijk::jtktcurvjcule(double fczjkehqibl, double zlzbrnqldixowrs) {
	bool cyfjh = false;
	int gjorvhk = 664;
	double rjqdnikzkx = 43095;
	string jgdkvpsmzebq = "nkkadjudrcqqabyndsrwyulzrcmb";
	int euuqzaknwlem = 645;
	double ebcftqtf = 19502;
	if (19502 != 19502) {
		int giaieczno;
		for (giaieczno = 84; giaieczno > 0; giaieczno--) {
			continue;
		}
	}
	if (43095 != 43095) {
		int ivs;
		for (ivs = 86; ivs > 0; ivs--) {
			continue;
		}
	}
	if (false == false) {
		int xklfnnz;
		for (xklfnnz = 55; xklfnnz > 0; xklfnnz--) {
			continue;
		}
	}

}

string nhvnijk::zlgmjmlxqpue(int dngpkziue, bool csnpmivijc, int dzguei, int gwmyhwixvyc, bool csgitgdzndmnns, int kkqhoexqehqelaq, int hhemyqrahmguk) {
	int ybpnghw = 1388;
	int anokewpiwawt = 5791;
	string gtuxw = "rrlipzpibraicodpwudhikvb";
	bool ivyrh = false;
	double osixash = 9659;
	bool cwigemcuin = true;
	double kpbdmd = 38466;
	int ibnrvdgz = 3203;
	if (1388 != 1388) {
		int ucrpazoi;
		for (ucrpazoi = 9; ucrpazoi > 0; ucrpazoi--) {
			continue;
		}
	}
	return string("");
}

string nhvnijk::llrgvhaaviwraitf(bool efsvoahxvelzm, bool vxfyapnlmptbhbx, int iufrswbighw, string fntlxc, int oxlkbynqlskhrby, int wuhnfloj) {
	bool zrsnio = false;
	bool ixhhi = true;
	return string("pdhwpjeufzrmzrpqhmz");
}

void nhvnijk::psovlbrpjcsjxhzrgunsojv(bool zcinzzvwjgdrt, double adxldl, int dfjhmq, int vpssthol, string cngsnq, double duyesbmb) {

}

string nhvnijk::necbfcztnfymybfr(int vjocbvoxjmox, int jlrpfnvd, double bucaovxsetu, string ltmjwo, string lcmrle, string cfcyveyr, double aolqovepbutuehl, bool cuxtbzksruzs, bool hmghmwaxdkthto) {
	double swwnnsdweestvjf = 15584;
	string vcayyd = "zbgaurhgywpnngmnjovavzmfsnegmsecpolxjojkzplpnvlbibjxuyawfhxenkoeqhkylgmkij";
	string cojfl = "fkukarxvpcgbquebvkyrfmnyxdjytkhmghsomebnwobmzeezukwilzv";
	bool tblwlqeo = false;
	string rqhleowm = "rlkbtmmmyslyhjljavkgyyrpczkktllastykyavoshnczifjayznhsyrwbreheosgtomsmzqfkseaecu";
	if (15584 != 15584) {
		int kr;
		for (kr = 5; kr > 0; kr--) {
			continue;
		}
	}
	if (15584 != 15584) {
		int ckih;
		for (ckih = 89; ckih > 0; ckih--) {
			continue;
		}
	}
	if (string("rlkbtmmmyslyhjljavkgyyrpczkktllastykyavoshnczifjayznhsyrwbreheosgtomsmzqfkseaecu") != string("rlkbtmmmyslyhjljavkgyyrpczkktllastykyavoshnczifjayznhsyrwbreheosgtomsmzqfkseaecu")) {
		int daweifu;
		for (daweifu = 66; daweifu > 0; daweifu--) {
			continue;
		}
	}
	return string("ydqjngaiptvxqenvteu");
}

bool nhvnijk::mcmhtayluvp(bool esqqwk, double ipuhaiuqapnju, double vbgoc, bool ntzjdc, int kbnowjit, double wugahavm, string hydhglvftwfsyn, double tueiehfk, bool rpkmckdtmisoge) {
	string qrpybkkdxpev = "nyqtlefyjihipjkhurbcfikpnihydsnnlgtuqjupzbslsaegenlbeesasjbfwwrc";
	bool lcgwlyphfd = false;
	double ugzmznxxn = 50225;
	int wmbrb = 4009;
	double ryjbewhmmdmsp = 41376;
	string iccuqfztu = "htddxgjddulwnycsdxccmioznarebmsbmpbnpomguxnqsxvvra";
	int enesxrcw = 2517;
	string sximlhmv = "jiqyidlmjddzcvpegmrsbskkrmmeqvzswkdhydvjzbdmzcxrjhmkjoggicptggifilzfsscxhadjpeho";
	string kdnkmqpil = "xbvmhswxxxi";
	if (string("nyqtlefyjihipjkhurbcfikpnihydsnnlgtuqjupzbslsaegenlbeesasjbfwwrc") == string("nyqtlefyjihipjkhurbcfikpnihydsnnlgtuqjupzbslsaegenlbeesasjbfwwrc")) {
		int bgsf;
		for (bgsf = 100; bgsf > 0; bgsf--) {
			continue;
		}
	}
	if (50225 != 50225) {
		int uz;
		for (uz = 40; uz > 0; uz--) {
			continue;
		}
	}
	if (string("jiqyidlmjddzcvpegmrsbskkrmmeqvzswkdhydvjzbdmzcxrjhmkjoggicptggifilzfsscxhadjpeho") != string("jiqyidlmjddzcvpegmrsbskkrmmeqvzswkdhydvjzbdmzcxrjhmkjoggicptggifilzfsscxhadjpeho")) {
		int iefgiwlujx;
		for (iefgiwlujx = 99; iefgiwlujx > 0; iefgiwlujx--) {
			continue;
		}
	}
	if (41376 != 41376) {
		int rwg;
		for (rwg = 84; rwg > 0; rwg--) {
			continue;
		}
	}
	return false;
}

int nhvnijk::gszsyjfakvrbpuii(string joadfjupkp, string hnwrqpjclqet, int yjeazmjkwvskp, string dxkuwmlbb) {
	string pswshlrvjbluxnv = "maxkyrshbycgspexgqufku";
	double oblwyeryfryri = 30380;
	double xdoygbclreoc = 67630;
	int cvepsiqs = 1683;
	int yhmvnf = 2349;
	return 56128;
}

nhvnijk::nhvnijk() {
	this->gszsyjfakvrbpuii(string("gpyzqwbwqaeicbqrjkeryemdvdlraewyokbwipmgbztwik"), string("wehyxmmrynzzcj"), 2200, string("gyznnnlcsktezxumkdjvuuxwtorzdwjuqaxkwfkfyroapllalygstrrxmqdncxcspopcxjxaoaosxicgprmpydayqjnuvawsolt"));
	this->jtktcurvjcule(32420, 10036);
	this->zlgmjmlxqpue(3547, false, 5249, 411, true, 1461, 1868);
	this->llrgvhaaviwraitf(false, false, 3629, string("hytoivzc"), 2924, 241);
	this->psovlbrpjcsjxhzrgunsojv(true, 7533, 2708, 2750, string("hnjvktrqltgbztotrvpmpannjlkbkijmsmvkiuizlncqlgscgkgqrdzmjveuslpanvusnsmc"), 33774);
	this->necbfcztnfymybfr(1415, 388, 29300, string("apfcysjoqlarqtogcmtwuqjpdfgtwkn"), string("ppwiom"), string("qgxrcyxtfznrwgjdmoyxioexpmokn"), 17663, false, true);
	this->mcmhtayluvp(true, 44568, 13416, true, 629, 39027, string("dwwetpifkopbvuk"), 36869, false);
	this->kjbxdenrxbgqyytija(2992);
	this->wsukfrxjhitcintnvghya(18183);
	this->dirifaacghkem(62630, 21977, 616, 4229, 5824, string("ndpiakdzsclhsqxxlkhnujxcttnrehke"), 6436, 36583, string("hpyrfhdrxsopqelrwe"), 9878);
	this->pcwytozrjld(string("kepu"));
	this->dngphfozcbkxmqcjjjawsepn(11593, string("mxs"), 556, string("heourlbxelzwwmwdfkungirb"));
	this->gjdfouztaxyucnpu(true, 12765, false, true);
	this->ozbzoittvkqfzpedbeutuwt(string("qsmnztgtnjhmnezrehwhlzyilbzxsyanukzdcjkisyhbgatiaawadpy"), 12571, string("bprcueixgbkionguehczktigaxpvvljvkpdwiibbmlrhikhdwfuawphuoythlqwhiqrbzeyvqqkbh"));
	this->kwbbvmmdqmdrrtwckuqdh(true, 3010);
	this->abqqucfzpwsgqkpngfyr(3932, string("vnlnraocmgktcmfmmdjymmvklrbqvefijbelaefykwjgkqwcrzammhvvimpkic"), 44737, 63758, true, string(""), string("zjnpyzjarlfyhafqkdgpscfgfxibwhvniofpbnucyvw"));
}
using namespace std;

class wviorpb {
public:
	int xusanx;
	int dxhlu;
	bool ksimnxjbpzdzz;
	bool bzhzkmwgypeyynk;
	int ooaudilvtzv;
	wviorpb();
	int jpfikrgkhh(bool shyxg, double zcgcogpqqn, int vfwweazidouat, bool zncvahyuim, double esbfdieuyeks, int yklxkmpo, bool yhxifsdslyy, bool gavprhhswmxrnm, string qvebuvbmcnzcg, int wbtsu);
	void csjbohmvlmkdmyjgbkzia(double idbdpj, string evpsmsvx, double xyudykqsrs, string icqgyfukcoryy, int qylnphxoxxbxu);
	int hijijysnntrb(double oypxvfebfdaslcc, double irhdmuoizy, int ksngzknhsh, double ypqqgb, string tfpgatbwcitsxp, int fimwkyppremq, string rfbtjnmfclc, bool rifmttox, string vivtdbdiypmblc, string nzastlwdpxz);
	double vdjzbgtehjlebqfptey(int zprojjlplhqetjc, int ammrevxvghlwe, int oxdxdfsazvfs, int whdrvggbq, int uurisuojemw, int zwpuwntphfcrc, int ybxlchfphjog, bool psfpejoancmdgg, string ejtzmre);
	bool hnbxyzblilouvuydcfeg();
	double cpbjpsmosthlldycyunfycyei();
	string sorfgsqpdvlmgikowvol(int vklnflubxfaeko, string jopmuejvo, string rqhpypirdb, double mttrdjmnljtvyi, double lzocjurkwsuy, bool jlzypwbgy, int bijlxcpxeiabtfu);
	double qsodrdrzfsqcqzhsbhgzhul(bool qhewug, bool jvjydyyvr, double nllwhilddk, string goavyipeaanmv);

protected:
	string sjphi;
	int jrsuy;

	void ekybudsacqcuhswgelk(bool vybqounvdwsf, double xhxrlk, string luejaibjaqcelcy, int zrdten);
	int mqglnplingo();
	double crdxgktsjehoezxg(int cprerqbgx, string liadff);
	bool yrmppdrlvrhwnvfhtfusozg(string nychzjxjho, double fjjsqcco, bool luovygm, string ojtxysjy, double wtktyjypommkfc, bool htoenxngqughfyu);

private:
	string thobvspwultmmod;
	int gxbwort;
	int kthfuri;
	int khopmsgausceay;

	double dyggfancsdouefibf(string gtwpmet, string zistzimfvuca, int mfxupugesouidff, string vulrsq, string jpyoqlmehcrim);
	double mjxipwqvpuzkposlqxf();
	double wjqheqxeuuut();
	double ehcxewynnugaarvhdfehe(string uabqtkiymtuk, bool tpkjzhf, double dewhoi, int qdhvu, int uaqrgxzofymu, string blqooltvkfg, bool gjsxrkvctmfg);
	string kntkkavjpktvxdnevzrrxg(bool yrjoyjua);
	string vcbbdayyleiieouo(int lgcayvypp, int ldcbkf, bool fjwmxvrxse, double bjqxrrmdsol, double azuxbcjp, string quershssjyyw, int hqgng, bool ttwmmsddzsjdbi, double dsqwhmd);
	void fvxwxgvwjxnorbobnzs(string sbiatrmrgdqfdv, bool gbzyl, bool vfpzbxzkpti, bool zuqemvmvtuzf, int bzclsabw, bool ilfvfqdnnkh, string lnmjlbgshw, string wnolykx);
	string kvwcqxwmaifokytyoc();
	string roikzzyqembhmbwmi(bool qpbuaxasmbjd, double bihqkkelvczcy, bool ciavfpfnpy, bool smcceaxmnwbqo, bool dcbbgzoaf, int fhfkjy);
	bool exgkhnpmptuezzyyydqqvwo();

};


double wviorpb::dyggfancsdouefibf(string gtwpmet, string zistzimfvuca, int mfxupugesouidff, string vulrsq, string jpyoqlmehcrim) {
	double jfgxgjtio = 25736;
	bool zapevk = false;
	int caliiidch = 1609;
	double iifdrcl = 76873;
	bool xgkviobrs = false;
	double qisxarshgx = 78484;
	double lgolgdjkgwhjjpj = 77485;
	int vilyjwwu = 1509;
	bool xpfvhsg = true;
	if (1509 != 1509) {
		int rialqosyae;
		for (rialqosyae = 98; rialqosyae > 0; rialqosyae--) {
			continue;
		}
	}
	if (77485 == 77485) {
		int mh;
		for (mh = 29; mh > 0; mh--) {
			continue;
		}
	}
	if (false != false) {
		int fkjyklrcb;
		for (fkjyklrcb = 91; fkjyklrcb > 0; fkjyklrcb--) {
			continue;
		}
	}
	if (false != false) {
		int gmiq;
		for (gmiq = 68; gmiq > 0; gmiq--) {
			continue;
		}
	}
	if (25736 != 25736) {
		int aehtshireg;
		for (aehtshireg = 69; aehtshireg > 0; aehtshireg--) {
			continue;
		}
	}
	return 45197;
}

double wviorpb::mjxipwqvpuzkposlqxf() {
	string vgizqmdfzmzlg = "olppoubflgoxymtexvhtpwysznmnyeywxqthtfmfkkctafpxsdasyutmpfcmvipztxliywmopt";
	string epfplxbge = "atqxbzbhpupekicwcxiewteemlkgbiqkxdoxidvrtlimcqiyhtkuamccqtszvdhtmawnamstpdadteiy";
	string kksveabdlpmxhwi = "guyeldusvgaldquffkeqgscnnbhrffcgtnoqujdqcpuyzhbgrqrguzmdhkfolmlmwxmkvtnjtpnvrxfeksbjynjvcagpr";
	string zeddovracwutvxl = "tncvxocilowplow";
	int nmbagvlpmgns = 1419;
	double fwmsdresdt = 24048;
	double safaotdfe = 14829;
	double wvbsmdaboqjs = 9082;
	return 59035;
}

double wviorpb::wjqheqxeuuut() {
	return 86998;
}

double wviorpb::ehcxewynnugaarvhdfehe(string uabqtkiymtuk, bool tpkjzhf, double dewhoi, int qdhvu, int uaqrgxzofymu, string blqooltvkfg, bool gjsxrkvctmfg) {
	bool ojpdarjtlbbtaj = true;
	bool eqvtttrdrr = true;
	string pulhxezwyoh = "jkfgipqwmwuylyniagfquabjftcnlwuiiqxuakjoxkjoxsueesiyjmaumkmpkinukowhtnoswzkhktutjhgeaslenlecqsvohpgs";
	string hckzmbsrj = "qxrebphzrqppxxgfhkjbyraprtvnfwexrqkbuiamb";
	int bdyla = 3536;
	string rfnwtxnnoo = "gtcaopxxqcpgvme";
	double mdtdffspoq = 2888;
	double szzgizhancypl = 20060;
	if (true != true) {
		int gbibunxxox;
		for (gbibunxxox = 46; gbibunxxox > 0; gbibunxxox--) {
			continue;
		}
	}
	if (3536 != 3536) {
		int gsjjajnj;
		for (gsjjajnj = 66; gsjjajnj > 0; gsjjajnj--) {
			continue;
		}
	}
	if (string("jkfgipqwmwuylyniagfquabjftcnlwuiiqxuakjoxkjoxsueesiyjmaumkmpkinukowhtnoswzkhktutjhgeaslenlecqsvohpgs") != string("jkfgipqwmwuylyniagfquabjftcnlwuiiqxuakjoxkjoxsueesiyjmaumkmpkinukowhtnoswzkhktutjhgeaslenlecqsvohpgs")) {
		int vtwmppq;
		for (vtwmppq = 3; vtwmppq > 0; vtwmppq--) {
			continue;
		}
	}
	return 81084;
}

string wviorpb::kntkkavjpktvxdnevzrrxg(bool yrjoyjua) {
	string sxeiqpiux = "gzpgnxrteppjjnyoevafhhkukqqclgjqwnezhjoixtlj";
	int edtivxytquv = 97;
	string fymjdyxy = "enkzdnoiizjnzixmvwaeysdqwsitvsovahiqdkyegiwbkextasyvpzgvqkb";
	double qcngxi = 33310;
	string adixkrdpbnmgz = "egkf";
	string jwastvtrulnls = "mjmpypnvvaeusvexeddoulmnxwosmnibeixzalnumyhtwtdkfwrogmdlnaawcqdcjrbzsediihsawetpg";
	double mczkt = 12060;
	double vyfzdnlyi = 36591;
	bool szqgetg = false;
	if (false != false) {
		int yvvbuih;
		for (yvvbuih = 52; yvvbuih > 0; yvvbuih--) {
			continue;
		}
	}
	if (12060 == 12060) {
		int zuu;
		for (zuu = 48; zuu > 0; zuu--) {
			continue;
		}
	}
	if (string("mjmpypnvvaeusvexeddoulmnxwosmnibeixzalnumyhtwtdkfwrogmdlnaawcqdcjrbzsediihsawetpg") != string("mjmpypnvvaeusvexeddoulmnxwosmnibeixzalnumyhtwtdkfwrogmdlnaawcqdcjrbzsediihsawetpg")) {
		int mpmhdswj;
		for (mpmhdswj = 60; mpmhdswj > 0; mpmhdswj--) {
			continue;
		}
	}
	if (97 == 97) {
		int jigl;
		for (jigl = 83; jigl > 0; jigl--) {
			continue;
		}
	}
	return string("qdbnqlqlxagb");
}

string wviorpb::vcbbdayyleiieouo(int lgcayvypp, int ldcbkf, bool fjwmxvrxse, double bjqxrrmdsol, double azuxbcjp, string quershssjyyw, int hqgng, bool ttwmmsddzsjdbi, double dsqwhmd) {
	string tuwalfdwfgqif = "enlxpnoudbvoxtcigelwphhskzoyoxusvmpxxqouilfsxdlyph";
	double gofzegexhsowors = 21879;
	double oneuqmqk = 15386;
	double bcnbegifhxg = 19003;
	if (19003 != 19003) {
		int rlbulahet;
		for (rlbulahet = 78; rlbulahet > 0; rlbulahet--) {
			continue;
		}
	}
	if (19003 != 19003) {
		int qz;
		for (qz = 91; qz > 0; qz--) {
			continue;
		}
	}
	if (19003 == 19003) {
		int hlhkfxi;
		for (hlhkfxi = 53; hlhkfxi > 0; hlhkfxi--) {
			continue;
		}
	}
	if (string("enlxpnoudbvoxtcigelwphhskzoyoxusvmpxxqouilfsxdlyph") == string("enlxpnoudbvoxtcigelwphhskzoyoxusvmpxxqouilfsxdlyph")) {
		int gdbmeagj;
		for (gdbmeagj = 6; gdbmeagj > 0; gdbmeagj--) {
			continue;
		}
	}
	if (21879 == 21879) {
		int jscu;
		for (jscu = 84; jscu > 0; jscu--) {
			continue;
		}
	}
	return string("dezhljnvwcggkum");
}

void wviorpb::fvxwxgvwjxnorbobnzs(string sbiatrmrgdqfdv, bool gbzyl, bool vfpzbxzkpti, bool zuqemvmvtuzf, int bzclsabw, bool ilfvfqdnnkh, string lnmjlbgshw, string wnolykx) {
	string hcoyozpgql = "vzzkqhbnqswvtwgxfappyfsvzaqqwccatrrktxffowuqxupeqyaxwdovb";
	string chjubmnymn = "kgycdgdczfdvt";
	bool pvjeznlbijr = true;
	bool tmxhnf = false;
	double lurbsgfm = 14281;
	int dveuzwuwaz = 2512;
	bool wmdaqmgpys = true;
	bool bqfkplobsxaydmz = false;
	bool ffedqxxsonfxsxw = true;
	string qimprtxo = "wxgtdozhfkemvhxafplvlfnlmxbcyzorz";
	if (true == true) {
		int rcghdro;
		for (rcghdro = 88; rcghdro > 0; rcghdro--) {
			continue;
		}
	}
	if (14281 == 14281) {
		int cgrl;
		for (cgrl = 96; cgrl > 0; cgrl--) {
			continue;
		}
	}
	if (string("vzzkqhbnqswvtwgxfappyfsvzaqqwccatrrktxffowuqxupeqyaxwdovb") != string("vzzkqhbnqswvtwgxfappyfsvzaqqwccatrrktxffowuqxupeqyaxwdovb")) {
		int wxfwj;
		for (wxfwj = 48; wxfwj > 0; wxfwj--) {
			continue;
		}
	}
	if (string("kgycdgdczfdvt") != string("kgycdgdczfdvt")) {
		int mrosgruhud;
		for (mrosgruhud = 56; mrosgruhud > 0; mrosgruhud--) {
			continue;
		}
	}
	if (true != true) {
		int zgkxf;
		for (zgkxf = 23; zgkxf > 0; zgkxf--) {
			continue;
		}
	}

}

string wviorpb::kvwcqxwmaifokytyoc() {
	return string("dqzczuhhjwtv");
}

string wviorpb::roikzzyqembhmbwmi(bool qpbuaxasmbjd, double bihqkkelvczcy, bool ciavfpfnpy, bool smcceaxmnwbqo, bool dcbbgzoaf, int fhfkjy) {
	bool anyhpbflomtil = true;
	double vvdvpxny = 4438;
	int ggrxxeslhh = 1192;
	string ofgjepvdrboojt = "joakadiejksbfuucpfkhfohmltitnjvpgwdywnooztshmsicajitjzha";
	int mnwbeqjjitiqm = 2109;
	bool omfqtkt = true;
	int ekzocppdtuo = 3345;
	bool xvbinolicsfgme = true;
	int eguvsrmr = 2593;
	if (2593 == 2593) {
		int svnhy;
		for (svnhy = 53; svnhy > 0; svnhy--) {
			continue;
		}
	}
	if (string("joakadiejksbfuucpfkhfohmltitnjvpgwdywnooztshmsicajitjzha") != string("joakadiejksbfuucpfkhfohmltitnjvpgwdywnooztshmsicajitjzha")) {
		int jmyrne;
		for (jmyrne = 3; jmyrne > 0; jmyrne--) {
			continue;
		}
	}
	if (2593 == 2593) {
		int fojsuttlar;
		for (fojsuttlar = 31; fojsuttlar > 0; fojsuttlar--) {
			continue;
		}
	}
	if (3345 != 3345) {
		int ijudxn;
		for (ijudxn = 27; ijudxn > 0; ijudxn--) {
			continue;
		}
	}
	if (1192 == 1192) {
		int rwg;
		for (rwg = 91; rwg > 0; rwg--) {
			continue;
		}
	}
	return string("rprymfghnzadnrfv");
}

bool wviorpb::exgkhnpmptuezzyyydqqvwo() {
	string cgsrxpfnhurzki = "skjbcswgguqwu";
	int dnpcoaz = 4484;
	string nliidp = "iggqqclfpbcdclewxztxclopojlfktodksseyqqftspktbxynzniwzpgwvrzessisoheejjogzorian";
	string hspumuwx = "zyblxonbjesjgyaddxflxzvhigrxxxevpgnsmktbuznyvljtseoplpvkmrcdmliyofgkfklajojgxhhzyiypddtjav";
	bool okgnq = false;
	int bkwcflqycwbn = 1508;
	int xesbfvwndrvq = 695;
	double rlauq = 36390;
	double ufuvw = 11858;
	double crohcooqww = 31991;
	if (11858 == 11858) {
		int yfh;
		for (yfh = 5; yfh > 0; yfh--) {
			continue;
		}
	}
	if (1508 != 1508) {
		int iq;
		for (iq = 86; iq > 0; iq--) {
			continue;
		}
	}
	if (31991 == 31991) {
		int cmqnmww;
		for (cmqnmww = 22; cmqnmww > 0; cmqnmww--) {
			continue;
		}
	}
	if (string("iggqqclfpbcdclewxztxclopojlfktodksseyqqftspktbxynzniwzpgwvrzessisoheejjogzorian") != string("iggqqclfpbcdclewxztxclopojlfktodksseyqqftspktbxynzniwzpgwvrzessisoheejjogzorian")) {
		int exbspimy;
		for (exbspimy = 42; exbspimy > 0; exbspimy--) {
			continue;
		}
	}
	if (36390 == 36390) {
		int huqghrrmn;
		for (huqghrrmn = 91; huqghrrmn > 0; huqghrrmn--) {
			continue;
		}
	}
	return true;
}

void wviorpb::ekybudsacqcuhswgelk(bool vybqounvdwsf, double xhxrlk, string luejaibjaqcelcy, int zrdten) {
	bool cickssnkznsbmaz = false;
	if (false == false) {
		int osd;
		for (osd = 23; osd > 0; osd--) {
			continue;
		}
	}
	if (false != false) {
		int kobvvbpfff;
		for (kobvvbpfff = 84; kobvvbpfff > 0; kobvvbpfff--) {
			continue;
		}
	}
	if (false != false) {
		int fj;
		for (fj = 42; fj > 0; fj--) {
			continue;
		}
	}
	if (false == false) {
		int hmown;
		for (hmown = 43; hmown > 0; hmown--) {
			continue;
		}
	}

}

int wviorpb::mqglnplingo() {
	int pkpaxpjj = 1204;
	if (1204 != 1204) {
		int feb;
		for (feb = 43; feb > 0; feb--) {
			continue;
		}
	}
	return 93678;
}

double wviorpb::crdxgktsjehoezxg(int cprerqbgx, string liadff) {
	double cmhwbneiucu = 31421;
	double tgwfn = 31307;
	bool zepjx = false;
	bool fvrdzfsz = true;
	bool fmllllzgtnunj = false;
	return 18568;
}

bool wviorpb::yrmppdrlvrhwnvfhtfusozg(string nychzjxjho, double fjjsqcco, bool luovygm, string ojtxysjy, double wtktyjypommkfc, bool htoenxngqughfyu) {
	string lfegbiourfu = "agsnlbwrlkkrcxhmmjgvwcvtfmjbafaclwqqohfambvbsatybtagpxkrissnzylrknuoi";
	int ovnqdewljynq = 3228;
	if (3228 != 3228) {
		int oybtz;
		for (oybtz = 84; oybtz > 0; oybtz--) {
			continue;
		}
	}
	return false;
}

int wviorpb::jpfikrgkhh(bool shyxg, double zcgcogpqqn, int vfwweazidouat, bool zncvahyuim, double esbfdieuyeks, int yklxkmpo, bool yhxifsdslyy, bool gavprhhswmxrnm, string qvebuvbmcnzcg, int wbtsu) {
	string jsggzxeghbzrad = "tcawgjoxu";
	return 17356;
}

void wviorpb::csjbohmvlmkdmyjgbkzia(double idbdpj, string evpsmsvx, double xyudykqsrs, string icqgyfukcoryy, int qylnphxoxxbxu) {
	double jtabkruaarbxec = 19911;
	int vyxwjzltnfnb = 6291;
	if (6291 != 6291) {
		int qgsbmkyuei;
		for (qgsbmkyuei = 16; qgsbmkyuei > 0; qgsbmkyuei--) {
			continue;
		}
	}
	if (19911 == 19911) {
		int muj;
		for (muj = 90; muj > 0; muj--) {
			continue;
		}
	}
	if (19911 == 19911) {
		int xog;
		for (xog = 63; xog > 0; xog--) {
			continue;
		}
	}
	if (19911 != 19911) {
		int ikwj;
		for (ikwj = 55; ikwj > 0; ikwj--) {
			continue;
		}
	}

}

int wviorpb::hijijysnntrb(double oypxvfebfdaslcc, double irhdmuoizy, int ksngzknhsh, double ypqqgb, string tfpgatbwcitsxp, int fimwkyppremq, string rfbtjnmfclc, bool rifmttox, string vivtdbdiypmblc, string nzastlwdpxz) {
	bool nmkrpdodn = true;
	if (true != true) {
		int kgstmoa;
		for (kgstmoa = 40; kgstmoa > 0; kgstmoa--) {
			continue;
		}
	}
	return 47228;
}

double wviorpb::vdjzbgtehjlebqfptey(int zprojjlplhqetjc, int ammrevxvghlwe, int oxdxdfsazvfs, int whdrvggbq, int uurisuojemw, int zwpuwntphfcrc, int ybxlchfphjog, bool psfpejoancmdgg, string ejtzmre) {
	string kvszk = "rfomeezbvvzjunxmdrzhcedrviruahtvkiocbrpxunrkesnlizfxuldoyzxjetaazytmcexejothcevhsby";
	string nckpkqllfg = "bvexkbvwmdynlmhkdbkylflukbgdbtshejehwbwajebukjiunyzvpgxngdxdrdknihidczuszqmsmhamwhxfoibcjcugt";
	return 5044;
}

bool wviorpb::hnbxyzblilouvuydcfeg() {
	int ruammbp = 7482;
	int ywjoutjdzu = 2354;
	bool jkzflzeg = false;
	string ijjzsnydidza = "tpwfbpmjrmuqyosimslkjjqsomekfopemkqqkrtkjztnsboieezdcvcjufepqncqhvzcusdxip";
	int vsggmgngcbablz = 619;
	bool ayrkiypkwao = false;
	bool btoovftl = false;
	int tssjcibonzroymv = 852;
	if (string("tpwfbpmjrmuqyosimslkjjqsomekfopemkqqkrtkjztnsboieezdcvcjufepqncqhvzcusdxip") == string("tpwfbpmjrmuqyosimslkjjqsomekfopemkqqkrtkjztnsboieezdcvcjufepqncqhvzcusdxip")) {
		int ha;
		for (ha = 64; ha > 0; ha--) {
			continue;
		}
	}
	if (619 != 619) {
		int smzx;
		for (smzx = 80; smzx > 0; smzx--) {
			continue;
		}
	}
	if (false == false) {
		int oaddjid;
		for (oaddjid = 19; oaddjid > 0; oaddjid--) {
			continue;
		}
	}
	if (false != false) {
		int rer;
		for (rer = 47; rer > 0; rer--) {
			continue;
		}
	}
	return true;
}

double wviorpb::cpbjpsmosthlldycyunfycyei() {
	return 99953;
}

string wviorpb::sorfgsqpdvlmgikowvol(int vklnflubxfaeko, string jopmuejvo, string rqhpypirdb, double mttrdjmnljtvyi, double lzocjurkwsuy, bool jlzypwbgy, int bijlxcpxeiabtfu) {
	bool mhuceaakhy = false;
	string wcvilzk = "nwtyedjpx";
	double bjcnqplp = 37099;
	string ubjctsoewuidobi = "rkpudpxlpvjvsnaersqscgdrgcusrfhtykvcvesvmjnuhblnajigmvjzdvibbhytsvhvistdgl";
	if (false == false) {
		int shafncmtk;
		for (shafncmtk = 70; shafncmtk > 0; shafncmtk--) {
			continue;
		}
	}
	if (37099 != 37099) {
		int cotvm;
		for (cotvm = 6; cotvm > 0; cotvm--) {
			continue;
		}
	}
	if (false == false) {
		int mjbye;
		for (mjbye = 21; mjbye > 0; mjbye--) {
			continue;
		}
	}
	if (string("rkpudpxlpvjvsnaersqscgdrgcusrfhtykvcvesvmjnuhblnajigmvjzdvibbhytsvhvistdgl") != string("rkpudpxlpvjvsnaersqscgdrgcusrfhtykvcvesvmjnuhblnajigmvjzdvibbhytsvhvistdgl")) {
		int aozezo;
		for (aozezo = 65; aozezo > 0; aozezo--) {
			continue;
		}
	}
	return string("bosqrbxskuokraljku");
}

double wviorpb::qsodrdrzfsqcqzhsbhgzhul(bool qhewug, bool jvjydyyvr, double nllwhilddk, string goavyipeaanmv) {
	double hmeuxhcnffnva = 6663;
	double xizsuyfieso = 48174;
	if (48174 != 48174) {
		int lgxujt;
		for (lgxujt = 95; lgxujt > 0; lgxujt--) {
			continue;
		}
	}
	return 20065;
}

wviorpb::wviorpb() {
	this->jpfikrgkhh(false, 33167, 3320, false, 13935, 4267, false, false, string("gulgupsfzknhfofwqjffxnxlrrjhgjaonjdfwzcsddeysrlalnhlmgcanelonxzrfgziqtwuyes"), 1094);
	this->csjbohmvlmkdmyjgbkzia(2997, string("wgdetnamgcyalln"), 8853, string("jhnqxdgteluwcgwsskgsiwbebekriddttwkeswp"), 2094);
	this->hijijysnntrb(19908, 7443, 5998, 27461, string("wirszt"), 4083, string("mgefxtstffufo"), true, string("nxhtlivhurlmchtqkirmdqhrdzucdhyefcbqmtttruy"), string("vurwjqgqvaiumlhmwmsozkqiqmi"));
	this->vdjzbgtehjlebqfptey(0, 2072, 5810, 663, 953, 4548, 2693, true, string("ndivfbcetwmrdvipjpruhwucxbcqzkkkxyljkfxlnwllqwncbdbiqhhgrprdurtjxucrirkjupifbfcqfwx"));
	this->hnbxyzblilouvuydcfeg();
	this->cpbjpsmosthlldycyunfycyei();
	this->sorfgsqpdvlmgikowvol(1771, string("nrrjxhvewobie"), string("fwarldyxzvpswjchlqfmgjskinszryrdkjujwyvpvbxwptjgnhjtnwsbirlgjjcffjjgpduufavgfodofmcuuhtxvrpxk"), 31197, 12993, false, 1366);
	this->qsodrdrzfsqcqzhsbhgzhul(false, true, 15270, string("qwzyvtnibortlwdvrghrlmkjahvnsbyxmmfpurphmykwyfnxjirgupgemaruhlsqtoslnyljunkussn"));
	this->ekybudsacqcuhswgelk(true, 67737, string("xpyzarklntvvtlwxxdemenzbikgfnhxysoupvptbghhlaxmlvykpvgmqamyli"), 4360);
	this->mqglnplingo();
	this->crdxgktsjehoezxg(2553, string("inepnleqrxhfwfavgfdyhphdlehohmohbrrqmeenmvbrsyonfoc"));
	this->yrmppdrlvrhwnvfhtfusozg(string("gutnvztf"), 14689, false, string(""), 40468, false);
	this->dyggfancsdouefibf(string("ejklftbsrsehosdykqchxyamiripwztjcusieitzejdvol"), string("tqfwujcutuaprtyfwcrhqlhhytddjpvmghbxcoqrkq"), 2012, string("scihbkevtpivarpcevkz"), string("jdujihejnqtjlzlrpefygcaezjvqxtclcsmhizbsojtn"));
	this->mjxipwqvpuzkposlqxf();
	this->wjqheqxeuuut();
	this->ehcxewynnugaarvhdfehe(string("ntcoiosajqvdiolzopmjbjsdhlkpscsosynitkkmmkgubdwowzlxpkzjzmepxwrhzrugmg"), true, 5624, 7189, 4556, string("ebnyxiacgqzlladcxeas"), true);
	this->kntkkavjpktvxdnevzrrxg(false);
	this->vcbbdayyleiieouo(2004, 810, true, 17281, 18744, string("pbsjcgitlgdsfdplpzwjgxdeyywdjjjarqbjpkvoexdulkrpdyyekjwwxgdspsdrtbxhbfcernocjh"), 7967, true, 51214);
	this->fvxwxgvwjxnorbobnzs(string("bgycdceboenwsjkhaglmdyzbexhqedkzbgvqejipxqvmnnwonfnztgfatjczwuwqly"), false, true, true, 356, false, string("vckultczdxpjbfmbqoyxpwkunyhqwrhcyqmjslkauxkqjgasuqifamjbtpsjerxjjpummmgfkrxzfjqslcpsuext"), string("tteqjvgbvxcnzdrknmfaoxozmhulkedwdxwjhglktpbuaowkeapawfjnnjgnuzxzrwmq"));
	this->kvwcqxwmaifokytyoc();
	this->roikzzyqembhmbwmi(true, 18369, false, true, false, 1382);
	this->exgkhnpmptuezzyyydqqvwo();
}

using namespace std;

class owmffny {
public:
	bool zwjdikuegwm;
	bool oszdn;
	string dimxekrbgr;
	bool cyrakkxbhv;
	owmffny();
	int cigowbnmjqtrhmzr(bool nauaos, double xqewcwjfigowq);
	bool mpjezpaxsqlmlmduwbeyi(bool pnsvvkmhtpmsvnt, bool ugffjtdsghr, bool qabqwbhqrkdb, bool xwmugggruej, int nivkatebikhrukz, int aelkgjuatxw, int higtvdpvsaiydcg);
	int fglticghfnp(double wcyuhmh, bool fnekv, double yirwidmezk, int sbwofvggcm, int txejkdvzuqzoer);
	void qnjvmtutapmevcbfiov(string fcwzbbwums, bool hdxmhdt);
	double uocwxdozwlwxy();
	int cgksdnpbcui(string eeaakabflxaowd, string nrgusvqvvhlvpe, string yrgib, string omfpgpyugaxo, int xzuwatrz, bool maelsrlmqcicwuo, double ilpuosb, int uxhtdvovskfzz, double qudaaftqczbwtu, bool linohfrwuvzps);

protected:
	int jcyna;
	int hlrrma;
	int zswwrbdulgx;

	string ixkiwleygoahlehwir(bool zuleohjplgwrs, bool ihfdxuobpceuoc, string ponfkrm);
	string tinbjjqovqcxvxzz(bool lxpdfkcgzs, double nahkgycdqj, bool ngqoupwtao, bool tigbgrgwyp, double myvaza, bool uxpwjqxhdgtl, bool rnlwcpizdvxy, string zaddbfchf, int qlwuvpoga);
	bool vqhaixcqgdqxyqcivgryko(bool rxwzu, bool mqlct, string bmmqs, bool wgiewbwxjrvdmt);
	bool bkqxifajbodjewwytpqhuphmn(int ojhat, bool tuehlrobcysnnr, double ripnfqgkqgnak, bool ydbuo);
	double jfiwxdxwfim(int jmwkntfeceigxc, bool yduijapr);
	string bkaglttkixwxjcak(int wfmroch, double pzgswhak, int mxwtjz, bool jkoykkcxhvxvcp, int yefwumdgormlh, string eimwjwndmwv, int lzlgwdpdsxtotdd);
	double pfluvoxuqg(double vvgwjrvldfttko, string hhkfvh, string davfhds, int wndywpvenpmoe, string tigphupubc, bool jpyukvthdnkthm, bool lkiagqr);

private:
	bool njcxkkc;
	double xlzdtuiaaa;
	int ftirygsphrjk;
	int fayjjpgejgq;

	string ezayoxfbhftos(double nwoitwy, int jmmsntbi, bool kndieqdqm);
	double nygtqqevwqnyeot(double lxkshkfish, double jrficccjnfa, string dfplfv, string hdyuqln, string arezsonlatwf, bool pqvbz, int lamwczm, string ktekqhfdtryrep, int ciuan);
	string msioiceqoo();
	int corswankbmyzxbj(bool ftkrjvauqb);
	string vgsxcyncafdzdzkgtugxegu();
	void yejrmrvmurrznaovgbns(int jegis, string nfpbkejsdxonaiz, int jkamu, string qpqavcnex);
	void nafypovljbop(bool acqiulzamkd, double nqslsk, string aqhehamxdkl, int wdogahl, string gpmuo, bool zsxwydow, bool yyqzgmxt, bool nwcogocytzhct);
	string pbdrumephzeucmmihxwbzc(string rqmtjxzvdetvr, bool yjhyuzzwmszvmfe, int yonlkrstffdxfj, int skngurfxk, double mrdtvgmn);

};


string owmffny::ezayoxfbhftos(double nwoitwy, int jmmsntbi, bool kndieqdqm) {
	bool adlnvbiwpyc = false;
	double dkwkiqc = 27406;
	bool tfrskjico = false;
	int txqphtizc = 3248;
	bool tmxrj = true;
	string ieuppcpstt = "fkuxbcdrubdwdsyjeojecpmimbdd";
	bool errxu = false;
	int znfdwmpzbiwjoa = 987;
	if (987 == 987) {
		int otcs;
		for (otcs = 16; otcs > 0; otcs--) {
			continue;
		}
	}
	if (27406 == 27406) {
		int fadph;
		for (fadph = 56; fadph > 0; fadph--) {
			continue;
		}
	}
	if (false == false) {
		int vwsmukn;
		for (vwsmukn = 84; vwsmukn > 0; vwsmukn--) {
			continue;
		}
	}
	if (3248 == 3248) {
		int vkloi;
		for (vkloi = 1; vkloi > 0; vkloi--) {
			continue;
		}
	}
	return string("krrzh");
}

double owmffny::nygtqqevwqnyeot(double lxkshkfish, double jrficccjnfa, string dfplfv, string hdyuqln, string arezsonlatwf, bool pqvbz, int lamwczm, string ktekqhfdtryrep, int ciuan) {
	string vsynuggsfkm = "btslihuhdcamnoxxkrdzpthjrxfcigptuwraaaywnsrsdoblaydnoplrrzmgvsaqrhgmlsjchmrsjuhwzdjtgxoxyttt";
	int qnkhpgyulwybj = 4364;
	string pjkmiujjw = "pmnnctxrnpouewsteyupqbcdnsxauwjfnqhvrwsponzswdkrsqrvhztqrydzdgcirnshgmissmjslca";
	bool aebwe = true;
	double nvnlpdgy = 71010;
	int tqlgvuydvi = 1173;
	if (string("pmnnctxrnpouewsteyupqbcdnsxauwjfnqhvrwsponzswdkrsqrvhztqrydzdgcirnshgmissmjslca") != string("pmnnctxrnpouewsteyupqbcdnsxauwjfnqhvrwsponzswdkrsqrvhztqrydzdgcirnshgmissmjslca")) {
		int xmc;
		for (xmc = 0; xmc > 0; xmc--) {
			continue;
		}
	}
	if (1173 != 1173) {
		int zlbjhr;
		for (zlbjhr = 70; zlbjhr > 0; zlbjhr--) {
			continue;
		}
	}
	if (71010 != 71010) {
		int rzmmrnim;
		for (rzmmrnim = 55; rzmmrnim > 0; rzmmrnim--) {
			continue;
		}
	}
	return 57406;
}

string owmffny::msioiceqoo() {
	double ucobibozjrutbk = 1043;
	int crpswvd = 154;
	string mgijcud = "jtuwbzprogeidzjg";
	string bzfxfeq = "beufkwbetpndnqacwgvzktpliztmszejdijujknbzqgaohiueistbqrjwfujbcfxr";
	bool saakm = false;
	bool yltzajqtpinhl = false;
	double hngfofnqkwlsmy = 53443;
	int tizlxhlhik = 1699;
	int hdawapbfwbslzt = 145;
	if (false == false) {
		int zrbsylt;
		for (zrbsylt = 99; zrbsylt > 0; zrbsylt--) {
			continue;
		}
	}
	return string("qylfueccwtkdbw");
}

int owmffny::corswankbmyzxbj(bool ftkrjvauqb) {
	string gdlrcr = "ukxbpbihqbatxormoqpepstrzdtrxhmjiooycalqkclsrir";
	double vohhrfqxlve = 16237;
	double gsudngtjg = 26883;
	bool yxllakhtmzbvml = false;
	int jyknvkabalkxqkg = 2373;
	if (26883 == 26883) {
		int xgjwxziml;
		for (xgjwxziml = 67; xgjwxziml > 0; xgjwxziml--) {
			continue;
		}
	}
	if (16237 != 16237) {
		int gtysmbu;
		for (gtysmbu = 45; gtysmbu > 0; gtysmbu--) {
			continue;
		}
	}
	return 93711;
}

string owmffny::vgsxcyncafdzdzkgtugxegu() {
	string exzcdpcqgdomr = "nmexgyznjjzfudttvxdvblkojwssomoggvcjoqgkmufsgdzxfzbhawdfgmuuimpaxooddrojsrooswwsuhjrapkvrsqdolubsb";
	string lqwtfqxbpws = "hipumfjeklukuueohmfhuncxuziaxjgcquwdklqrltjzsslmnrnvqljcztwkymbdqycoqqjcwqmglchckravsojqohgpkkcwen";
	string tfgghzldjykf = "qyrpupbz";
	string yebafcdy = "hvlohcgmbzexduawgsyhzehntdgsfabmurhkajrqgczoumqskshzhsqcjwxduhmqe";
	if (string("qyrpupbz") == string("qyrpupbz")) {
		int rgaoj;
		for (rgaoj = 43; rgaoj > 0; rgaoj--) {
			continue;
		}
	}
	if (string("qyrpupbz") == string("qyrpupbz")) {
		int cteqqpy;
		for (cteqqpy = 66; cteqqpy > 0; cteqqpy--) {
			continue;
		}
	}
	if (string("hvlohcgmbzexduawgsyhzehntdgsfabmurhkajrqgczoumqskshzhsqcjwxduhmqe") != string("hvlohcgmbzexduawgsyhzehntdgsfabmurhkajrqgczoumqskshzhsqcjwxduhmqe")) {
		int ckfi;
		for (ckfi = 42; ckfi > 0; ckfi--) {
			continue;
		}
	}
	if (string("hvlohcgmbzexduawgsyhzehntdgsfabmurhkajrqgczoumqskshzhsqcjwxduhmqe") == string("hvlohcgmbzexduawgsyhzehntdgsfabmurhkajrqgczoumqskshzhsqcjwxduhmqe")) {
		int lzyaunen;
		for (lzyaunen = 1; lzyaunen > 0; lzyaunen--) {
			continue;
		}
	}
	return string("naivei");
}

void owmffny::yejrmrvmurrznaovgbns(int jegis, string nfpbkejsdxonaiz, int jkamu, string qpqavcnex) {
	string wegorekgolbjrr = "tbxlmxnbbwbuivqtypkkamvhasoxqugxtmmtviflyyxiuzechbxcjegacoomluqbnurpwrgycmpxkjvrwcwdflvtphz";
	double fmclchjdleb = 52109;
	int kbvdz = 122;
	if (52109 == 52109) {
		int xdumr;
		for (xdumr = 34; xdumr > 0; xdumr--) {
			continue;
		}
	}

}

void owmffny::nafypovljbop(bool acqiulzamkd, double nqslsk, string aqhehamxdkl, int wdogahl, string gpmuo, bool zsxwydow, bool yyqzgmxt, bool nwcogocytzhct) {
	int htyfkardxzlvoh = 6515;
	double ezigz = 19335;
	double ojfbtqxnqcp = 16892;
	bool lfjtjezsa = false;
	double lkzafrtoiwjvie = 12772;
	int vlbqfdh = 417;
	string bxtwtraucex = "as";
	int wwztxgeinwtel = 2496;
	bool hhhal = false;
	string xjetnd = "pfglmchmhocgrkdzccylnagpayuaobupppybdfdobailzmdkjnefxmdufoymyqxckocplkmxifzukqtxm";
	if (false == false) {
		int lmxnpawrsp;
		for (lmxnpawrsp = 57; lmxnpawrsp > 0; lmxnpawrsp--) {
			continue;
		}
	}
	if (false != false) {
		int wsgcvpfdp;
		for (wsgcvpfdp = 88; wsgcvpfdp > 0; wsgcvpfdp--) {
			continue;
		}
	}

}

string owmffny::pbdrumephzeucmmihxwbzc(string rqmtjxzvdetvr, bool yjhyuzzwmszvmfe, int yonlkrstffdxfj, int skngurfxk, double mrdtvgmn) {
	int yceyvsjeizmcqaw = 1563;
	double sfcmt = 18740;
	int fxbjnvwodtmgunl = 150;
	string oufmy = "lngsrfpmjqtdboxrlojewmxxwxoyrqvgimpudfbaxpbl";
	double lgzqbypjtnwi = 13916;
	bool fiyuazesncvtpnx = false;
	int djthzceqfw = 3797;
	int wbhxaamfsa = 5648;
	if (1563 != 1563) {
		int wp;
		for (wp = 33; wp > 0; wp--) {
			continue;
		}
	}
	if (3797 != 3797) {
		int xsx;
		for (xsx = 38; xsx > 0; xsx--) {
			continue;
		}
	}
	if (string("lngsrfpmjqtdboxrlojewmxxwxoyrqvgimpudfbaxpbl") != string("lngsrfpmjqtdboxrlojewmxxwxoyrqvgimpudfbaxpbl")) {
		int uvvw;
		for (uvvw = 7; uvvw > 0; uvvw--) {
			continue;
		}
	}
	return string("ldtiuxlikgsvgmffslvf");
}

string owmffny::ixkiwleygoahlehwir(bool zuleohjplgwrs, bool ihfdxuobpceuoc, string ponfkrm) {
	string uvswuzwtja = "spsccuiibqyimeoemxkmrzeqy";
	bool gisaejt = true;
	bool iwgem = true;
	double hfegqdtreimgx = 40429;
	if (true != true) {
		int jljakac;
		for (jljakac = 82; jljakac > 0; jljakac--) {
			continue;
		}
	}
	if (true != true) {
		int xlqqifbep;
		for (xlqqifbep = 79; xlqqifbep > 0; xlqqifbep--) {
			continue;
		}
	}
	return string("vvvknhnjvihosvhmi");
}

string owmffny::tinbjjqovqcxvxzz(bool lxpdfkcgzs, double nahkgycdqj, bool ngqoupwtao, bool tigbgrgwyp, double myvaza, bool uxpwjqxhdgtl, bool rnlwcpizdvxy, string zaddbfchf, int qlwuvpoga) {
	string umpuuomseqhtqri = "knmnmoavnbbqacjflzhvkwuslbgjzevsxbkudbumkutiekpeillshchpmrdbzlwgvucygnqorifab";
	string ymiyephrj = "vyqjqidongocnnxvhxqy";
	if (string("vyqjqidongocnnxvhxqy") == string("vyqjqidongocnnxvhxqy")) {
		int sejrwcsu;
		for (sejrwcsu = 68; sejrwcsu > 0; sejrwcsu--) {
			continue;
		}
	}
	if (string("knmnmoavnbbqacjflzhvkwuslbgjzevsxbkudbumkutiekpeillshchpmrdbzlwgvucygnqorifab") == string("knmnmoavnbbqacjflzhvkwuslbgjzevsxbkudbumkutiekpeillshchpmrdbzlwgvucygnqorifab")) {
		int jtyqkec;
		for (jtyqkec = 75; jtyqkec > 0; jtyqkec--) {
			continue;
		}
	}
	if (string("vyqjqidongocnnxvhxqy") == string("vyqjqidongocnnxvhxqy")) {
		int zrskuh;
		for (zrskuh = 27; zrskuh > 0; zrskuh--) {
			continue;
		}
	}
	if (string("knmnmoavnbbqacjflzhvkwuslbgjzevsxbkudbumkutiekpeillshchpmrdbzlwgvucygnqorifab") == string("knmnmoavnbbqacjflzhvkwuslbgjzevsxbkudbumkutiekpeillshchpmrdbzlwgvucygnqorifab")) {
		int eac;
		for (eac = 24; eac > 0; eac--) {
			continue;
		}
	}
	if (string("vyqjqidongocnnxvhxqy") != string("vyqjqidongocnnxvhxqy")) {
		int sxa;
		for (sxa = 71; sxa > 0; sxa--) {
			continue;
		}
	}
	return string("vtgdwors");
}

bool owmffny::vqhaixcqgdqxyqcivgryko(bool rxwzu, bool mqlct, string bmmqs, bool wgiewbwxjrvdmt) {
	bool lialw = true;
	int hbaxq = 2079;
	if (2079 == 2079) {
		int lhfn;
		for (lhfn = 77; lhfn > 0; lhfn--) {
			continue;
		}
	}
	return true;
}

bool owmffny::bkqxifajbodjewwytpqhuphmn(int ojhat, bool tuehlrobcysnnr, double ripnfqgkqgnak, bool ydbuo) {
	string hmwzgsawyanxm = "uast";
	string xiirn = "fqmmsmcvzjarnjlydrzyhjrprjrmugplwazfcwttzrzmckfplubvmmufcqnzvn";
	bool crravbspmhzhg = true;
	int nsjgpkcvp = 4339;
	int mrtgebtpnvgzl = 1519;
	return false;
}

double owmffny::jfiwxdxwfim(int jmwkntfeceigxc, bool yduijapr) {
	string iwdmy = "upxgvluutpawkkupbwvcfwhvezvwjeemeqbgenhobwtfuwcaglrmdevycrbosf";
	bool wlwrnxlsx = true;
	double kxiofznzpbbd = 29708;
	string nxkqebofln = "undrhrzdxnttzqikmvqtnczsmxojicbvwfkescmsvqdeikxmlbiatmbvzhbtlwbydwuvqyubwitwlogishzibvgbvarkavzzdba";
	double izxdiamir = 19653;
	double ofmtvbmgclujil = 11974;
	bool uscojfuzk = true;
	double zvkafcbhxi = 38654;
	double heludsixcjvtc = 14705;
	bool jsdnekfrjhbex = false;
	return 48680;
}

string owmffny::bkaglttkixwxjcak(int wfmroch, double pzgswhak, int mxwtjz, bool jkoykkcxhvxvcp, int yefwumdgormlh, string eimwjwndmwv, int lzlgwdpdsxtotdd) {
	bool cmoknnmfmja = true;
	string bhlfuwdwnuzd = "tiebecqrwtargziswfsvuliyckrelkymriyldnwdnalqiwfkmcmxqmndldzljvzusjplqtrphxzufys";
	string ctcjinzqm = "zohryisikscdhvrcguhuoeahozvdrnvxfigc";
	double ocyxwwvzpzkgjvx = 43652;
	bool kihvvxt = false;
	double pvsaqqlkmfnjx = 33675;
	int hsbixu = 211;
	if (33675 != 33675) {
		int nyoavugars;
		for (nyoavugars = 19; nyoavugars > 0; nyoavugars--) {
			continue;
		}
	}
	if (33675 != 33675) {
		int bxtrmkq;
		for (bxtrmkq = 36; bxtrmkq > 0; bxtrmkq--) {
			continue;
		}
	}
	if (true == true) {
		int ugjzov;
		for (ugjzov = 27; ugjzov > 0; ugjzov--) {
			continue;
		}
	}
	return string("prkkx");
}

double owmffny::pfluvoxuqg(double vvgwjrvldfttko, string hhkfvh, string davfhds, int wndywpvenpmoe, string tigphupubc, bool jpyukvthdnkthm, bool lkiagqr) {
	string dmzugeccjjsjdnv = "cbsknrodoeyzaidygdjytqnchzogtrpyumyguvirrgmegtvmmgsmhxuufrncf";
	double ocqkzceavzwhgy = 28099;
	bool aqlgglhbmxdqrc = false;
	if (string("cbsknrodoeyzaidygdjytqnchzogtrpyumyguvirrgmegtvmmgsmhxuufrncf") != string("cbsknrodoeyzaidygdjytqnchzogtrpyumyguvirrgmegtvmmgsmhxuufrncf")) {
		int gnrqzgbtzr;
		for (gnrqzgbtzr = 86; gnrqzgbtzr > 0; gnrqzgbtzr--) {
			continue;
		}
	}
	if (false != false) {
		int slkhmca;
		for (slkhmca = 48; slkhmca > 0; slkhmca--) {
			continue;
		}
	}
	if (28099 != 28099) {
		int zitxeriol;
		for (zitxeriol = 69; zitxeriol > 0; zitxeriol--) {
			continue;
		}
	}
	return 56358;
}

int owmffny::cigowbnmjqtrhmzr(bool nauaos, double xqewcwjfigowq) {
	string ooyijnvqxld = "hyawrsscmgqodlqrrzhmgeboimsonfjtcdklcrwtfc";
	int luqdcwr = 2866;
	bool eylarbrqq = false;
	string fjtlc = "bzonzzghntjkjtbgswzeqkgzpftfputkuehjjsozaybietk";
	string bgrdafrlwsqts = "lfrcjqh";
	if (string("bzonzzghntjkjtbgswzeqkgzpftfputkuehjjsozaybietk") == string("bzonzzghntjkjtbgswzeqkgzpftfputkuehjjsozaybietk")) {
		int coxtgto;
		for (coxtgto = 10; coxtgto > 0; coxtgto--) {
			continue;
		}
	}
	if (2866 == 2866) {
		int hdfznus;
		for (hdfznus = 78; hdfznus > 0; hdfznus--) {
			continue;
		}
	}
	if (string("bzonzzghntjkjtbgswzeqkgzpftfputkuehjjsozaybietk") != string("bzonzzghntjkjtbgswzeqkgzpftfputkuehjjsozaybietk")) {
		int nmxtteqza;
		for (nmxtteqza = 97; nmxtteqza > 0; nmxtteqza--) {
			continue;
		}
	}
	if (false != false) {
		int jcuotmr;
		for (jcuotmr = 36; jcuotmr > 0; jcuotmr--) {
			continue;
		}
	}
	return 83605;
}

bool owmffny::mpjezpaxsqlmlmduwbeyi(bool pnsvvkmhtpmsvnt, bool ugffjtdsghr, bool qabqwbhqrkdb, bool xwmugggruej, int nivkatebikhrukz, int aelkgjuatxw, int higtvdpvsaiydcg) {
	double wrsavpmc = 54080;
	bool mvgkvwlurr = true;
	bool vudoavfxbezcxvw = true;
	string jmwcfnr = "tkkldxglprnldhxgwfadeilszwferfphbokhoeeiyc";
	int qctbpabexofmk = 2040;
	double otdscouzfwmjz = 23747;
	string jfwjbsafgmras = "hxlldvsau";
	double xnzkdgez = 8792;
	double uxkbsrrtgq = 39287;
	int xrzktwc = 1680;
	if (1680 != 1680) {
		int ckb;
		for (ckb = 56; ckb > 0; ckb--) {
			continue;
		}
	}
	if (string("hxlldvsau") == string("hxlldvsau")) {
		int djl;
		for (djl = 23; djl > 0; djl--) {
			continue;
		}
	}
	if (string("tkkldxglprnldhxgwfadeilszwferfphbokhoeeiyc") != string("tkkldxglprnldhxgwfadeilszwferfphbokhoeeiyc")) {
		int rxuegjz;
		for (rxuegjz = 95; rxuegjz > 0; rxuegjz--) {
			continue;
		}
	}
	if (39287 != 39287) {
		int slhd;
		for (slhd = 45; slhd > 0; slhd--) {
			continue;
		}
	}
	return false;
}

int owmffny::fglticghfnp(double wcyuhmh, bool fnekv, double yirwidmezk, int sbwofvggcm, int txejkdvzuqzoer) {
	bool ehahmlubwsst = true;
	double kdlmqzghgjfqqwh = 45929;
	bool pluetrhxioytro = true;
	string tsmaqccbn = "fpuiwuvykzavpngyvcawyobhxfcsyvzrtwlehmhsobrlocganajzggqfmynujiylilyzwkbggrvjgnoiprdpugxyag";
	int lmfyufmvgfyog = 151;
	int rlhiaphyq = 1799;
	double aanuombvqn = 28790;
	if (true != true) {
		int qqrfucg;
		for (qqrfucg = 16; qqrfucg > 0; qqrfucg--) {
			continue;
		}
	}
	return 72938;
}

void owmffny::qnjvmtutapmevcbfiov(string fcwzbbwums, bool hdxmhdt) {
	double uyqobwvgwxfa = 3140;
	if (3140 == 3140) {
		int au;
		for (au = 33; au > 0; au--) {
			continue;
		}
	}

}

double owmffny::uocwxdozwlwxy() {
	int iolcuppcmilfu = 2512;
	double wqdffnzyyj = 57846;
	int evgkzhdb = 14;
	bool prbjofhb = true;
	string zztzbqjotfedxye = "ugrigmhpyogolnzoqqqxalxfpisxrwprvolzfjogyqowfrncdidikqofexczcvsoujdqtwxupbmxxtgwnlwyggwtweomd";
	int utkvntqnh = 384;
	if (57846 != 57846) {
		int nikryxlx;
		for (nikryxlx = 83; nikryxlx > 0; nikryxlx--) {
			continue;
		}
	}
	if (true == true) {
		int kqlfockvst;
		for (kqlfockvst = 85; kqlfockvst > 0; kqlfockvst--) {
			continue;
		}
	}
	return 1361;
}

int owmffny::cgksdnpbcui(string eeaakabflxaowd, string nrgusvqvvhlvpe, string yrgib, string omfpgpyugaxo, int xzuwatrz, bool maelsrlmqcicwuo, double ilpuosb, int uxhtdvovskfzz, double qudaaftqczbwtu, bool linohfrwuvzps) {
	int ebeiqgkeebjayn = 1828;
	bool mtycs = false;
	int jwyziza = 4409;
	string uzbfltuqqobz = "qmuuhosfxdrakngjbuaamdgwsbgzflcgzgbeazjctioicfdgvpyiwtngcoqmjquyzhvqgtmnybllxnhfpaqoioem";
	string rptevfgsx = "galqyfikldkokgrgrxerumikppsqpgpepqmjmpsiqqcdgtnbizqgafwcmjjkqtvbpohpsdbnwlyo";
	int akbjduyuoxxp = 3029;
	double jpuizubxzs = 38241;
	double bbjmrxlmr = 59880;
	if (string("qmuuhosfxdrakngjbuaamdgwsbgzflcgzgbeazjctioicfdgvpyiwtngcoqmjquyzhvqgtmnybllxnhfpaqoioem") != string("qmuuhosfxdrakngjbuaamdgwsbgzflcgzgbeazjctioicfdgvpyiwtngcoqmjquyzhvqgtmnybllxnhfpaqoioem")) {
		int ha;
		for (ha = 85; ha > 0; ha--) {
			continue;
		}
	}
	return 83746;
}

owmffny::owmffny() {
	this->cigowbnmjqtrhmzr(false, 42859);
	this->mpjezpaxsqlmlmduwbeyi(false, true, true, false, 2189, 7631, 1204);
	this->fglticghfnp(44058, true, 15015, 2925, 3961);
	this->qnjvmtutapmevcbfiov(string("qmfulcsnsdidshetnyxrwdglatbxlcbinkyamxdqtipvevlqmxfeybovhyxtvtahruivzfoudjjqhwzfsagbszdsvstbroene"), true);
	this->uocwxdozwlwxy();
	this->cgksdnpbcui(string("rosowxbaczsqvsdrnsxfaxqmoimwlhxpppimuiwnchnwzriwwayaowhvshfldtmrxbfvuzuabnaketqdxrdanxbpudujfmm"), string("maslphipnsotkkosmuamrdwjrqhxidcomrzmspznxnwydkrmtnddudcfhfndihjpeivucnznxgawgkvlx"), string("rerdyqlniisckshnvfwqgocputkuwhfuarxxkbsjrufznmapizrqpwjwddzzguzjplgyrqea"), string("fuovgyfcprbsfajobjknvc"), 7159, false, 1081, 1185, 8260, false);
	this->ixkiwleygoahlehwir(true, true, string("xfwv"));
	this->tinbjjqovqcxvxzz(true, 29604, false, true, 803, false, false, string("rhv"), 2252);
	this->vqhaixcqgdqxyqcivgryko(false, true, string("wukuxreyzvkoswaksgqylhveeqwtvvhmuchzfsgdefnbokgiwvcfigcnizfofmefizfdhrpkiskfarezvwulvchk"), true);
	this->bkqxifajbodjewwytpqhuphmn(496, true, 78990, true);
	this->jfiwxdxwfim(1306, true);
	this->bkaglttkixwxjcak(566, 6838, 6485, false, 6742, string("twcugixkhicwewbkwmtekyqsmxejxjqwgkpnlwtunozdwxtbrlwtafutnlkqnoltoxrwrismfndqhsmafkmcyyzzicuumykhp"), 6535);
	this->pfluvoxuqg(28961, string("ocjphxfagamvxaqjqhkkxqaqyqzwlxer"), string("vrsmoxpzivfiavbolkvpjzzjdsxkpvwyqrw"), 1155, string("yx"), true, false);
	this->ezayoxfbhftos(4685, 1109, false);
	this->nygtqqevwqnyeot(9296, 9456, string("ysadzaziwcomlgjvfsubldzeayzzzsruhlgqgbbnhtnhnoqkihhxtiw"), string("frhkhjktmf"), string("izlmlroqyomjccvmpaqzyatqmngwbejvedldjgokbwqsautxfvfovfveqqmlfhukdpsbvmpscn"), false, 2485, string("bdexggvcunczvfpgudppwcywrgjasbklzejlfoxiwhllabirkzefmgkadyxmsooyfwgrfatiqghdbjba"), 4430);
	this->msioiceqoo();
	this->corswankbmyzxbj(false);
	this->vgsxcyncafdzdzkgtugxegu();
	this->yejrmrvmurrznaovgbns(5818, string("piwphtnscabjombukjueuqmoffrzhfcckbfz"), 2553, string("ctytnuxyaqxidibemdxnnvedhbrlumnpgsgckzhalkcbsrajyqkbzntqrukmejqdgcwccusgntvaiorvueljwwzopupurn"));
	this->nafypovljbop(false, 28195, string("suwpdyibpssjxuvosayhzhavfoqqankurrarsblgswy"), 854, string("gkkinwfsdptcpodltnfkicvubrbamt"), true, true, true);
	this->pbdrumephzeucmmihxwbzc(string("ybrjcpscrpsvdvbhvbzomcygqvkzlugmvbvstvqexrzbfcmprcwkmzztobqsrbiaonujgpebvdnbgikxtzxzfpbuqnk"), false, 1889, 2357, 52816);
}

using namespace std;

class kgbxvec {
public:
	bool xndnjrlpw;
	string fkkeqdd;
	kgbxvec();
	bool fturmjatwjflfcimmaxvu(string txtptfrfoznkoa, bool dlynlsifhifgqbk, bool cngcqaabnzvv, bool pphnbfzqdslz, bool kpavpmyhks, string cutzqgkveagkqt);
	void nelhdsgqpoamob(string ekmackhvbu);
	string vklurcveyu(string aczgitursk, int qnfbd, double lmrejb, int cdoilokreomrgi);
	double hzgazriejujbyphcoymktbkqu(int swfvzwezgpbey, double lzlvohmzxq, double cysovp, double ilhqtyaeiw, int hmfuk);
	bool wqvsxpmonxgb(int vfbktf, double mouputuabr);
	int jflfoprkvsgegrhfbwvpk(string oombfxwzlqviz, int upezarjv, string zqwdeduoob, string vjkzbpjqhqwfutm, bool qovsadyupcc, double ftrqukrhmyxwhp);

protected:
	double rosuehegixfmpc;
	double wtzqegmrxestc;

	bool icbkjddnuoeghsjuykadaaxr(int rldadru, string sqgcsii);
	bool zzeiywhpvs(bool xcohii, bool ikvinaqvn, int heetpvqxfcvb, double ckevsmvr, string vzekwweelrqlzrm, int pwlriixwnr);
	string mjidizemvmywhnqd();
	int pgsqsvhknv();
	void vofmgrsgafvdyoyit();
	double qopqayakuwejaexhh(double bxoiklgotxc, bool sdfughnzdigcu, string yxydgiv, string cguvwkm, string ijaudx, string olsqhehze);
	string eizkvsssixn(double yytxcnu, double yzzhhmybu, double alenngzeph, bool bnsweurgcz, string gqndaxejjb, string nwqxmjzzbxwrzao, bool cdfudonqpgoebix, double ndqcln, double fulqd, double wzosetelo);

private:
	double fxglk;

	string glzcvyzcplymipv(bool aokjbzbrsquekha, int ottptwoxmtxtxk, string dgnnlvfjncmvpxu);
	int sqxiesmdeicusmfdxhcj(double cpliweknab, string duofockykka, double rlivzmogcqnbowi, int wggelxae);
	string ukpoofrukr(string gyntmzlezxw, double tmvnjaks, int reckodmjuvzkdge, string qufyeigddkxnwmh, int aixsewwpclrt, bool jalriwqhhkxrrdp, double xjyjpw, bool fmkyvtvmxyrqfi, double twfbve);
	string pponiqttofprwybjbzomiv(string hzdrdoaargoebpb, double nnseqhmuwri, string mnrnitwurn, double gpvjbawqqmby);
	int annkdomgghldbgo(bool mfusigy, bool cjjnbg, double idgkxirbys, bool xajqirqnovjq, bool xebbsvcyxuqntlb, int haenzvnc, double lnmlgqcpcf);
	string iiyzmjotyjvie(bool ruwhbsu);
	string csqcjtabyhkdleziinadgy(double xntqxq, string jnwturest, bool vzbuzcg, string cdxogd, string rcbsyzpjkxsfpw, double gsconponerw, bool wnhztrpwzwkecqz, double gywoftcj);
	bool gigddoyvfsvhdvaxfgmdqjfbg();
	int tgznozdyqifgfyyz(string ptaxfouq, bool mudqkzkzz, bool erhhetd);

};


string kgbxvec::glzcvyzcplymipv(bool aokjbzbrsquekha, int ottptwoxmtxtxk, string dgnnlvfjncmvpxu) {
	string rmnggitmxnnxmlz = "kcffdvfgmweouyifdsmchczewxxlfnrjlqmctetfiqzjsmwfjdzwharyxfjpdmxlpfcxwlqqjzvqng";
	bool setiirlpkpr = true;
	bool midjbq = true;
	double cucrwap = 8613;
	bool lijwoswuzgsy = true;
	bool kejxdqniip = false;
	double oydeq = 3596;
	int aehprigxbwgnlcp = 3237;
	if (3596 != 3596) {
		int jrofjchizy;
		for (jrofjchizy = 50; jrofjchizy > 0; jrofjchizy--) {
			continue;
		}
	}
	return string("uxthyfw");
}

int kgbxvec::sqxiesmdeicusmfdxhcj(double cpliweknab, string duofockykka, double rlivzmogcqnbowi, int wggelxae) {
	string pqnbjomdvokeftm = "jvxltehfmcqxfhzvzpjchmkpcfaxwvsaoeqmsdngbuoeskvzmxyirhmqhyrfptraxgfqqebndloqbrtvegwqtatda";
	int crnshojxjhx = 7170;
	int gonlcv = 1816;
	string fkeooefvxtmah = "kewpwfcukxubxfeihyffgpkxmrfmzgumhbrplzpyzhikktryxoseeyedrdiaoshvraqqdclpoqrenvehkueyplljii";
	double tryactgzem = 29318;
	int fwkygbtueaym = 4035;
	double hbimeqk = 10004;
	string xokgxmrhdit = "jqhimaoqcmvnuletyaerqbmgxmfivdkrvnypoztstprggwpbnedaqtgkhgtcgooxhjbcfeeguiqnhmsffjxypwkm";
	if (string("kewpwfcukxubxfeihyffgpkxmrfmzgumhbrplzpyzhikktryxoseeyedrdiaoshvraqqdclpoqrenvehkueyplljii") == string("kewpwfcukxubxfeihyffgpkxmrfmzgumhbrplzpyzhikktryxoseeyedrdiaoshvraqqdclpoqrenvehkueyplljii")) {
		int rartrzn;
		for (rartrzn = 88; rartrzn > 0; rartrzn--) {
			continue;
		}
	}
	if (4035 == 4035) {
		int wmpwu;
		for (wmpwu = 80; wmpwu > 0; wmpwu--) {
			continue;
		}
	}
	if (4035 != 4035) {
		int clip;
		for (clip = 17; clip > 0; clip--) {
			continue;
		}
	}
	if (4035 != 4035) {
		int ytbdeseym;
		for (ytbdeseym = 0; ytbdeseym > 0; ytbdeseym--) {
			continue;
		}
	}
	return 99137;
}

string kgbxvec::ukpoofrukr(string gyntmzlezxw, double tmvnjaks, int reckodmjuvzkdge, string qufyeigddkxnwmh, int aixsewwpclrt, bool jalriwqhhkxrrdp, double xjyjpw, bool fmkyvtvmxyrqfi, double twfbve) {
	bool slvyggimnhl = false;
	double bhatzesnk = 38917;
	if (38917 == 38917) {
		int zjntwtiqd;
		for (zjntwtiqd = 1; zjntwtiqd > 0; zjntwtiqd--) {
			continue;
		}
	}
	if (false != false) {
		int biekt;
		for (biekt = 32; biekt > 0; biekt--) {
			continue;
		}
	}
	if (38917 != 38917) {
		int nvzbewkjmc;
		for (nvzbewkjmc = 55; nvzbewkjmc > 0; nvzbewkjmc--) {
			continue;
		}
	}
	if (false != false) {
		int iuooj;
		for (iuooj = 35; iuooj > 0; iuooj--) {
			continue;
		}
	}
	return string("fme");
}

string kgbxvec::pponiqttofprwybjbzomiv(string hzdrdoaargoebpb, double nnseqhmuwri, string mnrnitwurn, double gpvjbawqqmby) {
	bool kdkgtehgbupds = false;
	double cwlggowkoqdnq = 20259;
	int yopfnthxota = 1576;
	double qkyer = 2539;
	string shzfdnac = "drryedhjytqndqgsovdjvuoxiusokvntwinxaqdzefewbuzieccyyizytrkztytsjkonipmxrwo";
	int rultxzsofeeeo = 3448;
	return string("qny");
}

int kgbxvec::annkdomgghldbgo(bool mfusigy, bool cjjnbg, double idgkxirbys, bool xajqirqnovjq, bool xebbsvcyxuqntlb, int haenzvnc, double lnmlgqcpcf) {
	return 30877;
}

string kgbxvec::iiyzmjotyjvie(bool ruwhbsu) {
	string fuhmxogvzc = "hlhynlgbrgpweqjiubbgcjhoahqtakhrwloessbtzgcbqggycjfvbfzymfbzrzpvyqtfkowuzmgosdnsqtm";
	double zgdkiny = 4907;
	bool nurcxroh = true;
	int ueojfbtityea = 1337;
	double ivpbglvpelclli = 7314;
	double bwadkpqztmwyil = 57707;
	double olxhflslgjeb = 51007;
	bool fdjuwi = true;
	if (true == true) {
		int koqljvh;
		for (koqljvh = 27; koqljvh > 0; koqljvh--) {
			continue;
		}
	}
	return string("dijeryexnp");
}

string kgbxvec::csqcjtabyhkdleziinadgy(double xntqxq, string jnwturest, bool vzbuzcg, string cdxogd, string rcbsyzpjkxsfpw, double gsconponerw, bool wnhztrpwzwkecqz, double gywoftcj) {
	string irnjeursrbp = "mueerfsgycvsrilgiicxojqbbnixoboybqgflkofwbvpfnl";
	bool owwsycs = false;
	string tdhrbaei = "hfoxhivrpvvpnrhimtzbcbknauriwgovmczlyfcnjzfjkgttnhhwnnmuuoikiuwwsq";
	double wgwfrbuvolim = 39014;
	double cjfydp = 26868;
	return string("zueycsuyip");
}

bool kgbxvec::gigddoyvfsvhdvaxfgmdqjfbg() {
	double sbrhmcexmept = 56901;
	string ohfhqlur = "lwcvgvyibtdqxadiuanhwebng";
	bool wpahl = false;
	string atixmfvsfhcz = "wwwpkxdxekgjducnykejzlouefcksxprvrzfck";
	double wqinwpmzddm = 2138;
	bool mwntwbwx = true;
	int mhvyaitqygme = 3614;
	double xntvxhdm = 23803;
	if (string("wwwpkxdxekgjducnykejzlouefcksxprvrzfck") != string("wwwpkxdxekgjducnykejzlouefcksxprvrzfck")) {
		int plmlfoz;
		for (plmlfoz = 82; plmlfoz > 0; plmlfoz--) {
			continue;
		}
	}
	if (false != false) {
		int vrzpkrccb;
		for (vrzpkrccb = 79; vrzpkrccb > 0; vrzpkrccb--) {
			continue;
		}
	}
	return true;
}

int kgbxvec::tgznozdyqifgfyyz(string ptaxfouq, bool mudqkzkzz, bool erhhetd) {
	string iegyqeyihfcalmu = "erz";
	bool mgllrjtxin = true;
	double gbspo = 39269;
	bool lpcbtnofpcv = false;
	int elzciwwihmv = 3447;
	string jligwiqtisxzzl = "jyzttwdoduaiksdo";
	int vvkfhhkpz = 1347;
	double qtcssurylnjsiqp = 48389;
	string osuzdtbgfrtrx = "atzwvgsjzibcawwrdkiagdblfvgdciqellxdukbijciepsgxdmsbhhigzimqkraamioktjsscynqahykhhxfjgjyhvvbqwqwnpsg";
	if (39269 != 39269) {
		int bjbpskx;
		for (bjbpskx = 45; bjbpskx > 0; bjbpskx--) {
			continue;
		}
	}
	return 89934;
}

bool kgbxvec::icbkjddnuoeghsjuykadaaxr(int rldadru, string sqgcsii) {
	return false;
}

bool kgbxvec::zzeiywhpvs(bool xcohii, bool ikvinaqvn, int heetpvqxfcvb, double ckevsmvr, string vzekwweelrqlzrm, int pwlriixwnr) {
	return true;
}

string kgbxvec::mjidizemvmywhnqd() {
	int lwslfqjrfmtut = 2964;
	string acmswsg = "ileplkgaqiypunnukmylifzaphujikgziwngoerbezsotyucfuidlwdsbqzjghdmyscooxcbba";
	if (string("ileplkgaqiypunnukmylifzaphujikgziwngoerbezsotyucfuidlwdsbqzjghdmyscooxcbba") == string("ileplkgaqiypunnukmylifzaphujikgziwngoerbezsotyucfuidlwdsbqzjghdmyscooxcbba")) {
		int bgvcfanz;
		for (bgvcfanz = 7; bgvcfanz > 0; bgvcfanz--) {
			continue;
		}
	}
	if (2964 == 2964) {
		int uieve;
		for (uieve = 78; uieve > 0; uieve--) {
			continue;
		}
	}
	return string("ztbnaao");
}

int kgbxvec::pgsqsvhknv() {
	double jmbvga = 71280;
	string lkfvjodseet = "tvvejhdxxlazjctggkbqbaorqbllxbrvwkrndydojbykkajjmztqnoajbcx";
	bool pifoq = false;
	string duqnq = "bowvkgxrtphzbajdsmvkhchhzkfeuhn";
	if (string("bowvkgxrtphzbajdsmvkhchhzkfeuhn") == string("bowvkgxrtphzbajdsmvkhchhzkfeuhn")) {
		int wtxhxkk;
		for (wtxhxkk = 58; wtxhxkk > 0; wtxhxkk--) {
			continue;
		}
	}
	return 66101;
}

void kgbxvec::vofmgrsgafvdyoyit() {
	int elglppparib = 1005;
	string nuxdmaqcwpra = "v";
	string svybsnacupswl = "wxakwzfoyniilrucefsebztwpxjdgfxjpliuyzmcummjhamouwdxxjujdl";
	bool obpwtuhxznwld = true;
	int kxufnkn = 6978;
	string qazeeyx = "saokhogyxup";
	int livxpxintsz = 1585;
	string jrdftwccvewkeba = "xkvdnjcaexvxcayengziisqxlwiimqx";
	bool pokhtoe = false;
	bool svnopzofjbh = true;

}

double kgbxvec::qopqayakuwejaexhh(double bxoiklgotxc, bool sdfughnzdigcu, string yxydgiv, string cguvwkm, string ijaudx, string olsqhehze) {
	bool lifozgsozansi = false;
	string syktumzhikhjhv = "nafycngwadpnyxjzujmjoonnkoxzqqutm";
	if (string("nafycngwadpnyxjzujmjoonnkoxzqqutm") == string("nafycngwadpnyxjzujmjoonnkoxzqqutm")) {
		int rrcmyfpjr;
		for (rrcmyfpjr = 14; rrcmyfpjr > 0; rrcmyfpjr--) {
			continue;
		}
	}
	if (false == false) {
		int qossqj;
		for (qossqj = 48; qossqj > 0; qossqj--) {
			continue;
		}
	}
	if (string("nafycngwadpnyxjzujmjoonnkoxzqqutm") != string("nafycngwadpnyxjzujmjoonnkoxzqqutm")) {
		int gt;
		for (gt = 11; gt > 0; gt--) {
			continue;
		}
	}
	if (string("nafycngwadpnyxjzujmjoonnkoxzqqutm") == string("nafycngwadpnyxjzujmjoonnkoxzqqutm")) {
		int qxduputsat;
		for (qxduputsat = 52; qxduputsat > 0; qxduputsat--) {
			continue;
		}
	}
	return 11424;
}

string kgbxvec::eizkvsssixn(double yytxcnu, double yzzhhmybu, double alenngzeph, bool bnsweurgcz, string gqndaxejjb, string nwqxmjzzbxwrzao, bool cdfudonqpgoebix, double ndqcln, double fulqd, double wzosetelo) {
	bool ustnei = false;
	int yzlpe = 1779;
	string ksngwl = "dlmiwbmkuxsmldetjkvsdcddxecauvynidlareptmsaqkvwdtwyewqivwx";
	double krwlvoljqfms = 40292;
	string oufgqcbeohxug = "zgrlmu";
	int scpco = 3438;
	string vbnhxu = "kwrhyxropyglmjtbanlawfekljmic";
	if (string("kwrhyxropyglmjtbanlawfekljmic") == string("kwrhyxropyglmjtbanlawfekljmic")) {
		int wipqvitamy;
		for (wipqvitamy = 41; wipqvitamy > 0; wipqvitamy--) {
			continue;
		}
	}
	if (string("dlmiwbmkuxsmldetjkvsdcddxecauvynidlareptmsaqkvwdtwyewqivwx") != string("dlmiwbmkuxsmldetjkvsdcddxecauvynidlareptmsaqkvwdtwyewqivwx")) {
		int vw;
		for (vw = 25; vw > 0; vw--) {
			continue;
		}
	}
	return string("fbvtsefeviaaytxtu");
}

bool kgbxvec::fturmjatwjflfcimmaxvu(string txtptfrfoznkoa, bool dlynlsifhifgqbk, bool cngcqaabnzvv, bool pphnbfzqdslz, bool kpavpmyhks, string cutzqgkveagkqt) {
	bool cmxeewg = true;
	int buylkphpixziip = 8218;
	bool zuzczhfqwecupm = false;
	double sqzfsvfeqogbeo = 1676;
	bool xuaurmtvdblf = true;
	string almafzh = "gacbhnjlbigybvjzccfwclqgddxcokruqzxvndcqnuyuxujhoobtauieoymvyankptoctkkmbordfnlqgto";
	bool mdhneiefzuwdw = false;
	bool naokfxaha = false;
	string bluzxzscpdma = "wtkaziiwluqfwakxaekbukvwantlruthbbxwcudicbrlbgznajnhzhldvnhheaqkugdymmjqaiahvthnapuaylhvhzilvrzpp";
	int azqtiuqwgb = 2302;
	if (2302 == 2302) {
		int seoda;
		for (seoda = 27; seoda > 0; seoda--) {
			continue;
		}
	}
	if (2302 == 2302) {
		int deeo;
		for (deeo = 48; deeo > 0; deeo--) {
			continue;
		}
	}
	if (8218 == 8218) {
		int knqxd;
		for (knqxd = 95; knqxd > 0; knqxd--) {
			continue;
		}
	}
	return true;
}

void kgbxvec::nelhdsgqpoamob(string ekmackhvbu) {
	bool lcsnskewcrw = false;
	double zbmjuag = 18200;
	string xvdwriynvqpfspt = "rullztrojbyyudvowgffyhiwodjmhobekhltnqwzliohflxvitiliywxoiyzaarxtghtryicyzoikmsnllsbdxua";
	int dvftjv = 1;
	string rsuoleduvqc = "liruqqnfltzeuasppmiuromvwslekavbezswcvxvombsuoqqsziynqkzvymtq";
	double iyrnbrxdz = 42086;
	bool fbifgkmcwpzbh = true;
	double otnfus = 53394;

}

string kgbxvec::vklurcveyu(string aczgitursk, int qnfbd, double lmrejb, int cdoilokreomrgi) {
	double wsemmzqjjysz = 22729;
	bool sxvnfd = false;
	string cqvakkakmffj = "uzpfuduulwueaplbrjxhjy";
	bool ymeugdpwo = false;
	string wskfymccin = "pnaf";
	string rcermdrreofak = "psncwbtncaqagrogjpnpnvuyjrecdqykyifj";
	bool pixklfogbgkjk = true;
	if (string("psncwbtncaqagrogjpnpnvuyjrecdqykyifj") != string("psncwbtncaqagrogjpnpnvuyjrecdqykyifj")) {
		int vsxquhy;
		for (vsxquhy = 61; vsxquhy > 0; vsxquhy--) {
			continue;
		}
	}
	if (false == false) {
		int jqa;
		for (jqa = 56; jqa > 0; jqa--) {
			continue;
		}
	}
	if (false == false) {
		int qqdkdaanmo;
		for (qqdkdaanmo = 13; qqdkdaanmo > 0; qqdkdaanmo--) {
			continue;
		}
	}
	return string("opseysl");
}

double kgbxvec::hzgazriejujbyphcoymktbkqu(int swfvzwezgpbey, double lzlvohmzxq, double cysovp, double ilhqtyaeiw, int hmfuk) {
	bool osislch = true;
	int wpnunbux = 1175;
	bool lmxdi = false;
	if (true != true) {
		int lbibbboekz;
		for (lbibbboekz = 71; lbibbboekz > 0; lbibbboekz--) {
			continue;
		}
	}
	if (1175 != 1175) {
		int eoxc;
		for (eoxc = 25; eoxc > 0; eoxc--) {
			continue;
		}
	}
	if (true != true) {
		int rkttyadram;
		for (rkttyadram = 51; rkttyadram > 0; rkttyadram--) {
			continue;
		}
	}
	if (false != false) {
		int wp;
		for (wp = 8; wp > 0; wp--) {
			continue;
		}
	}
	return 9014;
}

bool kgbxvec::wqvsxpmonxgb(int vfbktf, double mouputuabr) {
	string hlzzcjgmnvrhtu = "qdhfnlfqgr";
	double grmuxqvnfxjxgai = 20589;
	double wufjnidpjwd = 27928;
	int rpwaagtwjkundb = 6288;
	bool aicxqrdenjjer = false;
	int wgfgvlomcuius = 8315;
	double sfckxvbgomgyfym = 35105;
	int supuucemmbqk = 3281;
	if (35105 == 35105) {
		int tjcho;
		for (tjcho = 71; tjcho > 0; tjcho--) {
			continue;
		}
	}
	if (27928 == 27928) {
		int uo;
		for (uo = 27; uo > 0; uo--) {
			continue;
		}
	}
	if (8315 != 8315) {
		int ufrhbfj;
		for (ufrhbfj = 18; ufrhbfj > 0; ufrhbfj--) {
			continue;
		}
	}
	return false;
}

int kgbxvec::jflfoprkvsgegrhfbwvpk(string oombfxwzlqviz, int upezarjv, string zqwdeduoob, string vjkzbpjqhqwfutm, bool qovsadyupcc, double ftrqukrhmyxwhp) {
	double hyeurjkvnf = 17210;
	double vzrwv = 3283;
	double yisajbgvpeqdywx = 9472;
	bool jscnmcwzblgsrga = true;
	return 58852;
}

kgbxvec::kgbxvec() {
	this->fturmjatwjflfcimmaxvu(string("efzkewjkpcawlggkkhpqcnycthoqcpvinncpdsarndwbujppyeuzfejdoifvegpnzrkjansmorjqpzdgfvceaxrv"), false, true, false, false, string("tnxgkhvhoqbguoysjsnguuepidmpkduxwqqaswctvjqyektlpelwjfyhd"));
	this->nelhdsgqpoamob(string("qnkyodpihztblqltqapodzvttbrmzknscpofmccpqqqskiobdaghelytpytobgqf"));
	this->vklurcveyu(string("yspxbsaotwdyitckqlynfymryxmtvguoadcnqtenzyghhm"), 4084, 17419, 1511);
	this->hzgazriejujbyphcoymktbkqu(1153, 28398, 27151, 21560, 3945);
	this->wqvsxpmonxgb(1648, 4932);
	this->jflfoprkvsgegrhfbwvpk(string("wawjkbtudpkhmahmjztldseqlyyngdawadztfnurpsxucjaxeqklmgnolarzhvzujjcxvaiiqocbzixrjxqn"), 2289, string("ltrgujmtjqkpnsidtiwnprwqesbansnuxbj"), string("qrsrlusltfbeqnsolyzdeojmjbrltvmeojuybhshedrihebgryqllinenwseggpxsyyerlk"), false, 6976);
	this->icbkjddnuoeghsjuykadaaxr(6757, string("xflwxwopkfillgqprywmqjilwlbbmjlqbgzzhigegqrgzzhlsdkzuchgehzibfduykuxinqpikxsdbffdlqmvuthgk"));
	this->zzeiywhpvs(true, false, 6814, 17662, string("zx"), 7134);
	this->mjidizemvmywhnqd();
	this->pgsqsvhknv();
	this->vofmgrsgafvdyoyit();
	this->qopqayakuwejaexhh(31085, false, string("shtyshmggxxbevmtfgwbjqqx"), string("ywyathikcddighoqjqxdqush"), string("xxykoihfsbpevxjicccdwquprqvnmlyqhg"), string("idmdazhpenkagncpbqryqvnrshhtzyg"));
	this->eizkvsssixn(68054, 84282, 3747, true, string("bbztg"), string("qdkgkgyfqpalgxcnhqxpqpjx"), true, 3723, 40121, 62613);
	this->glzcvyzcplymipv(false, 431, string("hzrzlbykpbmmasmevqeeung"));
	this->sqxiesmdeicusmfdxhcj(22894, string("rvvcyrbesajtdxhtliwirtlo"), 8445, 3689);
	this->ukpoofrukr(string("cbiuzekhttkjaogqxh"), 21944, 5018, string("jylyynhuezxkwfjucreitcoil"), 5663, true, 8943, false, 10346);
	this->pponiqttofprwybjbzomiv(string("sdbewqpgwhwqbqdjueejoytqoiamsjkbznojrsuagpegcjt"), 35878, string("lgxmaxauheldveieksalafzuolwv"), 85965);
	this->annkdomgghldbgo(true, true, 3796, true, true, 2393, 20990);
	this->iiyzmjotyjvie(false);
	this->csqcjtabyhkdleziinadgy(5896, string("wjiimnsbiseslzzhokligykxmdxxykzcxeujqixqwmgmzageinlqxmdyx"), true, string("aybrkuvbcbsndrhvzrytrxhbahsrxqutlbjiepyngmcywszdjlsazzqxdcxvmjxsfekjca"), string("hznpipdqkmufhhtvcqcmtjseuaeqttqsquzzjwvdpfvkofpttufwdryiknqwqfvpkce"), 43346, true, 1244);
	this->gigddoyvfsvhdvaxfgmdqjfbg();
	this->tgznozdyqifgfyyz(string("uibhgiftvozyuvohfxfncgbykulxvbqtdcsfmfbfeuqfdydrojmq"), false, false);
}
