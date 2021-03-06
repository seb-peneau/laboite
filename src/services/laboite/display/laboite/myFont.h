#include <MD_MAX72xx.h>

const MD_MAX72XX::fontType_t myFont[] PROGMEM = 
{
	0, 	// 0     
	0, 	// 1     
	0, 	// 2     
	0, 	// 3     
	0, 	// 4     
	0, 	// 5     
	0, 	// 6     
	0, 	// 7     
	0, 	// 8     
	0, 	// 9     
	0, 	// 10     
	0, 	// 11     
	0, 	// 12     
	0, 	// 13     
	0, 	// 14     
	0, 	// 15     
	0, 	// 16     
	0, 	// 17     
	0, 	// 18     
	0, 	// 19     
	0, 	// 20     
	0, 	// 21     
	0, 	// 22     
	0, 	// 23     
	0, 	// 24     
	0, 	// 25     
	0, 	// 26     
	0, 	// 27     
	0, 	// 28     
	0, 	// 29     
	0, 	// 30     
	0, 	// 31     
	1, 0, 	// 32     SPACE
	0, 	// 33     
	0, 	// 34     
	0, 	// 35     
	0, 	// 36     
	0, 	// 37     
	0, 	// 38     
	0, 	// 39     
	0, 	// 40     
	0, 	// 41     
	0, 	// 42     
	0, 	// 43     
	0, 	// 44     
	0, 	// 45     
	0, 	// 46     
	0, 	// 47     
	3, 248, 136, 248, 	// 48     0
	1, 248, 	// 49     1
	3, 232, 168, 184, 	// 50     2
	3, 136, 168, 248, 	// 51     3
	3, 56, 32, 240, 	// 52     4
	3, 184, 168, 232, 	// 53     5
	3, 248, 168, 232, 	// 54     6
	3, 8, 232, 24, 	// 55     7
	3, 248, 168, 248, 	// 56     8
	3, 184, 168, 248, 	// 57     9
	1, 160, 	// 58     :
	0, 	// 59     
	0, 	// 60     
	0, 	// 61     
	0, 	// 62     
	0, 	// 63     
	0, 	// 64     
	3, 248, 40, 248, 	// 65     A
	3, 248, 168, 112, 	// 66     B
	3, 248, 136, 136, 	// 67     C
	3, 248, 136, 112, 	// 68     D
	3, 248, 168, 136, 	// 69     E
	3, 248, 40, 8, 	// 70    F
	4, 248, 136, 168, 232, 	// 71     G
	3, 248, 32, 248, 	// 72     H
	3, 136, 248, 136, 	// 73    I 
	3, 136, 248, 8, 	// 74     J
	3, 248, 32, 216, 	// 75     K
	3, 248, 128, 128, 	// 76     L
	5, 248, 8, 16, 8, 248, 	// 77     M
	4, 248, 16, 32, 248, 	// 78     N
	3, 248, 136, 248, 	// 79     O
	3, 248, 40, 56, 	// 80     P
	4, 248, 136, 248, 128, 	// 81     Q
	3, 248, 104, 144, 	// 82     R
	3, 184, 168, 232, 	// 83     S
	3, 8, 248, 8, 	// 84     T
	3, 248, 128, 248, 	// 85     U
	5, 24, 96, 128, 96, 24, 	// 86     V
	5, 248, 64, 32, 64, 248, 	// 87     W
	5, 136, 80, 32, 80, 136, 	// 88     X
	3, 24, 224, 24, 	// 89     Y
	3, 200, 168, 152, 	// 90     Z
	0, 	// 91     
	0, 	// 92     
	0, 	// 93     
	0, 	// 94     
	0, 	// 95     
	0, 	// 96     
	0, 	// 97     
	0, 	// 98     
	0, 	// 99     
	0, 	// 100     
	0, 	// 101     
	0, 	// 102     
	0, 	// 103     
	0, 	// 104     
	0, 	// 105     
	0, 	// 106     
	0, 	// 107     
	0, 	// 108     
	0, 	// 109     
	0, 	// 110     
	0, 	// 111     
	0, 	// 112     
	0, 	// 113     
	0, 	// 114     
	0, 	// 115     
	0, 	// 116     
	0, 	// 117     
	0, 	// 118     
	0, 	// 119     
	0, 	// 120     
	0, 	// 121     
	0, 	// 122     
	0, 	// 123     
	0, 	// 124     
	0, 	// 125     
	0, 	// 126     
	0, 	// 127     
	0, 	// 128     
	0, 	// 129     
	0, 	// 130     
	0, 	// 131     
	0, 	// 132     
	0, 	// 133     
	0, 	// 134     
	0, 	// 135     
	0, 	// 136     
	0, 	// 137     
	0, 	// 138     
	0, 	// 139     
	0, 	// 140     
	0, 	// 141     
	0, 	// 142     
	0, 	// 143     
	0, 	// 144     
	0, 	// 145     
	0, 	// 146     
	0, 	// 147     
	0, 	// 148     
	0, 	// 149     
	0, 	// 150     
	0, 	// 151     
	0, 	// 152     
	0, 	// 153     
	0, 	// 154     
	0, 	// 155     
	0, 	// 156     
	0, 	// 157     
	0, 	// 158     
	0, 	// 159     
	0, 	// 160     
	0, 	// 161     
	0, 	// 162     
	0, 	// 163     
	0, 	// 164     
	0, 	// 165     
	0, 	// 166     
	0, 	// 167     
	8, 145, 66, 24, 61, 188, 24, 66, 137, 	// 168     Sun
	8, 113, 82, 72, 77, 76, 72, 82, 97, 	// 169       Sun cover with cloud
	8, 48, 40, 40, 36, 36, 36, 40, 48, 	// 170         Cloud
	0, 	// 171     
	0, 	// 172     
	0, 	// 173     
	0, 	// 174     
	0, 	// 175     
	0, 	// 176     
	0, 	// 177     
	0, 	// 178     
	0, 	// 179     
	0, 	// 180     
	0, 	// 181     
	0, 	// 182     
	0, 	// 183     
	0, 	// 184     
	0, 	// 185     
	0, 	// 186     
	0, 	// 187     
	0, 	// 188     
	8, 12, 10, 10, 9, 9, 9, 10, 12, 	// 189     Rain anim
	8, 12, 26, 10, 9, 9, 9, 10, 12, 	// 190     Rain anim
	8, 12, 42, 10, 9, 25, 9, 10, 12, 	// 191     Rain anim
	8, 12, 74, 10, 9, 41, 9, 26, 12, 	// 192     Rain anim
	8, 12, 138, 10, 9, 73, 9, 42, 12, 	// 193      Rain anim
	8, 12, 10, 10, 9, 137, 9, 74, 12, 	// 194     Rain anim
	8, 12, 10, 10, 9, 9, 9, 138, 12, 	// 195     Rain anim
	8, 0, 0, 0, 0, 0, 0, 0, 0, 	// 196     Rain anim
	0, 	// 197     
	0, 	// 198     
	0, 	// 199     
	0, 	// 200     
	0, 	// 201     
	0, 	// 202     
	0, 	// 203     
	0, 	// 204     
	0, 	// 205     
	0, 	// 206     
	0, 	// 207     
	0, 	// 208     
	0, 	// 209     
	0, 	// 210     
	0, 	// 211     
	0, 	// 212     
	0, 	// 213     
	0, 	// 214     
	0, 	// 215     
	0, 	// 216     
	0, 	// 217     
	0, 	// 218     
	0, 	// 219     
	0, 	// 220     
	0, 	// 221     
	0, 	// 222     
	0, 	// 223     
	0, 	// 224     
	0, 	// 225     
	0, 	// 226     
	0, 	// 227     
	0, 	// 228     
	0, 	// 229     
	0, 	// 230     
	0, 	// 231     
	0, 	// 232     
	0, 	// 233     
	0, 	// 234     
	0, 	// 235     
	0, 	// 236     
	0, 	// 237     
	0, 	// 238     
	0, 	// 239     
	0, 	// 240     
	0, 	// 241     
	0, 	// 242     
	0, 	// 243     
	0, 	// 244     
	0, 	// 245     
	0, 	// 246     
	0, 	// 247     
	0, 	// 248     
	0, 	// 249     
	0, 	// 250     
	0, 	// 251     
	0, 	// 252     
	0, 	// 253     
	0, 	// 254     
	0, 	// 255
};