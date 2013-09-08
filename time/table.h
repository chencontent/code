#define YEAR_SRT 1901
#define YEAR_NUM 200
#define THIS_YEAR(x) Year_Info[x - YEAR_SRT]

static long Year_Info[YEAR_NUM] = {
/*
	YEAR:LC:ZY:ZYDAY:L:LEAP:MONTHS
	1901:01:10:10011:0:0000:010010101111
	年   立 春 春    闰闰无 十非的
	份   春 节 节    月月则 二闰大
             日 阳 阳    大月为 个月小
             偏 历 历    小份零
             移 月 日
             量 份 期
*/
0x1A604AF, 0x2900A57, 0x27A554D, 0x2A00D27, 0x1880D95, //1901-1905
0x2734655, 0x29A056B, 0x28409AD, 0x16C255D, 0x29404AF, //1906-1910
0x27C6A5B, 0x2A40A4D, 0x18C0D25, 0x1755D25, 0x29C0B55, //1911-1915
0x2860D6A, 0x16E2ADA, 0x196095B, 0x2837497, 0x2A80497, //1916-1920
0x1900A4B, 0x1785B4B, 0x2A006A5, 0x28A06D5, 0x1714AB5, //1921-1925
0x19A02B7, 0x2840957, 0x26E252F, 0x1940497, 0x17C6656, //1926-1930
0x2A20D4A, 0x28C0EA5, 0x17556A9, 0x19C05AD, 0x28802B7, //1931-1935
0x271386E, 0x196092E, 0x17F7C8D, 0x2A60C95, 0x2900D4B, //1936-1940
0x1776D8A, 0x19E0B55, 0x28A056B, 0x2734A5B, 0x19A025D, //1941-1945
0x184092D, 0x16C2D2B, 0x2940A95, 0x17A7B55, 0x1A206CB, //1946-1950
0x18C0B55, 0x2775535, 0x19C04DB, 0x1860A5B, 0x1713457, //1951-1955
0x298052B, 0x17E8A9B, 0x1A40E95, 0x19006AB, 0x2786AEA, //1956-1960
0x19E0AB5, 0x18A04B7, 0x1724AAE, 0x29A0A57, 0x1840527, //1961-1965
0x16A3F26, 0x1920D95, 0x27C75B5, 0x1A2056B, 0x18C096D, //1966-1970
0x17654DD, 0x29E04AD, 0x1860A4D, 0x16E4D4D, 0x1960D25, //1971-1975
0x27E8D55, 0x1A40B55, 0x18E0B6A, 0x179695A, 0x2A0095B, //1976-1980
0x18A049B, 0x1724A97, 0x19A0A4B, 0x184AB27, 0x1A806A5, //1981-1985
0x19206D5, 0x17A6AF4, 0x1A20AB6, 0x18C0957, 0x17654AF, //1986-1990
0x19E0497, 0x188064B, 0x16E374A, 0x1940EA5, 0x17E86B5, //1991-1995
0x1A605AD, 0x18E0AB6, 0x178596D, 0x1A0092F, 0x18A0C96, //1996-2000
0x1704D95, 0x1980D4B, 0x1820DA5, 0x16C2755, 0x192056B, //2001-2005
0x17A7ABB, 0x1A4025D, 0x18E092D, 0x1745CAB, 0x19C0A95, //2006-2010
0x1860B4B, 0x16E4BAA, 0x1940AD5, 0x17E955D, 0x1A604BB, //2011-2015
0x1900A5B, 0x0796517, 0x1A0052B, 0x18A0A93, 0x1724795, //2016-2020
0x09806AB, 0x1820AD5, 0x16C25B5, 0x19404B7, 0x07A6A6E, //2021-2025
0x1A20A4E, 0x18C0D26, 0x1745EA6, 0x09A0D53, 0x18605AB, //2026-2030
0x16E376A, 0x196096D, 0x07EB4AF, 0x1A604AD, 0x1900A4D, //2031-2035
0x1796D0B, 0x09E0D25, 0x1880D53, 0x0705BD4, 0x1980B5A, //2036-2040
0x082056D, 0x16C255B, 0x194049B, 0x17C7A57, 0x0A20A4B, //2041-2045
0x18C0AA5, 0x1755B25, 0x19C06D3, 0x0840ADA, 0x06F34B6, //2046-2050
0x1960937, 0x182849F, 0x0A60497, 0x090064B, 0x179668A, //2051-2055
0x19E0EA5, 0x08806AB, 0x0714A6C, 0x0980AAE, 0x184092E, //2056-2060
0x06A3D2E, 0x0920C96, 0x17A7D55, 0x1A20D4B, 0x08A0DA5, //2061-2065
0x07455D5, 0x19C056B, 0x1860A6D, 0x06E455D, 0x096052D, //2066-2070
0x17E8A9B, 0x1A60A95, 0x08E0B4B, 0x0766B6A, 0x19E0AD5, //2071-2075
0x18A055B, 0x0704ABA, 0x0980A5B, 0x184052B, 0x16C3B27, //2076-2080
0x0920693, 0x07A7733, 0x0A206AB, 0x18C0AD5, 0x07554B5, //2081-2085
0x09C04B7, 0x0860A57, 0x170454E, 0x0940D16, 0x07C8E96, //2086-2090
0x0A40D52, 0x18E0DAA, 0x07766AA, 0x09E056D, 0x08A04AF, //2091-2095
0x1724A9D, 0x0980A2D, 0x0820D15, 0x06A2F25, 0x1920D53  //2096-2100
};
