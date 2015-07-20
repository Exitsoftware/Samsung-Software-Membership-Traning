/*

VC, GCC에서 사용

*/

#include <stdio.h>
#define SIZE 5000
#define MOVE 4

int arr[SIZE][SIZE] = {0};
int len;
int x = SIZE/2, y = SIZE/2;
char input[10000];
// char input[] = "31330047111257724563171611655775653520761414606527273006503676562756546241502736545711000415074251271413177424664473520115721240122760700553577470726374047400715257501225733152666454676774773421375470667550252743055220016012773674134030254724142646452434124474207243542140645200335055023510526116703363177673411040035173736035664563525534175276144703435525267343547062551734645610374637022245522754552103753365775453271733531333662647620712716374031762671604122556212561725265064505562025074113655663124320640232036175613242474247052414537170320734566117152216721216667314605403265226052242306013403060444310165063202300102121705273430227702021105663371401265034461245657130225141543047476514760236162506504227706603375377437047407460356722006411175547456652044760140615220514657522105674153112612372335116016224354131662770536144016730342201257547505401260105462212467500507764353225345603274366447443233003117167614606735742540661240242716313461121364004234546762216042004140125545702570660063334765020436477345671212053265427510354734022312731232506227622331354020673373506743506715362760661624074652374507751557206775271433530237474060552740001332735133134412341155436050110155362176543700375542474431016163764577066617066010602474363237067675760072335627675466637173130246572576062360725236050172240647654375560547455257662745105477646360652104266447700326410314765341201566755156512507017323457412767155276730116774605154010400120274464242631702671715631434127265116760265160436534351264743224205030610474720077363117613361263230226554625761341732342462160124333444141477507455070715215225755776256602604367015101426013121515617111342453660306313526645014057331562122707063112155653276630637520452732225201737222317551122127723470661765302044571021616772607437063345255517005377316735662016565021551431423137463703767470670267402640033745532701342014366041220041233470446077516255670310252271253433044734417627744567601467746302114326511200700545437710603763075655605565775000602526371604343271222632205335042507056310015713734247576314277375771323471043324325645430323765606740073267710772436420643545400556367662400012072440552225501535434272575251547350205267730054774007027015734345407327162537156444733656616760667222454544024163570677706525447670444274415466156151535703245554305217242223065172443372537515113443445571171720026637523317122402303276251113222137506644034626140107103511113640317437064020776145344233260075756235456247473501742255164162461132111766200543541770705671463245327216034211270226251473271430076177615236437263111321057354613141176141733313177661367444062571573425527251230640074450223203410575260442350130050552120650030063426467743036353553513000602756703356726770527641716033177364233520051724765401516760242477350622417065232324404435617146762061366620540305535123536224765635440120147425166136665153432431652575754525106455452310564077153015175622005551102045364022405415045254441363144246523534612615140253652347337442375373271412474770750346155513206347121435137474745645160340606552271071231213530056123223057371046257560636245502767403631334730111764546502761145672104573234441336513640024102555746250144073544134727645146244142271730723011243535265000556637254345044356624204223426050550100223446520431000001747346260636360470653172522045204511317542522372712552255302751717253226211537043616451631200067620630522247732330101126770017762553550045006765665317741334016561067617734102245120777705336735352625214400450601252031566531446223623537564005754312210562763427053423452462071603564714222704655404137670332603736423703533131470727531543451250543254473330343116551263655200330647565142743730765172610350226136663666006632362735741013571060022174507505344220711067164041236307202620613754030465660431363751702160720231752676450565247706537500170451332422474655300164276315562233653551676071457657150307507021222746050550366620260231302701053025404773272437437642217611705504614117225635205230366351263401075352763253574164737670304766213171534213312303502762472573763612656436456511753755216036426420217774274071210711042544443430056055741713545242562454727632614755510525371726351645576226537075712215222431134040501625720065074421243462222204556511325457300646553455007262606562570142437161065643056012356460615122444107316574523220112120565117065453747403506166216740053742113471105614407100210315700202356725225006204457177126225130401161606044231177632540210645167177266533332776402444267532621425453734125570375023520103552242331574561702306517667773703703113557053210435507055705633700061031115160362757052105236247212237105552515127307775614077271161077102261411327646770255025061410746313611566013012050722352104327765102613721152100641743351667672072120325067534263533715163255045046567200642346433502545200572551074052012661150767460122416435715470645306751036710312017312545145631760256065515440017520647251421474450132066706756476465027005401717504625251103325755766436771221775446170467362431262007675330056403357621735115634665331330023466460130754304146645532721062025041433577041272121146223225671602715436221045134464114672627176667123062027503463357604405617036243104451123366601335540661415400575351657165015106764763351662574534442443701417072155372770354773531637704330521647051142763457742037042106456322664073140077014624461436015260447735641527706452652370366567437303355436513460475560162210750230705043172736157572027001130437036015311701746376560";

int count = 10;
int tmp = 0;

int min_x = 9999;
int min_y = 9999;
int max_y = -9999;
int max_x = -9999;

void func(int n){

	if(min_x > x){
		min_x = x;
	}

	if(min_y > y){
		min_y = y;
	}

	if(max_x < x){
		max_x = x;
	}

	if(max_y < y){
		max_y = y;
	}

	if(n == 0){
		for(int i = 0; i < MOVE; i++){
			arr[x-1][y] = -1;
			x--;
		}
	}
	else if(n == 1){
		for(int i = 0; i < MOVE; i++){
			arr[x-1][y+1] = -1;
			x--;
			y++;
		}

	}
	else if(n == 2){
		for(int i = 0; i < MOVE; i++){
			arr[x][y+1] = -1;
			y++;
		}
	}
	else if(n == 3){
		for(int i = 0; i < MOVE; i++){
			arr[x+1][y+1] = -1;
			x++;
			y++;
		}
	}
	else if(n == 4){
		for(int i = 0; i < MOVE; i++){
			arr[x+1][y] = -1;
			x++;
		}
	}
	else if(n == 5){
		for(int i = 0; i < MOVE; i++){
			arr[x+1][y-1] = -1;
			x++;
			y--;
		}
	}
	else if(n == 6){
		for(int i = 0; i < MOVE; i++){
			arr[x][y-1] = -1;
			y--;
		}
	}
	else if(n == 7){
		for(int i = 0; i < MOVE; i++){
			arr[x-1][y-1] = -1;
			x--;
			y--;
		}
	}
}

void bfs(int a, int b){
	// int flag = 0;

	tmp++;

	if( (min_x < a && a < max_x ) && ( min_y < b && b < max_y)){

		if(arr[a+1][b] == 0){
			arr[a+1][b] = 9;
		// arr[a+1][b] = count;

			bfs(a+1, b);

		}
		if(arr[a-1][b] == 0){
			arr[a-1][b] = 9;
		// // arr[a+1][b] = tmp;

			bfs(a-1, b);

		}
		if(arr[a][b+1] == 0){
			arr[a][b+1] = 9;
		// arr[a+1][b] = count;

		// arr[a+1][b] = tmp;

			bfs(a, b+1);

		}
		if(arr[a][b-1] == 0){
			arr[a][b-1] = 9;
		// arr[a+1][b] = count;

		// arr[a+1][b] = tmp;

			bfs(a, b-1);
		}
	}

}

int main()
{

	int itr;
	int nCount;		/* 문제의 테스트 케이스 */

	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for(itr=0; itr<nCount; itr++)
	{

		printf("#testcase%d\n",itr+1);
		scanf("%d",&len);
		fgets(input, sizeof(input), stdin);
		// scanf("%s",input);

		// len = 5423;
		// input[] = "31330047111257724563171611655775653520761414606527273006503676562756546241502736545711000415074251271413177424664473520115721240122760700553577470726374047400715257501225733152666454676774773421375470667550252743055220016012773674134030254724142646452434124474207243542140645200335055023510526116703363177673411040035173736035664563525534175276144703435525267343547062551734645610374637022245522754552103753365775453271733531333662647620712716374031762671604122556212561725265064505562025074113655663124320640232036175613242474247052414537170320734566117152216721216667314605403265226052242306013403060444310165063202300102121705273430227702021105663371401265034461245657130225141543047476514760236162506504227706603375377437047407460356722006411175547456652044760140615220514657522105674153112612372335116016224354131662770536144016730342201257547505401260105462212467500507764353225345603274366447443233003117167614606735742540661240242716313461121364004234546762216042004140125545702570660063334765020436477345671212053265427510354734022312731232506227622331354020673373506743506715362760661624074652374507751557206775271433530237474060552740001332735133134412341155436050110155362176543700375542474431016163764577066617066010602474363237067675760072335627675466637173130246572576062360725236050172240647654375560547455257662745105477646360652104266447700326410314765341201566755156512507017323457412767155276730116774605154010400120274464242631702671715631434127265116760265160436534351264743224205030610474720077363117613361263230226554625761341732342462160124333444141477507455070715215225755776256602604367015101426013121515617111342453660306313526645014057331562122707063112155653276630637520452732225201737222317551122127723470661765302044571021616772607437063345255517005377316735662016565021551431423137463703767470670267402640033745532701342014366041220041233470446077516255670310252271253433044734417627744567601467746302114326511200700545437710603763075655605565775000602526371604343271222632205335042507056310015713734247576314277375771323471043324325645430323765606740073267710772436420643545400556367662400012072440552225501535434272575251547350205267730054774007027015734345407327162537156444733656616760667222454544024163570677706525447670444274415466156151535703245554305217242223065172443372537515113443445571171720026637523317122402303276251113222137506644034626140107103511113640317437064020776145344233260075756235456247473501742255164162461132111766200543541770705671463245327216034211270226251473271430076177615236437263111321057354613141176141733313177661367444062571573425527251230640074450223203410575260442350130050552120650030063426467743036353553513000602756703356726770527641716033177364233520051724765401516760242477350622417065232324404435617146762061366620540305535123536224765635440120147425166136665153432431652575754525106455452310564077153015175622005551102045364022405415045254441363144246523534612615140253652347337442375373271412474770750346155513206347121435137474745645160340606552271071231213530056123223057371046257560636245502767403631334730111764546502761145672104573234441336513640024102555746250144073544134727645146244142271730723011243535265000556637254345044356624204223426050550100223446520431000001747346260636360470653172522045204511317542522372712552255302751717253226211537043616451631200067620630522247732330101126770017762553550045006765665317741334016561067617734102245120777705336735352625214400450601252031566531446223623537564005754312210562763427053423452462071603564714222704655404137670332603736423703533131470727531543451250543254473330343116551263655200330647565142743730765172610350226136663666006632362735741013571060022174507505344220711067164041236307202620613754030465660431363751702160720231752676450565247706537500170451332422474655300164276315562233653551676071457657150307507021222746050550366620260231302701053025404773272437437642217611705504614117225635205230366351263401075352763253574164737670304766213171534213312303502762472573763612656436456511753755216036426420217774274071210711042544443430056055741713545242562454727632614755510525371726351645576226537075712215222431134040501625720065074421243462222204556511325457300646553455007262606562570142437161065643056012356460615122444107316574523220112120565117065453747403506166216740053742113471105614407100210315700202356725225006204457177126225130401161606044231177632540210645167177266533332776402444267532621425453734125570375023520103552242331574561702306517667773703703113557053210435507055705633700061031115160362757052105236247212237105552515127307775614077271161077102261411327646770255025061410746313611566013012050722352104327765102613721152100641743351667672072120325067534263533715163255045046567200642346433502545200572551074052012661150767460122416435715470645306751036710312017312545145631760256065515440017520647251421474450132066706756476465027005401717504625251103325755766436771221775446170467362431262007675330056403357621735115634665331330023466460130754304146645532721062025041433577041272121146223225671602715436221045134464114672627176667123062027503463357604405617036243104451123366601335540661415400575351657165015106764763351662574534442443701417072155372770354773531637704330521647051142763457742037042106456322664073140077014624461436015260447735641527706452652370366567437303355436513460475560162210750230705043172736157572027001130437036015311701746376560"
		// input[] = "hi";

		for(int i = 0; i < SIZE; i++){
			for(int j = 0; j < SIZE; j++){
				if(i == 0){
					arr[i][j] = -9;
				}
				else if(i == SIZE-1){
					arr[i][j] = -9;
				}
				else if(j == 0){
					arr[i][j] = -9;
				}
				else if(j == SIZE-1){
					arr[i][j] = -9;
				}
			}
		}




		for(int i = 0; i < len; i++){
			func(input[i] - 48);
		}

		// for(int i = 1; i < SIZE - 1; i++){
		// 	for(int j = 1; j < SIZE - 1; j++){
		// 		printf("%3d", arr[i][j]);
		// 	}
		// 	printf("\n");
		// }

		count = 0;

		// for(int i = 1; i < SIZE - 1; i++){
		// 	for(int j = 1; j < SIZE - 1; j++){
		// 		if(arr[i][j] == 0){
		// 			count++;
		// 			// tmp = 1;
		// 			arr[i][j] = 9;
		// 			bfs(i,j);
		// 		}
		// 	}
		// }


		// for(int i = min_x; i < max_x+1; i++){
		// 	for(int j = min_y; j < max_y+1; j++){
		// 		printf("%3d", arr[i][j]);
		// 	}
		// 	printf("\n");
		// }

		// printf("%d %d %d %d\n", min_x, min_y, max_x ,max_y);

		min_x -= 2;
		min_y -= 2;
		max_x += 2;
		max_y += 2;

		for(int i = min_x + 2; i < max_x - 2; i++){
			for(int j = min_y + 2; j < max_y -2; j++){
				if(arr[i][j] == 0 && (min_x < i && i < max_x ) && ( min_y < j && j < max_y) ){
					count++;
					// tmp = 1;
					arr[i][j] = 9;
					// printf("%d %d\n", i, j);
					bfs(i,j);
				}
			}
		}

		// for(int i = min_x; i < max_x+1; i++){
		// 	for(int j = min_y; j < max_y+1; j++){
		// 		printf("%3d", arr[i][j]);
		// 	}
		// 	printf("\n");
		// }
		// printf("tmp = %d\n", tmp);
		// printf("\n\n\n");

		// for(int i = 1; i < SIZE - 1; i++){
		// 	for(int j = 1; j < SIZE - 1; j++){
		// 		printf("%3d", arr[i][j]);
		// 	}
		// 	printf("\n");
		// }

		printf("%d\n", count-1);

		/*

		알고리즘이 들어가는 부분

		*/

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}