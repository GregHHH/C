void remplir (int vec[100], int nb);
void afficher(int vec[100], int n);
void tousaucarre(int vec[100], int n);
int sommevec(int vec[100], int n);
int plusgdv(int vec[100], int n);
int secondv(int vec[100], int n);
void insere(int mv[100], int p, int v);

int main(){
	int n, vec[100], mv[100], p;
	n = 30;
	remplir(vec, n);
	afficher(vec, n);
	printf("Somme %d\n", sommevec(vec, n));
	tousaucarre(vec, n);
	afficher(vec, n);
	printf("plus grand %d\n", plusgdv(vec, n));
	printf("second %d\n", secondv(vec, n));
	p = 0;
	insere(mv, p, 3);
	p += 1;
	insere(mv, p, 4);
	p += 1;
	insere(mv, p, 2);
	p += 1;
	afficher(mv, p);
}

void remplir (int vec[100], int nb) {
  float x, eps;
  int i;
  if (nb >= 100)
	return;
  x = 1.5;
  eps = 0.173;
  for (i = 0; i < nb; i = i + 1) {
	vec [i] = x;
	x = x + eps;
	if (x > 2.0)
	  eps = 0.01 - eps;
	if (x < 0.5)
	  eps = 0.015 - eps;
  }
}

void afficher(int vec[100], int n){
	int i;
	for (i = 0; i < n; i += 1){
	printf("%d\n", vec[i]);
}
}

void tousaucarre(int vec[100], int n){
	int i;
	for (i = 0; i < n; i += 1){
	vec[i] = vec[i] * vec[i];
}
}

int sommevec(int vec[100], int n){
int som, i;
som = 0;
for (i = 0; i < n; i += 1){
	som += vec[i];
}
return som;
}

int plusgdv(int vec[100], int n){
	int max, i;
	max = 0;
	for (i = 0; i < n; i += 1){
		if (vec[i] > max){
			max = vec[i];
		}
	}
	return max;
}

int secondv(int vec[100], int n){
	int temp1, second, max, i;
	second = 0;
	max = 0;
	temp1 = 0;
	for (i = 0; i < n; i += 1){
		if (vec[i] > max){
			max = vec[i];
			temp1 = i;
		}
	}
	for (i = 0; i < n; i += 1){
		vec[temp1] = 0;
		if (vec[i] > second){
			second = vec[i];		
		}
	}
	vec[temp1] = max;
	return second;
}

int secondv2(int vec[100], int n){
	
}

void insere(int mv[100], int p, int v){
	mv[p] = v;
} 
