/* Result System of SE(A) */
 
#include <iostream> //used to include necessary definations and declarations
#include <cstdlib> //directive which is used to include header file, and for performing various functions
#include <fstream> //provide functionality for working with file input and output operation
using namespace std;

int main()
{
	string s_name, f_name, c_name, uni_name, roll_no, dd, mm, yy, result, grade;
	float pF, sTAT, eNG, pSYCHO, pS, avg, sum_CH = 0;
	float cHour[5], sGP[5];
    float sum = 0;

	cout << "\n\n\t\t\t\t-------------------------------------" << endl;
	cout << "\t\t\t\t |    STUDENT MANAGEMENT SYSTEM    | " << endl;
	cout << "\t\t\t\t-------------------------------------" << endl;

	cout << "\n";

	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t       | Add Student Details |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

	cout << "\t\t\t--> Enter Your Name : ";
	cin >> s_name;       
	cout << "\t\t\t--> Enter Your Father Name : ";
	cin >> f_name;
	cout << "\t\t\t--> Enter Your Class : ";
	cin >> c_name;
	cout << "\t\t\t--> Enter University : ";
	cin >> uni_name;
	cout << "\t\t\t--> Enter Roll No : ";
	cin >> roll_no;
	cout << "\t\t\t--> Enter Date of Birth : ";
	cin >> dd >> mm >> yy;
	
	cout << "\t\t\t-----------------------------------------------" << endl;
	cout << "\t\t\t\t Enter Your Marks Subject Wise " << endl;
	cout << "\t\t\t-----------------------------------------------" << endl;
	
	cout << "\t\t\t--> PF  : ";
	cin >> pF;
	cout << "\t\t\t--> STAT  : ";
	cin >> sTAT;
	cout << "\t\t\t--> ENG  : ";
	cin >> eNG;
	cout << "\t\t\t--> PSYCHO  : ";
	cin >> pSYCHO;
	cout << "\t\t\t--> PS  : ";
	cin >> pS;

	cout << "\t\t\t-----------------------------------------------" << endl;
	cout << "\t\t\t\t Enter Credit Hours for Subjects " << endl;
	cout << "\t\t\t-----------------------------------------------" << endl;
	
	cout << "\t\t\t--> PF  : ";
	cin >> cHour[0];
	cout << "\t\t\t--> STAT  : ";
	cin >> cHour[1];
	cout << "\t\t\t--> ENG  : ";
	cin >> cHour[2];
	cout << "\t\t\t--> PSYCHO  : ";
	cin >> cHour[3];
	cout << "\t\t\t--> PS  : ";
	cin >> cHour[4];

	// Sum of Credit Hours
	for (int i = 0; i < 5; i++)
	{
		sum_CH += cHour[i];      
	}

	// Calculate total marks, percentage and grade
	sum = pF + sTAT + eNG + pSYCHO + pS;
	avg = sum / 5;
	if (avg >= 80)
	{
		grade = "A";
		result = "PASS";
	}
	else if (avg >= 60)
	{
		grade = "B";
		result = "PASS";
	}
	else if (avg >= 35)
	{
		grade = "C";
		result = "PASS";
	}
	else
	{
		grade = "-";
		result = "FAIL";
	}

	// Grade Points of PF
	if (pF >= 85 && pF <= 100)
	{
		sGP[0] = 4.0;
	}
	if (pF >= 80 && pF <= 84.9)
	{
		sGP[0] = 3.66;
	}
	if (pF >= 75 && pF <= 79.9)
	{
		sGP[0] = 3.33;
	}
	if (pF >= 71 && pF <= 74.9)
	{
		sGP[0] = 3.00;
	}
	if (pF >= 68 && pF <= 70.9)
	{
		sGP[0] = 2.66;
	}
	if (pF >= 64 && pF <= 67.9)
	{
		sGP[0] = 2.33;
	}
	if (pF >= 61 && pF <= 63.9)
	{
		sGP[0] = 2.00;
	}
	if (pF >= 58 && pF <= 60.9)
	{
		sGP[0] = 1.66;
	}
	if (pF >= 54 && pF <= 57.9)
	{
		sGP[0] = 1.33;
	}
	if (pF >= 50 && pF <= 53.9)
	{
		sGP[0] = 1.00;
	}
	if (pF < 50)
	{
		sGP[0] = 0.00;
	}

	// Grade Points of STAT
	if (sTAT >= 85 && sTAT <= 100)
	{
		sGP[1] = 4.0;
	}
	if (sTAT >= 80 && sTAT <= 84.9)
	{
		sGP[1] = 3.66;
	}
	if (sTAT >= 75 && sTAT <= 79.9)
	{
		sGP[1] = 3.33;
	}
	if (sTAT >= 71 && sTAT <= 74.9)
	{
		sGP[1] = 3.00;
	}
	if (sTAT >= 68 && sTAT <= 70.9)
	{
		sGP[1] = 2.66;
	}
	if (sTAT >= 64 && sTAT <= 67.9)
	{
		sGP[1] = 2.33;
	}
	if (sTAT >= 61 && sTAT <= 63.9)
	{
		sGP[1] = 2.00;
	}
	if (sTAT >= 58 && sTAT <= 60.9)
	{
		sGP[1] = 1.66;
	}
	if (sTAT >= 54 && sTAT <= 57.9)
	{
		sGP[1] = 1.33;
	}
	if (sTAT >= 50 && sTAT <= 53.9)
	{
		sGP[1] = 1.00;
	}
	if (sTAT < 50)
	{
		sGP[1] = 0.00;
	}

	// Grade Points of PSYCHO
	if (pSYCHO >= 85 && pSYCHO <= 100)
	{
		sGP[2] = 4.0;
	}
	if (pSYCHO >= 80 && pSYCHO <= 84.9)
	{
		sGP[2] = 3.66;
	}
	if (pSYCHO >= 75 && pSYCHO <= 79.9)
	{
		sGP[2] = 3.33;
	}
	if (pSYCHO >= 71 && pSYCHO <= 74.9)
	{
		sGP[2] = 3.00;
	}
	if (pSYCHO >= 68 && pSYCHO <= 70.9)
	{
		sGP[2] = 2.66;
	}
	if (pSYCHO >= 64 && pSYCHO <= 67.9)
	{
		sGP[2] = 2.33;
	}
	if (pSYCHO >= 61 && pSYCHO <= 63.9)
	{
		sGP[2] = 2.00;
	}
	if (pSYCHO >= 58 && pSYCHO <= 60.9)
	{
		sGP[2] = 1.66;
	}
	if (pSYCHO >= 54 && pSYCHO <= 57.9)
	{
		sGP[2] = 1.33;
	}
	if (pSYCHO >= 50 && pSYCHO <= 53.9)
	{
		sGP[2] = 1.00;
	}
	if (pSYCHO < 50)
	{
		sGP[2] = 0.00;
	}

	// Grade Points of ENG
	if (eNG >= 85 && eNG <= 100)
	{
		sGP[3] = 4.0;
	}
	if (eNG >= 80 && eNG <= 84.9)
	{
		sGP[3] = 3.66;
	}
	if (eNG >= 75 && eNG <= 79.9)
	{
		sGP[3] = 3.33;
	}
	if (eNG >= 71 && eNG <= 74.9)
	{
		sGP[3] = 3.00;
	}
	if (eNG >= 68 && eNG <= 70.9)
	{
		sGP[3] = 2.66;
	}
	if (eNG >= 64 && eNG <= 67.9)
	{
		sGP[3] = 2.33;
	}
	if (eNG >= 61 && eNG <= 63.9)
	{
		sGP[3] = 2.00;
	}
	if (eNG >= 58 && eNG <= 60.9)
	{
		sGP[3] = 1.66;
	}
	if (eNG >= 54 && eNG <= 57.9)
	{
		sGP[3] = 1.33;
	}
	if (eNG >= 50 && eNG <= 53.9)
	{
		sGP[3] = 1.00;
	}
	if (eNG < 50)
	{
		sGP[3] = 0.00;
	}

	// Grade Points of PS
	if (pS >= 85 && pS <= 100)
	{
		sGP[4] = 4.0;
	}
	if (pS >= 80 && pS <= 84.9)
	{
		sGP[4] = 3.66;
	}
	if (pS >= 75 && pS <= 79.9)
	{
		sGP[4] = 3.33;
	}
	if (pS >= 71 && pS <= 74.9)
	{
		sGP[4] = 3.00;
	}
	if (pS >= 68 && pS <= 70.9)
	{
		sGP[4] = 2.66;
	}
	if (pS >= 64 && pS <= 67.9)
	{
		sGP[4] = 2.33;
	}
	if (pS >= 61 && pS <= 63.9)
	{
		sGP[4] = 2.00;
	}
	if (pS >= 58 && pS <= 60.9)
	{
		sGP[4] = 1.66;
	}
	if (pS >= 54 && pS <= 57.9)
	{
		sGP[4] = 1.33;
	}
	if (pS >= 50 && pS <= 53.9)
	{
		sGP[4] = 1.00;
	}
	if (pS < 50)
	{
		sGP[4] = 0.00;
	}

	// calculating GPA
	float totalPoints = 0;
	for (int i = 0; i < 5; i++)
	{
		totalPoints += cHour[i] * sGP[i];  
	}

	float GPA = 0;
	GPA = totalPoints / sum_CH;
	GPA = static_cast<int>(GPA * 100 + 0.5) / 100.0;      //static_cast<int> --> for round off

	ofstream file;
	
    //Creating a file to store the record of students
	file.open("studentresult.txt", ios::out | ios::app);     // for write   //ios::app --> to store old data and also new data but when new data is store then old not be deleted by using append(app) mode
	file << s_name << " " << f_name<< " " << uni_name<< " " << c_name<< " " << roll_no<< " " << dd<< " " << mm<< " " << yy<< " " << pF<< " " << sTAT<< " " << pSYCHO<< " " << eNG<< " " << pS<< " " << sum<< " " << avg<< " " << grade<< " " << result<< " " <<GPA<< " ";
	file.close();
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t       | SGPA for Individual Subject |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\n\t\t\t PF : " << sGP[0] << endl;
	cout << "\n\t\t\t STAT  : " << sGP[1] << endl;
	cout << "\n\t\t\t PSYCHO  : " << sGP[2] << endl;
	cout << "\n\t\t\t ENG  : " << sGP[3] << endl;
	cout << "\n\t\t\t PS  : " << sGP[4] << endl;

	cout << "\n";

	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t       | Student Result Table |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

	ifstream file1;
	
	file1.open("studentresult.txt", ios::in);    // for read
	if (!file1)
	{
		cout << "\n\t\t\t Error in opening file....!!!";
		file1.close();
	}
	
	else
	{
		while (!file1.eof())
		{
			file1 >> s_name >> f_name >> uni_name >> c_name >> roll_no >> dd >> mm >> yy >> pF >> sTAT >> pSYCHO >> eNG >> pS >> sum >> avg >> grade >> result >> GPA;
			cout << "\n\n\t CLASS  : " << c_name << endl;
			cout << "\t UNIVERSITY  : " << uni_name << endl;
			cout << "\n\n\t STUDENT'S NAME : " << s_name;
			cout << "\t\t\t\t\t\tROLL NO : " << roll_no << endl;
			cout << "\t\t\t\t\t   DATE OF BIRTH : " << dd << " / " << mm << " / " << yy << endl;
			cout << "\t FATHER'S NAME : " << f_name << endl;

			cout << "\n\t+----------------------------------------------------------------------------------------+"; 
			cout << "\n\t|   Subject Name      |\t  Marks Obtained  |\tOut-Of   |  Percentage   |\tGrade    |";
			cout << "\n\t+----------------------------------------------------------------------------------------+";
			cout << "\n\t|\t PF          |\t      " << pF << "           |\t" << 100 << "\t |"<< "\t\t |"<< "\t\t |" << endl;
			cout << "\t| \t STAT        |\t      " << sTAT << "           |\t" << 100 << "\t |"<< "\t\t |"<< "\t\t |" << endl;
			cout << "\t| \t PSYCHO      |\t      " << pSYCHO << "           |\t" << 100 << "\t |"<< "\t" << avg << "%\t |\t" << grade << "\t |" << endl;
			cout << "\t| \t ENG         |\t      " << eNG << "           |\t" << 100 << "\t |"<< "\t\t |"<< "\t\t |" << endl;
			cout << "\t| \t PS          |\t      " << pS << "           |\t" << 100 << "\t |"<< "\t\t |"<< "\t\t |" << endl;
			cout << "\t+----------------------------------------------------------------------------------------+";
			cout << "\n\t\t\t\t Total - " << sum << "/500"<< "\t\t\t RESULT - " << result << endl;
			cout << "\n\t  GPA: " << GPA << endl;

			cout << "\n\n\t Dated : ";
			cout << "\t\t\t\t\t\t   Principle Signatures : " << endl;
			cout << "\n\n\t-----------------------------------------------------------------------------------------------------";
	        break;
		}
	}
	return 0;
}
