#include<stdio.h>
int main(){
	int input,result;
	int c,c1,c2;
	
	menu:
		printf("\t\t\t\t\t< WELCOME TO WEALTHGROW >\n");
		printf("\n\t\t\t**Create Wealth for your and your family's future goals**\n");
		printf("\t\t.....................................................................");
		printf("\nDisclaimer:- Each type of investment comes with its own set of risks, potential rewards, and suitability based \n\t on an individual's financial goals, risk tolerance, and investment horizon.");
		printf("\n\nChoose From Below:");
		printf("\n\t1.Stocks");
		printf("\n\t2.Cryptocurrencies");
		printf("\n\t3.Mutual Funds");
		printf("\n\t4.Commodities");
		printf("\n\t5.Real Estate");
		printf("\n\t6.Options");
		printf("\n\t7.Forex");
		printf("\n\nEnter Choice:");
		scanf("%d",&c1);
		
	switch(c1)
	{
	
	case 1:
		Stocks:
		printf("\n\nStocks: Ownership in a company, representing a share of its assets and earnings.");
		printf("\n\nThere are various categories of Stocks:");
		printf("\n\n\t1.Common Stocks");
		printf("\n\t2.Dividend Stocks");
		printf("\n\t3.Sector Stocks");
		printf("\n\nSelect Category You want to view : ");
		scanf("%d",&c2);
		switch(c2)
		{
			case 1:
			printf("\nCommon Stocks");
			printf("\n\n|Sr.no\t\tName\t\t\t\tCurrent Price\t\tHigh\t\tLow\t\t");
			printf("\n\n|1.\t\tReliance Industries Ltd.\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|2.\t\tTata Consultancy Services Ltd.\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|3.\t\tHDFC Bank Ltd.\t\t\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|4.\t\tInfosys Ltd.\t\t\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|5.\t\tICICI Bank Ltd.\t\t\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|6.\t\tState Bank of India\t\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|7.\t\tHindustan Unilever Ltd.\t\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|8.\t\tITC Ltd.\t\t\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|9.\t\tBajaj Finance Ltd.\t\t\t2,522.0\t\t2856\t\t2180\t\t");
			printf("\n\n|10.\t\tAxis Bank Ltd.\t\t\t\t2,522.0\t\t2856\t\t2180\t\t");
			break;
			
			case 2:
			printf("\nDividend Stocks: Stocks of companies that distribute a portion of their earnings to shareholders in the form of dividends.");
			printf("\n\n|Sr.no\t\tName\t\t\t\t\tLast date\t\tDividend Yeild\t\tAnnual Dividend payment\t\t");
			printf("\n\n|1.\t\tBharat Petroleum Corporation Ltd.\t22/05/2023\t\t\t2.77%\t\t\tRs 10");
			printf("\n\n|2.\t\tNTPC Ltd.\t\t\t\t19/05/2023\t\t\t4.70%\t\t\tRs 10.25");
			printf("\n\n|3.\t\tOil and Natural Gas Corporation Ltd.\t14/02/2023\t\t\t8.09%\t\t\tRs 14");
			printf("\n\n|4.\t\tCoal India Ltd.\t\t\t\t07/05/2023\t\t\t11.83%\t\t\tRs 27.25");
			printf("\n\n|5.\t\tHindustan Unilever Ltd.\t\t\t27/04/2023\t\t\t2.26%\t\t\tRs 58");
			break;
			case 3:
			printf("Sector Stocks: They are categories into several sectors");
			printf("\n\n1.Information Technology (IT): ");
			printf("\n\ta.Infosys");
			printf("\n\tb.Tata Consultancy Services");
			printf("\n\tc.Wipro");
			printf("\n\n2.Finance and Banking: ");
			printf("\n\ta.HDFC Bank");
			printf("\n\tb.ICICI Bank");
			printf("\n\tc.State Bank of India");
			printf("\n\n3.Automobile:");
			printf("\n\ta.Maruti Suzuki");
			printf("\n\tb.Tata Motors");
			printf("\n\tc.Mahindra & Mahindra");
			printf("\n\n4.Healthcare and Pharmaceuticals:");
			printf("\n\ta.Sun Pharmaceutical Industries");
			printf("\n\tb.Dr. Reddy's Laboratories");
			printf("\n\tc.Cipla");
			printf("\n\n5.Energy and Oil");
			printf("\n\ta.Reliance Industries");
			printf("\n\tb.Indian Oil Corporation");
			printf("\n\tc.Oil and Natural Gas Corporation");
			printf("\n6.Consumer Goods");
			printf("\n\ta.Hindustan Unilever");
			printf("\n\tb.ITC Limited");
			printf("\n\tc.Nestlé India");
			printf("\n\n7.Telecommunications");
			printf("\n\ta.Bharti Airtel");
			printf("\n\tb.Reliance Communications");
			printf("\n\tc.Vodafone Idea");
			printf("\n\n8.Cement and Construction");
			printf("\n\ta.UltraTech Cement");
			printf("\n\tb.ACC Limited");
			printf("\n\tc.Ambuja Cements");
			printf("\n9.Metal and Mining");
			printf("\n\ta.Tata Steel");
			printf("\n\tb.Hindalco Industries");
			printf("\n\tc.Vedanta Resources");
			break;
			default:
			printf("\n\nWrong choice!!!");
		}
		printf("\n\n*Disclaimer: These rates were accurate at the time of creating this application and do not represent current market rates.");
		printf("\n\n\nDo you want to go back for Stocks?, Press 1: ");
			scanf("%d",&c);
			if(c==1)
			{
				goto Stocks;
			}
		break;
	case 2:
		Cryptocurrencies:
		printf("\nCryptocurrencies: Digital or virtual currencies that use cryptography for security and can be used for various purposes, including investment.");
		printf("\n1.Large Cap");
		printf("\n2.Most traded");
		printf("\n3.Trending now");
		printf("\nSelect You want to view : ");
		scanf("%d",&c2);
		switch(c2)
		{
		case 1:
			printf("\nLarge Cap: Top Tokens by market capitalisation ");
			printf("\n\n|Sr.no\t\tName\t\t\t\tCurrent Price");
			printf("\n\n|1.\t\tBitcoin\t\t\t\t25,78,100.00");
			printf("\n\n|2.\t\tEthereum\t\t\t1,61,305");
			printf("\n\n|3.\t\tBinance Coin\t\t\t21,000.01");
			printf("\n\n|4.\t\tSolana\t\t\t\t2,123.45");
			printf("\n\n|5.\t\tTether\t\t\t\t87.67");
			break;
		case 2:
			printf("\nMost Trending: Top tokens by value in past 24 hrs");
			printf("\n\n|Sr.no\t\tName\t\t\t\tCurrent Price");
			printf("\n\n|1.\t\tGolem\t\t\t\t22.08");
			printf("\n\n|2.\t\tMerit Circle\t\t\t22.93");
			printf("\n\n|3.\t\tSHIBA INU\t\t\t0.000825");
			printf("\n\n|4.\t\tRipple\t\t\t\t56.30");
			printf("\n\n|5.\t\tDODO\t\t\t\t10.10");
			break;
		case 3:
			printf("\nTrending Now: Most price fluncation in the past 2 hrs");
			printf("\n\n|Sr.no\t\tName\t\t\t\tCurrent Price");
			printf("\n\n|1.\t\tGolem\t\t\t\t22.08");
			printf("\n\n|2.\t\tAkropolis\t\t\t0..70");
			printf("\n\n|3.\t\tBancor\t\t\t\t52.51");
			printf("\n\n|4.\t\tKadena\t\t\t\t47.59");
			printf("\n\n|5.\t\tNEM\t\t\t\t2.42");
			break;
		default:
			printf("\n\nWrong choice!!!");
		}
		printf("\n\n*Disclaimer: These rates were accurate at the time of creating this application and do not represent current market rates.");
		printf("\nDo you want to go back to Cryptocurrencies? press 1: ");
		scanf("%d",&c);
		if(c==1)
		{
		goto Cryptocurrencies;
		}
		break;
	case 3:
		
		Mutual_Funds:
			printf("\nMutual Funds: Pools of funds from multiple investors used to invest in a diversified portfolio of stocks, bonds, or other assets.");
			printf("\n\nThere are various categories of Mutual Funds");
			printf("\n\t1.Equity Funds");
			printf("\n\t2.Index Funds");
			printf("\n\t3.Tax-Saving Funds");
			printf("\n\t4.Gold Funds");
			printf("\n\t5.Debt Funds");
			printf("\n\nSelect Category You want to view : ");
			scanf("%d",&c2);
			switch(c2)
			{
			case 1:
				printf("\nEquity Funds: These funds primarily invest in stocks, aiming for capital appreciation over the long term. Subcategories include large-cap, mid-cap, small-cap, and multi-cap funds.");
				printf("\n\n1.SBI Bluechip Fund: This fund focuses on large-cap stocks and aims to provide long-term capital appreciation. \n\nSBI Bluechip Fund \n\n NAV:70.30\t\tExpense Ratio:1.56%\t\tFund Size:Rs 39,301.06 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n2.Mirae Asset Large Cap Fund: Another large-cap fund that aims to generate long-term capital growth by investing in quality large-cap companies. \n\nMirae Asset Large Cap Fund \n\n NAV:86.567\t\tExpense Ratio:1.54%\t\tFund Size:Rs 35,880.14 Cr \t\t Risk-O-Meter: High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n3.Axis Bluechip Fund: This fund seeks to invest in blue-chip stocks to provide long-term capital appreciation. \n\nAxis Bluechip Fund \n\n NAV:45.68\t\tExpense Ratio:1.56%\t\tFund Size:Rs 39,891.89 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n4.ICICI Prudential Bluechip Fund: An established large-cap fund that aims to invest in companies with a strong market presence and growth potential. \n\nICICI Prudential Bluechip Fund \n\n NAV:77.38\t\tExpense Ratio:1.6%\t\tFund Size:Rs 40,285.71 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n5.Kotak Standard Multicap Fund: This fund follows a multi-cap approach, investing across different market capitalizations to achieve long-term capital appreciation. \n\nKotak Standard Multicap Fund \n\n NAV:12.403\t\tExpense Ratio:1.81%\t\tFund Size:Rs 5,584.79 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				break;
			case 2:
				printf("\nIndex Funds: These funds aim to replicate the performance of a specific market index, such as the Nifty 50 or the Sensex.");
				printf("\n\n1.ICICI Prudential Nifty Index Fund: This fund seeks to replicate the performance of the Nifty 50 index, which represents the top 50 companies listed on the National Stock Exchange. \n\nICICI Prudential Nifty Index Fund \n\n NAV:192.6004\t\tExpense Ratio:0.43%\t\tFund Size:Rs 4930.02 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n2.HDFC Index Fund - Nifty 50 Plan: This fund also aims to mirror the Nifty 50 index's performance. \n\nHDFC Index Fund - Nifty 50 Plan \n\n NAV:181.5387\t\tExpense Ratio:0.4%\t\tFund Size:Rs 9395.08 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n3.SBI Nifty Index Fund: This fund is designed to track the Nifty 50 index, offering exposure to the 50 largest companies on the NSE. \n\nSBI Nifty Index Fund \n\n NAV:168.5011\t\tExpense Ratio:0.5%\t\tFund Size:Rs 4,796.04 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n4.UTI Nifty Index Fund: This fund's objective is to replicate the performance of the Nifty 50 index. \n\nUTI Nifty Index Fund \n\n NAV:131.4006\t\tExpense Ratio:0.3%\t\tFund Size:Rs 12,048.23 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n5.Aditya Birla Sun Life Index Fund: This fund seeks to replicate the performance of the BSE Sensex index, which consists of the 30 largest and most actively traded stocks on the Bombay Stock Exchange. \n\nAditya Birla Sun Life Index Fund \n\n NAV:194.0799\t\tExpense Ratio:0.6%\t\tFund Size:Rs 642.48 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				break;
			case 3:
				printf("\nDebt Funds: These funds invest in fixed-income securities like bonds, aiming for regular income and capital preservation. Subcategories include government bonds, corporate bonds, and short-term funds.");
				printf("\n\n1.ICICI Prudential Regular Savings Fund: This fund invests in a mix of debt and money market instruments to generate regular income. \n\nICICI Prudential Regular Savings Fund \n\n NAV:61.6634\t\tExpense Ratio:1.72%\t\tFund Size:Rs 3307.76 Cr \t\t Risk-O-Meter: Moderately High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n2.HDFC Short Term Debt Fund: A short-term debt fund that aims to provide stable returns by investing in a diversified portfolio of debt securities. \n\nHDFC Short Term Debt Fund \n\n NAV:27.5693\t\tExpense Ratio:0.74%\t\tFund Size:Rs 12,411.51 Cr \t\t Risk-O-Meter: Moderate \n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n3.Aditya Birla Sun Life Short Term Opportunities Fund: This fund focuses on generating regular income by investing in a diversified portfolio of short-term debt and money market instruments. \n\n Aditya Birla Sun Life Short Term Opportunities Fund:  \n\n NAV:41.1576\t\tExpense Ratio:1.1%\t\tFund Size:Rs 6040.04 Cr \t\t Risk-O-Meter: Modrate\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n4.Franklin India Short Term Income Plan: A short-term debt fund that seeks to generate income through investments in debt and money market instruments. \n\nFranklin India Short Term Income Plan \n\n NAV:5129.97\t\tExpense Ratio:0.04%\t\tFund Size:Rs 408.95 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n5.Axis Treasury Advantage Fund: This fund aims to provide liquidity and safety along with returns by investing in a mix of debt and money market securities.\n\nAxis Treasury Advantage Fund \n\n NAV:2806.23\t\tExpense Ratio:0.29%\t\tFund Size:Rs 5864.62 Cr \t\t Risk-O-Meter: Low to Modrate\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				break;
			case 4:
				printf("\nGold Funds: These funds invest in gold, either directly or through gold-related instruments, providing exposure to the price movements of the precious metal.");
				printf("\n\n1.SBI Gold Fund: This fund aims to provide returns that closely correspond to the returns provided by SBI Gold Exchange Traded Scheme. \n\nSBI Gold Fund \n\n NAV:17.7708\t\tExpense Ratio:0.42%%\t\tFund Size:Rs 1385.46 Cr \t\t Risk-O-Meter: High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n2.Nippon India Gold Savings Fund: Formerly known as Reliance Gold Savings Fund, this fund aims to provide returns that closely correspond to the returns of Reliance Gold Exchange Traded Fund. \n\nNippon India Gold Savings Fund \n\n NAV:23.3025\t\tExpense Ratio:0.35%%\t\tFund Size:Rs 1528.71 Cr \t\t Risk-O-Meter: High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n3.ICICI Prudential Regular Gold Savings Fund: This fund invests in ICICI Prudential Gold Exchange Traded Fund to provide returns linked to the performance of gold. \n\nICICI Prudential Regular Gold Savings Fund \n\n NAV:18.8225\t\tExpense Ratio:0.44%%\t\tFund Size:Rs 703.23 Cr \t\t Risk-O-Meter: High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n4.Aditya Birla Sun Life Gold Fund: This fund aims to provide returns that closely correspond to the returns provided by Aditya Birla Sun Life Gold ETF. \n\nAditya Birla Sun Life Gold Fund \n\n NAV:17.7171\t\tExpense Ratio:0.51%%\t\tFund Size:Rs 276.36 Cr \t\t Risk-O-Meter: High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n5.Kotak Gold Fund: This fund aims to generate returns that are in line with the performance of Kotak Gold ETF. \n\nKotak Gold Fund \n\n NAV:23.422\t\tExpense Ratio:0.5%%\t\tFund Size:Rs 1521.4 Cr \t\t Risk-O-Meter: High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				break;
			case 5:
				printf("\nTax-Saving Funds (ELSS): Equity-Linked Savings Schemes (ELSS) offer tax benefits under Section 80C of the Income Tax Act while investing primarily in equities.");
				printf("\n\n1.Axis Long Term Equity Fund: This fund aims to provide long-term capital appreciation by investing in a diversified portfolio of equity and equity-related instruments. \n\nAxis Long Term Equity Fund \n\n NAV:70.1426\t\tExpense Ratio:1.53%\t\tFund Size:Rs 32,223.67 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n2.Mirae Asset Tax Saver Fund: This ELSS fund seeks to generate long-term capital appreciation by investing in a diversified portfolio of equity and equity-related instruments. \n\nMirae Asset Tax Saver Fund \n\n NAV:35.233\t\tExpense Ratio:1.61%\t\tFund Size:Rs 17418.71 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n3.Aditya Birla Sun Life Tax Relief '96: This fund aims to generate long-term capital growth along with tax benefits by investing primarily in equity and equity-related instruments. \n\nAditya Birla Sun Life Tax Relief '96 \n\n NAV:44.2\t\tExpense Ratio:1.69%\t\tFund Size:Rs 14,252.7 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n4.ICICI Prudential Long Term Equity Fund: This fund aims to provide tax benefits along with long-term capital appreciation through investments in equities and equity-related instruments. \n\nICICI Prudential Long Term Equity Fund \n\n NAV:664.87\t\tExpense Ratio:1.76%\t\tFund Size:Rs 11,256.69 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\n5.DSP Tax Saver Fund: This ELSS fund aims to provide long-term capital appreciation by primarily investing in equities and equity-related securities. \n\nDSP Tax Saver Fund \n\n NAV:93.742\t\tExpense Ratio:1.69%\t\tFund Size:Rs 11,804.88 Cr \t\t Risk-O-Meter: Very High\n\n");
				printf("\n\n\t\t\t\t\t----------\t\t\t\t-----------");
				printf("\n\t\t\t\t\t|One-time|\t\t\t\t|Start SIP|");
				printf("\n\t\t\t\t\t----------\t\t\t\t-----------");
				break;
			default:
				printf("\n\nWrong choice!!!");
			}
			printf("\n\n*NAV:Net Asset Value");
			printf("\nDisclaimer: These rates were accurate at the time of creating this application and do not represent current market rates.");
			printf("\n\nDo you want to go back to Mutual Funds? press 1: ");
			scanf("%d",&c);
			if(c==1)
			{
			goto Mutual_Funds;
			}
			break;
		case 4:
			printf("\nCommodities: Investing in raw materials like gold, oil, agricultural products, etc.");
			printf("\n\n Commodities:\n");
			printf("\n\tSr.no\t\tCommodity\t\tPrice\t\tChange\t\tChg%%");
			printf("\n\t1.\t\tGold\t\t\t58,906.00\t53.00\t\t0.09%%");
			printf("\n\t2.\t\tSILVER\t\t\t69,967.00\t-14.00\t\t-0.02%%");
			printf("\n\t3.\t\tCRUDEOIL\t\t6,937.00\t64.00\t\t0.93%%");
			printf("\n\t4.\t\tNATURALGAS\t\t230.70\t\t2.10\t\t0.92%%");
			printf("\n\t5.\t\tALUMINIUM\t\t198.10\t\t-2.30\t\t-1.15%%");
			printf("\nDisclaimer: These rates were accurate at the time of creating this application and do not represent current market rates.");			
			break;
		case 5:
			printf("\nReal Estate: Investing in physical properties such as residential or commercial real estate for potential rental income or capital appreciation.");
			printf("\nTypes of Real Estate Investments: ");
			printf("\n1.Flipping: Buying properties at a lower price, renovating or improving them, and then selling them at a higher price for a profit.");
			printf("\n\n2.Land Investment: Buying undeveloped land with the expectation of future appreciation or development.");
			printf("\n\n3.Real Estate Development: Investing in the development of new properties, such as residential communities, commercial complexes, or mixed-use projects.");
			printf("\n\n4.Real Estate Crowdfunding: Participating in real estate investment projects by pooling funds with other investors through online platforms.");
			printf("\n\n5.Commercial Real Estate: Investing in properties used for business purposes, such as office buildings, retail spaces, industrial warehouses, and hotels.\nCommercial properties often offer higher rental income but can require more management.");
			printf("\n\n6.Vacation Rentals: Buying properties in desirable vacation destinations and renting them out to tourists and travelers for short-term stays through platforms like Airbnb.");
			printf("\n\n\nThis Type of Investment Requires High Investment and Has a Low Risk !!!");
			break;
		case 6:
			Options:
			printf("\nOptions: Contracts that give the investor the right (but not the obligation) to buy or sell an asset at a predetermined price within a specific timeframe.");
			printf("\n\n*Info: Option Expires on Every Thursday for Week And Last Thursday for Every Month\nYou Could Buy or Sell Option Only in a lot of 25/50/75/100/125 Units ");
			printf("\nHere are Some of the Most Traded Stock in Options");
			printf("\n\n1.BANKNINFY");
			printf("\n2.RELIANCE");
			printf("\n3.TCS");
			printf("\nEnter Your Choice: ");
			scanf("%d",&c2);
			switch(c2)
			{
			case 1:	
			{
				printf("\nBANKNINFY:");
				printf("\n\nExpiry: 17 Aug 23");
				printf("\nOI & Change\t\tOI Percent\tVolume\t\tPrice\t\tStrike Price\t\tCall<-Put\n\t\t\t\t\t\t\t\t\t\tSpot Price: 44199.10");
				printf("\n7,27,455\t\t2,223.77%%\t2,50,53,540\t338\t\t44,200");
				printf("\n14,27,610\t\t1,303.54%%\t6,00,81,600\t275\t\t44,300");
				printf("\n18,09,900\t\t843.84%%\t\t7,13,69,130\t221\t\t44,400");
				printf("\n37,14,195\t\t213.86%%\t\t8,03,45,385\t178\t\t44,500");
				printf("\n17,94,375\t\t138.00%%\t\t4,25,90,205\t138\t\t44,600");
				printf("\n\n\nOI & Change\t\tOI Percent\tVolume\t\tPrice\t\tStrike Price\t\tCall->Put\n\t\t\t\t\t\t\t\t\t\tSpot Price: 44199.10");
				printf("\n14,38,140\t\t164.03%%\t\t5,99,31,120\t172\t\t44,200");
				printf("\n13,27,770\t\t297.82%%\t\t10,52,75,655\t210\t\t44,300");
				printf("\n10,03,125\t\t120.95%%\t\t9,92,59,170\t261\t\t44,400");
				printf("\n16,71,390\t\t-6.85%%\t\t8,26,57,365\t310\t\t44,500");
				printf("\n4,93,080\t\t-8.20%%\t\t3,33,46,560\t368\t\t44,600");
				break;
			}
			case 2:
			{
				printf("\nRELIANCE:");
				printf("\n\nExpiry: 17 Aug 23");
				printf("\nOI & Change\t\tOI Percent\tVolume\t\tPrice\t\tStrike Price\t\tCall<-Put\n\t\t\t\t\t\t\t\t\t\tSpot Price: 2547.15");
				printf("\n17,84,000\t\t8.52%%\t\t74,10,750\t35.10\t\t2,560");
				printf("\n20,60,250\t\t-0.77%%\t\t38,68,500\t28.00\t\t2,580");
				printf("\n45,82,500\t\t5.45%%\t\t1,01,34,000\t22.80\t\t2,600");
				printf("\n5,27,500\t\t11.05%%\t\t21,74,500\t17.95\t\t2,620");
				printf("\n7,63,500\t\t4.09%%\t\t20,08,000\t13.90\t\t2,640");
				printf("\n\n\nOI & Change\t\tOI Percent\tVolume\t\tPrice\t\tStrike Price\t\tCall->Put\n\t\t\t\t\t\t\t\t\t\tSpot Price: 2547.15");
				printf("\n2,40,000\t\t40.56%%\t\t12,55,250\t47.05\t\t2,560");
				printf("\n1,27,000\t\t17.87%%\t\t1,90,250\t59.25\t\t2,580");
				printf("\n6,30,750\t\t-9.80%%\t\t7,99,250\t74.50\t\t2,600");
				printf("\n1,11,250\t\t4.95%%\t\t99,750\t\t88.10\t\t2,620");
				printf("\n4,91,250\t\t1.11%%\t\t26,000\t\t103.80\t\t2,640");
				break;
			}
			case 3:
			{
				printf("\nTCS:");
				printf("\n\nExpiry: 17 Aug 23");
				printf("\nOI & Change\t\tOI Percent\tVolume\t\tPrice\t\tStrike Price\t\tCall<-Put\n\t\t\t\t\t\t\t\t\t\tSpot Price: 3441.55");
				printf("\n3,52,100\t\t18.21%%\t\t5,80,825\t45.45\t\t3460");
				printf("\n1,91,625\t\t4.99%%\t\t2,94,700\t36.00\t\t3480");
				printf("\n10,49,650\t\t5.95%%\t\t12,79,950\t28.19\t\t3500");
				printf("\n1,72,025\t\t48.94%%\t\t2,54,275\t23.12\t\t3520");
				printf("\n1,69,225\t\t13.90%%\t\t1,87,250\t18.98\t\t3540");
				printf("\n\n\nOI & Change\t\tOI Percent\tVolume\t\tPrice\t\tStrike Price\t\tCall->Put\n\t\t\t\t\t\t\t\t\t\tSpot Price: 3441.55");
				printf("\n1,34,400\t\t0.79%%\t\t1,35,800\t67.50\t\t3460");
				printf("\n65,450\t\t\t-6.03%%\t\t42,175\t\t78.23\t\t3480");
				printf("\n2,65,125\t\t0.13%%\t\t1,38,775\t106.15\t\t3500");
				printf("\n30,625\t\t\t14.66%%\t\t7,875\t\t123.67\t\t3520");
				printf("\n38,320\t\t\t-8.20%%\t\t5,950\t\t122.90\t\t3540");	
				break;			
			}
			default:
			printf("\n\nWrong choice!!!");
		}
			printf("\n\n\nDo you want to go back to Options Menu? press 1: ");
			scanf("%d",&c);
			if(c==1)
			{
			goto Options;
			}
			break;
		case 7:
			Forex:
			printf("\n1.For Info");
			printf("\n2.For Chart");
			printf("\nEnter your choice: ");
			scanf("%d",&c2);
			switch(c2)
			{
			case 1:	
			{
			printf("\n\nForex trading, also known as foreign exchange trading or currency trading, involves the buying and selling of currencies on the foreign exchange market with the goal of making a profit.\nThe forex market is the largest and most liquid financial market in the world, where currencies are traded against one another in currency pairs.");
			printf("\n\nConcepts:\n");
			printf("\n\nCurrency Pairs: In forex trading, currencies are traded in pairs. The first currency in the pair is called the 'base currency', and the second currency is the 'quote currency'.\nThe exchange rate represents how much of the quote currency is needed to purchase one unit of the base currency.");
			printf("\n\nBid and Ask Price: The bid price is the price at which a trader can sell a currency pair, and the ask price is the price at which a trader can buy the currency pair. The difference between the bid and ask price is known as the spread.");
			printf("\n\nPips: A 'pip' is the smallest price move that a given exchange rate can make based on market convention. It's often used to measure price changes in the forex market.");
			printf("\n\nMarket Hours: The forex market operates 24 hours a day, five days a week due to global time zone differences.");
			printf("\n\nVolatility: The forex market can be highly volatile, with prices subject to rapid and unpredictable fluctuations. Traders often use technical and fundamental analysis to make informed decisions.");
			printf("\n\nRisks: While forex trading offers potential profits, it also comes with significant risks due to leverage and the volatile nature of the market. Many traders can experience losses if not managed properly.");
			break;
			}			
			case 2:
			{
			printf("\n\nCurrencies Pairs:");
			printf("\n\n\t NAME\t\tPercent\t\tPRICE\t\t\tTIME");
			printf("\n\tEUR/USD\t\t-0.173\t\t1.0966\t\t\t11:05 PM");
			printf("\n\tUSD/INR\t\t-0.0007\t\t82.957\t\t\t01:29 PM");
			printf("\n\tBTC/USD\t\t-0.2716\t\t29335.225\t\t06:25 PM");
			printf("\n\tUSD/JPY\t\t0.0342\t\t144.9545\t\t10:05 AM");
			printf("\n\tUSD/CAD\t\t0.0331\t\t1.3446\t\t\t01:29 PM");
			printf("\n\nDisclaimer: These rates were accurate at the time of creating this application and do not represent current market rates.");
			}
			default:
			printf("\n\nWrong choice!!!");
		}
			printf("\n\n\nDo you want to go back to Forex Menu? press 1: ");
			scanf("%d",&c);
			if(c==1)
			{
			goto Forex;
			}
			break;
		}
	printf("\n\nDo You Want To Visit Main Menu? Press 1: ");
	scanf("%d",&c);
	if(c==1)
	{
		goto menu;
	}
}

