#include <stdio.h>
#include <string.h>

int main() {
	int T, N, Vitamina_C, mais, menos;
	char Fruta[100];

	while(1) {
		Vitamina_C = 0;
		scanf("%d", &T);

		if(T == 0) {
			return 0;
		} else {
			while(T--) {
				scanf("%d %[^\n]", &N, Fruta);
				getchar();

				if(strcmp(Fruta, "suco de laranja")==0) {
					Vitamina_C = Vitamina_C + (N*120);
				}

				else if(strcmp(Fruta, "morango fresco")==0) {
					Vitamina_C = Vitamina_C + (N*85);
				}

				else if(strcmp(Fruta, "mamao")==0) {
					Vitamina_C = Vitamina_C + (N*85);
				}

				else if(strcmp(Fruta, "goiaba vermelha")==0) {
					Vitamina_C = Vitamina_C + (N*70);
				}

				else if(strcmp(Fruta, "manga")==0) {
					Vitamina_C = Vitamina_C  + (N*56);
				}

				else if(strcmp(Fruta, "laranja")==0) {
					Vitamina_C = Vitamina_C + (N*50);
				}

				else {
					Vitamina_C = Vitamina_C + (N*34);
				}
			}

			if((Vitamina_C >= 110) && (Vitamina_C <= 130)) {
				printf("%d mg\n", Vitamina_C);
			} 
            else {
				if(Vitamina_C < 110) {
                    mais = 110-Vitamina_C;
					printf("Mais %d mg\n", mais);
				}

				else if(Vitamina_C > 130) {
                    menos = Vitamina_C-130;
					printf("Menos %d mg\n", menos);
				}
			}
		}
	}

	return 0;
}
